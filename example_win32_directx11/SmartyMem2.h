#pragma once
#include <Windows.h>
#include <vector>
#include <string> 
#include <iostream>
#include <TlHelp32.h>
#include <tchar.h>
#include "imgui_settings.h"
#include "globals.h"
extern std::string MemoryLogs;

class SmartyMemory
{

public:
    const char* GetEmulatorRunning() {
        if (GetPid("HD-Player.exe") != 0)
            return "HD-Player.exe";
        else if (GetPid("HD-Player") != 0)
            return "HD-Player";
        else if (GetPid("MEmuHeadless.exe") != 0)
            return "MEmuHeadless.exe";
        else if (GetPid("LdVBoxHeadless.exe") != 0)
            return "LdVBoxHeadless.exe";
        else if (GetPid("AndroidProcess.exe") != 0)
            return "AndroidProcess.exe";
        else if (GetPid("Nox.exe") != 0)
            return "Nox.exe";
        return nullptr;
    }

    void ReWrite(std::string type, DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* Search, BYTE* Replace) {}

    void Scope2X() {}

    void Scope4X() {}

    void HeadTracking() {}

    void AimFov() {}

    void NoRecoil() {}

    void SniperScope() {}

    void AntiLogo() {}

    void SniperSwitch() {}

    void MagicBulletV1() {}

    void BlackSky() {
        CloseHandle(ProcessHandle);
    }

    void deWrite(std::string type, DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* Search, BYTE* Replace) {
        if (!AttackProcess(GetEmulatorRunning()))
            MemoryLogs = "Panel : Error";

        bool Status = ReplacePattern(dwStartRange, dwEndRange, Search, Replace, true);
        if (Status)
            MemoryLogs = "Panel : Error";
        else
            MemoryLogs = "Panel : Error";

        CloseHandle(ProcessHandle);
    }

    DWORD ProcessId = 0;
    HANDLE ProcessHandle;

    typedef struct _MEMORY_REGION {
        DWORD_PTR dwBaseAddr;
        DWORD_PTR dwMemorySize;
    } MEMORY_REGION;

    int GetPid(const char* procname) {
        if (procname == NULL)
            return 0;
        DWORD pid = 0;
        DWORD threadCount = 0;

        HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        PROCESSENTRY32 pe;

        pe.dwSize = sizeof(PROCESSENTRY32);
        Process32First(hSnap, &pe);
        while (Process32Next(hSnap, &pe)) {
            if (_tcsicmp(pe.szExeFile, procname) == 0) {
                if ((int)pe.cntThreads > threadCount) {
                    threadCount = pe.cntThreads;
                    pid = pe.th32ProcessID;
                }
            }
        }
        return pid;
    }

