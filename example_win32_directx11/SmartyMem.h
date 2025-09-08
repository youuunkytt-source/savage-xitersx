#pragma once
#pragma once
#include <Windows.h>
#include <vector>
#include <string> 
#include <iostream>
#include <TlHelp32.h>
#include <tchar.h>
#define WIN32_LEAN_AND_MEAN
#include <winternl.h>
#include "imgui_settings.h"


#pragma comment(lib, "ntdll.lib")

extern std::string MemoryLogs;

extern "C" NTSTATUS ZwReadVirtualMemory(HANDLE hProcess, LPVOID lpBaseAddress, void* lpBuffer, SIZE_T nSize, SIZE_T * lpNumberOfBytesRead = NULL);
extern "C" NTSTATUS ZwWriteVirtualMemory(HANDLE hProcess, LPVOID lpBaseAddress, void* lpBuffer, SIZE_T nSize, SIZE_T * lpNumberOfBytesRead = NULL);
extern "C" NTSTATUS ZwProtectVirtualMemory(HANDLE hProcess, LPVOID BaseAddress, size_t  NumberOfBytesToProtect, ULONG NewAccessProtection, PULONG OldAccessProtection);

class Memory
{

public:
    DWORD ProcessId = 0;
    HANDLE ProcessHandle;

    typedef struct _MEMORY_REGION
    {
        DWORD_PTR dwBaseAddr;
        DWORD_PTR dwMemorySize;
    }MEMORY_REGION;

    int GetPid(const char* procname)
    {

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

    const char* GetEmulatorRunning()
    {
        if (GetPid("HD-Player.exe") != 0)
            return "HD-Player.exe";

        else if (GetPid("LdVBoxHeadless.exe") != 0)
            return "LdVBoxHeadless.exe";

        else if (GetPid("MEmuHeadless.exe") != 0)
            return "MEmuHeadless.exe";

        else if (GetPid("LdVBoxHeadless.exe") != 0)
            return "LdVBoxHeadless.exe";

        else if (GetPid("AndroidProcess.exe") != 0)
            return "AndroidProcess.exe";

        else if (GetPid("aow_exe.exe") != 0)
            return "aow_exe.exe";

        else if (GetPid("NoxVMHandle.exe") != 0)
            return "NoxVMHandle.exe";
    }

    std::vector<DWORD_PTR> AddressScan;
    std::vector<BYTE> ScanAimbot = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA5, 0x43, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF };

    std::vector<DWORD_PTR> AddressScan1;
    std::vector<BYTE> ScanAimbot1 = { 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA5, 0x43, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF };

    void EnableAimHead()
    {
      /*  MemoryLogs = "Injecting : Aimbot External";*/
        notificationSystem.Notification("Notification", "Injecting - Aimbot External", main_color);

        if (!AttackProcess(GetEmulatorRunning()))

            std::cout << "An unexpected error occurred";

        SYSTEM_INFO si;
        GetSystemInfo(&si);

        DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
        DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

        AddressScan.clear();

        FindPattern(0x0L, 0x00007fffffffffff, ScanAimbot.data(), AddressScan);


        if (AddressScan.empty())
        {
            Beep(1000, 900);
          /*  MemoryLogs = "Aimbot External : Failed!";*/
            notificationSystem.Notification("Notification", "Aimbot External : Failed !", main_color);
        }
        else
        {

            std::cout << AddressScan.size() << std::endl;
            for (int i = 0; i < AddressScan.size(); i++)
            {
                DWORD_PTR addressscan = AddressScan[i] + 0x2c;
                DWORD_PTR addressrep = AddressScan[i] + 0x28;
                int buffer;

                ReadProcessMemory(ProcessHandle, (LPVOID)(addressscan), &buffer, sizeof(buffer), NULL);
                WriteProcessMemory(ProcessHandle, (LPVOID)(addressrep), &buffer, sizeof(buffer), 0);
            }
            Beep(500, 600);
        /*    MemoryLogs = "Aimbot External : Injected!";*/
            notificationSystem.Notification("Notification", "Aimbot External : Injected !", main_color);


        }
        CloseHandle(ProcessHandle);
    }