    BOOL AttackProcess(const char* procname) {
        DWORD ProcId = GetPid(procname);
        if (ProcId == 0)
            return false;

        ProcessId = ProcId;
        ProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, 0, ProcessId);
        return ProcessHandle != nullptr;
    }

    bool ChangeProtection(ULONG Address, size_t size, DWORD NewProtect, DWORD& OldProtect) {
        return VirtualProtectEx(ProcessHandle, (LPVOID)Address, size, NewProtect, &OldProtect);
    }

    bool ReplacePattern(DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* SearchAob, BYTE* ReplaceAob, bool ForceWrite = false) {
        int RepByteSize = _msize(ReplaceAob);
        if (RepByteSize <= 0) return false;
        std::vector<DWORD_PTR> foundedAddress;
        FindPattern(dwStartRange, dwEndRange, SearchAob, foundedAddress);
        if (foundedAddress.empty())
            return false;

        OutputDebugStringA(std::to_string(foundedAddress.size()).c_str());

        DWORD OldProtect;
        for (int i = 0; i < foundedAddress.size(); i++) {
            ChangeProtection(foundedAddress[i], RepByteSize, PAGE_EXECUTE_READWRITE, OldProtect);
            WriteProcessMemory(ProcessHandle, (LPVOID)foundedAddress[i], ReplaceAob, RepByteSize, 0);
        }

        return true;
    }

    std::vector<DWORD_PTR> FindPatternAddresses(DWORD_PTR startAddress, DWORD_PTR endAddress, BYTE* pattern, size_t patternSize) {
        std::vector<DWORD_PTR> addresses;
        FindPattern(startAddress, endAddress, pattern, addresses);
        return addresses;
    }

    bool CompareMemory(DWORD_PTR address, BYTE* pattern, size_t patternSize) {
        for (size_t i = 0; i < patternSize; i++) {
            if (*reinterpret_cast<BYTE*>(address + i) != pattern[i]) {
                return false;
            }
        }
        return true;
    }

    bool FindPattern(DWORD_PTR StartRange, DWORD_PTR EndRange, BYTE* SearchBytes, std::vector<DWORD_PTR>& AddressRet) {
        BYTE* pCurrMemoryData = NULL;
        MEMORY_BASIC_INFORMATION mbi;
        std::vector<MEMORY_REGION> m_vMemoryRegion;
        mbi.RegionSize = 0x1000;
        DWORD_PTR dwAddress = StartRange;
        DWORD_PTR nSearchSize = _msize(SearchBytes);

        while (VirtualQueryEx(ProcessHandle, (LPCVOID)dwAddress, &mbi, sizeof(mbi)) && (dwAddress < EndRange) && ((dwAddress + mbi.RegionSize) > dwAddress)) {
            if ((mbi.State == MEM_COMMIT) && ((mbi.Protect & PAGE_GUARD) == 0) && (mbi.Protect != PAGE_NOACCESS) && ((mbi.AllocationProtect & PAGE_NOCACHE) != PAGE_NOCACHE)) {
                MEMORY_REGION mData = { 0 };
                mData.dwBaseAddr = (DWORD_PTR)mbi.BaseAddress;
                mData.dwMemorySize = mbi.RegionSize;
                m_vMemoryRegion.push_back(mData);
            }
            dwAddress = (DWORD_PTR)mbi.BaseAddress + mbi.RegionSize;
        }

        std::vector<MEMORY_REGION>::iterator it;
        for (it = m_vMemoryRegion.begin(); it != m_vMemoryRegion.end(); it++) {
            MEMORY_REGION mData = *it;
            DWORD_PTR dwNumberOfBytesRead = 0;
            pCurrMemoryData = new BYTE[mData.dwMemorySize];
            ZeroMemory(pCurrMemoryData, mData.dwMemorySize);
            ReadProcessMemory(ProcessHandle, (LPCVOID)mData.dwBaseAddr, pCurrMemoryData, mData.dwMemorySize, &dwNumberOfBytesRead);
            if ((int)dwNumberOfBytesRead <= 0) {
                delete[] pCurrMemoryData;
                continue;
            }
            DWORD_PTR dwOffset = 0;
            int iOffset = Memfind(pCurrMemoryData, dwNumberOfBytesRead, SearchBytes, nSearchSize);
            while (iOffset != -1) {
                dwOffset += iOffset;
                AddressRet.push_back(dwOffset + mData.dwBaseAddr);
                dwOffset += nSearchSize;
                iOffset = Memfind(pCurrMemoryData + dwOffset, dwNumberOfBytesRead - dwOffset - nSearchSize, SearchBytes, nSearchSize);
            }
            if (pCurrMemoryData != NULL) {
                delete[] pCurrMemoryData;
                pCurrMemoryData = NULL;
            }
        }
        return TRUE;
    }

    int Memfind(BYTE* buffer, DWORD_PTR dwBufferSize, BYTE* bstr, DWORD_PTR dwStrLen) {
        if (dwBufferSize < 0) {
            return -1;
        }
        DWORD_PTR  i, j;
        for (i = 0; i < dwBufferSize; i++) {
            for (j = 0; j < dwStrLen; j++) {
                if (buffer[i + j] != bstr[j] && bstr[j] != '?')
                    break;
            }
            if (j == dwStrLen)
                return i;
        }
        return -1;
    }

    static int findMyProc(const char* procname) {
        if (procname == NULL)
            return 0;
        DWORD pid = 0;
        DWORD threadCount = 0;

        HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        PROCESSENTRY32 pe;

        pe.dwSize = sizeof(PROCESSENTRY32);
        Process32First(hSnap, &pe);
        while (Process32Next(hSnap, &pe)) {
            if (_tcsicmp(pe.szExeFile, procname) == 0) {
                if ((int)pe.cntThreads > threadCount) {
                    threadCount = pe.cntThreads;
                    pid = pe.th32ProcessID;
                }
            }
        }
        return pid;
    }
};