    void V2()
    {
     /*   MemoryLogs = "Injecting Aimbot External V2";*/
        notificationSystem.Notification("Notification", "Injecting - Aimbot External V2", main_color);

        if (!AttackProcess(GetEmulatorRunning()))
            std::cout << "An unexpected error occurred";
        SYSTEM_INFO si;
        GetSystemInfo(&si);

        DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
        DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

        AddressScan1.clear();

        FindPattern(0x0L, 0x00007fffffffffff, ScanAimbot1.data(), AddressScan1);


        if (AddressScan1.empty())
        {
            Beep(1000, 900);
          /*  MemoryLogs = "Aimbot External V2 : Failed!";*/
            notificationSystem.Notification("Notification", "Aimbot External V2 : Failed !", main_color);
        }
        else
        {

            std::cout << AddressScan1.size() << std::endl;
            for (int i = 0; i < AddressScan1.size(); i++)
            {
                DWORD_PTR addressscan1 = AddressScan1[i] + 96L;
                DWORD_PTR addressrep1 = AddressScan1[i] + 0x5C;
                int buffer;

                ReadProcessMemory(ProcessHandle, (LPVOID)(addressscan1), &buffer, sizeof(buffer), NULL);
                WriteProcessMemory(ProcessHandle, (LPVOID)(addressrep1), &buffer, sizeof(buffer), 0);
            }
            Beep(500, 600);
           /* MemoryLogs = "Aimbot External V2 : Injected!";*/
            notificationSystem.Notification("Notification", "Aimbot External V2 : Injected !", main_color);


        }
        CloseHandle(ProcessHandle);
    }

    void EnableDrag()
    {
       /* MemoryLogs = "Injecting Drag External";*/
        notificationSystem.Notification("Notification", "Injecting - Drag External", main_color);

        if (!AttackProcess(GetEmulatorRunning()))

            std::cout << "An unexpected error occurred";
        SYSTEM_INFO si;
        GetSystemInfo(&si);

        DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
        DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

        AddressScan.clear();

        FindPattern(0x0L, 0x00007fffffffffff, ScanAimbot.data(), AddressScan);


        if (AddressScan.empty())
        {
            Beep(1000, 900);
            /*MemoryLogs = "Drag External : Failed!";*/
            notificationSystem.Notification("Notification", "Drag External : Failed !", main_color);
        }
        else
        {

            std::cout << AddressScan.size() << std::endl;
            for (int i = 0; i < AddressScan.size(); i++)
            {
                DWORD_PTR addressscan = AddressScan[i] + 0x5c;
                DWORD_PTR addressrep = AddressScan[i] + 0x28;
                int buffer;

                ReadProcessMemory(ProcessHandle, (LPVOID)(addressscan), &buffer, sizeof(buffer), NULL);
                WriteProcessMemory(ProcessHandle, (LPVOID)(addressrep), &buffer, sizeof(buffer), 0);
            }
            Beep(500, 600);
           /* MemoryLogs = "Aimbot Drag : Injected!";*/
            notificationSystem.Notification("Notification", "Drag External : Injected !", main_color);


        }
        CloseHandle(ProcessHandle);
    }

    void ReWrite(std::string type, DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* Search, BYTE* Replace)
    {
        if (!AttackProcess(GetEmulatorRunning()))
            MemoryLogs = type + ": An unexpected error occurred";

        MemoryLogs = "Applying - " + type;
        bool Status = ReplacePattern(dwStartRange, dwEndRange, Search, Replace);
        if (Status)
            MemoryLogs = type + " - Enabled!";
        else
            MemoryLogs = type + " : Failed to Enable!";

        CloseHandle(ProcessHandle);
    }
    void deWrite(std::string type, DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* Search, BYTE* Replace)
    {
        if (!AttackProcess(GetEmulatorRunning()))
            MemoryLogs = type + ": An unexpected error occurred";;

        bool Status = ReplacePattern(dwStartRange, dwEndRange, Search, Replace);
        if (Status)
            MemoryLogs = type + " - Disabled!";
        else
            MemoryLogs = type + " : Failed to Disable!";

        CloseHandle(ProcessHandle);
    }

    BOOL AttackProcess(const char* procname)
    {
        DWORD ProcId = GetPid(GetEmulatorRunning());
        if (ProcId == 0)
            return false;

        ProcessId = ProcId;
        ProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, 0, ProcessId);
        return ProcessHandle != nullptr;
    }

    bool ReplacePattern(DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* SearchAob, BYTE* ReplaceAob)
    {
        int RepByteSize = _msize(ReplaceAob);
        if (RepByteSize <= 0) return false;
        std::vector<DWORD_PTR> foundedAddress;
        FindPattern(dwStartRange, dwEndRange, SearchAob, foundedAddress);
        if (foundedAddress.empty())
            return false;

        DWORD OldProtect;
        for (int i = 0; i < foundedAddress.size(); i++)
        {
            ZwProtectVirtualMemory(ProcessHandle, (LPVOID)foundedAddress[i], RepByteSize, PAGE_EXECUTE_READWRITE, &OldProtect);
            ZwWriteVirtualMemory(ProcessHandle, (LPVOID)foundedAddress[i], ReplaceAob, RepByteSize, 0);
            ZwProtectVirtualMemory(ProcessHandle, (LPVOID)foundedAddress[i], RepByteSize, PAGE_EXECUTE_READ, &OldProtect);
        }

        return true;
    }


    bool ChangePattern(DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* Search, BYTE* Replace)
    {
        if (!AttackProcess(GetEmulatorRunning())) return false;

        bool Status = ReplacePattern(dwStartRange, dwEndRange, Search, Replace);
        if (Status) return true;
        else return false;

        CloseHandle(ProcessHandle);
    }

    bool HookPattern(DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* SearchAob, BYTE* ReplaceAob, std::vector<DWORD_PTR>& AddressRet)
    {
        if (!AttackProcess(GetEmulatorRunning())) return false;
        int RepByteSize = _msize(ReplaceAob);
        if (RepByteSize <= 0) return false;

        if (AddressRet.empty())
        {
            FindPattern(dwStartRange, dwEndRange, SearchAob, AddressRet);
            if (AddressRet.empty()) return false;

            DWORD OldProtect;
            for (int i = 0; i < AddressRet.size(); i++)
            {
                WriteProcessMemory(ProcessHandle, (LPVOID)AddressRet[i], ReplaceAob, RepByteSize, 0);
            }

            return true;
        }
        else {
            DWORD OldProtect;
            for (int i = 0; i < AddressRet.size(); i++)
            {
                WriteProcessMemory(ProcessHandle, (LPVOID)AddressRet[i], ReplaceAob, RepByteSize, 0);
            }
            return true;
        }
        CloseHandle(ProcessHandle);
    }

    bool FindPattern(DWORD_PTR StartRange, DWORD_PTR EndRange, BYTE* SearchBytes, std::vector<DWORD_PTR>& AddressRet)
    {

        BYTE* pCurrMemoryData = NULL;
        MEMORY_BASIC_INFORMATION	mbi;
        std::vector<MEMORY_REGION> m_vMemoryRegion;
        mbi.RegionSize = 0x1000;



        DWORD_PTR dwAddress = StartRange;
        DWORD_PTR nSearchSize = _msize(SearchBytes);


        while (VirtualQueryEx(ProcessHandle, (LPCVOID)dwAddress, &mbi, sizeof(mbi)) && (dwAddress < EndRange) && ((dwAddress + mbi.RegionSize) > dwAddress))
        {

            if ((mbi.State == MEM_COMMIT) && ((mbi.Protect & PAGE_GUARD) == 0) && (mbi.Protect != PAGE_NOACCESS) && ((mbi.AllocationProtect & PAGE_NOCACHE) != PAGE_NOCACHE))
            {

                MEMORY_REGION mData = { 0 };
                mData.dwBaseAddr = (DWORD_PTR)mbi.BaseAddress;
                mData.dwMemorySize = mbi.RegionSize;
                m_vMemoryRegion.push_back(mData);

            }
            dwAddress = (DWORD_PTR)mbi.BaseAddress + mbi.RegionSize;

        }

        std::vector<MEMORY_REGION>::iterator it;
        for (it = m_vMemoryRegion.begin(); it != m_vMemoryRegion.end(); it++)
        {
            MEMORY_REGION mData = *it;


            DWORD_PTR dwNumberOfBytesRead = 0;
            pCurrMemoryData = new BYTE[mData.dwMemorySize];
            ZeroMemory(pCurrMemoryData, mData.dwMemorySize);
            ZwReadVirtualMemory(ProcessHandle, (LPVOID)mData.dwBaseAddr, pCurrMemoryData, mData.dwMemorySize, &dwNumberOfBytesRead);
            if ((int)dwNumberOfBytesRead <= 0)
            {
                delete[] pCurrMemoryData;
                continue;
            }
            DWORD_PTR dwOffset = 0;
            int iOffset = Memfind(pCurrMemoryData, dwNumberOfBytesRead, SearchBytes, nSearchSize);
            while (iOffset != -1)
            {
                dwOffset += iOffset;
                AddressRet.push_back(dwOffset + mData.dwBaseAddr);
                dwOffset += nSearchSize;
                iOffset = Memfind(pCurrMemoryData + dwOffset, dwNumberOfBytesRead - dwOffset - nSearchSize, SearchBytes, nSearchSize);
            }

            if (pCurrMemoryData != NULL)
            {
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
};


#pragma once
