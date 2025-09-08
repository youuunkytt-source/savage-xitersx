#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <d3d11.h>
#include <string>
#include <tchar.h>
#include "Fonts.h"
#include "imgui_settings.h"
#include "images.h"

#include <d3d11.h>
#include <D3DX11.h>
#include "Protection/SmartySecurity.h"
#include <TlHelp32.h>
#pragma comment (lib, "d3dx11.lib")
#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include "imgui_internal.h"

#include <d3d11.h>
#include <tchar.h>
#include <Windows.h>
#include <iostream>
#include <D3DX11tex.h>
#pragma comment(lib, "D3DX11.lib")
#include <dwmapi.h>
#include <string>
#include "imgui_settings.h"

#pragma comment(lib, "urlmon.lib")
#include <urlmon.h>
#include <stdio.h>

#include "chrono"


#include <ShObjIdl_core.h>

#pragma comment(lib,"Wininet.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "ntdll.lib")


#include "imgui.h"
#include "imgui_impl_win32.h"
#include <tchar.h>


#define IMGUI_DEFINE_MATH_OPERATORS
#include <imgui_internal.h>

#include <d3d9.h>
#include <d3dx9.h>
#pragma comment (lib, "d3dx9.lib")

#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include "imgui_internal.h"
#include <d3d11.h>
#include <tchar.h>
#include <Windows.h>
#include <iostream>
#include <D3DX11tex.h>
#pragma comment(lib, "D3DX11.lib")
#include <dwmapi.h>
#include <strsafe.h>
#include <ShObjIdl_core.h>
#include <wininet.h>
#include <Psapi.h>
#include <cstring>
#include <array>
#include <thread>
#include <iterator>
#include <fstream>
#include <stdexcept>
#include <filesystem>
#include <stdio.h>
#include <string>
#include <string.h>
#include <TlHelp32.h>
#include <vector>
#include <random>
#include <math.h>
#define SELF_REMOVE_STRING  TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del /f /q \"%s\"")
#define SELF_REMOVE_STRING  TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del /f /q \"%s\"")
///
#include "Memory.h"
#include <Urlmon.h>
#include <Shlwapi.h>
#include <tchar.h>
#include <dwmapi.h>
#include <string>
#include <Windows.h>
#include <tlhelp32.h>
#include <string>

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "Shlwapi.lib")
#pragma execution_character_set("utf-8")

#include <mmsystem.h> 
#include <iomanip>
#include "auth/skStr.h"
#pragma comment(lib, "Shell32.lib") // Para enlazar con la librería Shell32.lib
#pragma comment(lib, "winmm")





static ID3D11Device* g_pd3dDevice = NULL;
static ID3D11DeviceContext* g_pd3dDeviceContext = NULL;
static IDXGISwapChain* g_pSwapChain = NULL;
static ID3D11RenderTargetView* g_mainRenderTargetView = NULL;



static bool windows_log = true;
static bool antidump = false;
static bool RunAntiCrack = false;

bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

ID3D11ShaderResourceView* avatar;
ID3D11ShaderResourceView* logotype_pic;

HWND hwnd;
RECT rc;


SmartyAntiCrack* SmartyAntiCrackSystem = NULL;


DWORD WINAPI SmartyDetector(LPVOID lpParam) {
    while (true) {
        Sleep(0);
    }
    return 0;
}

// ??? ??????? ?? ??????? ??? ???????
void SmartyAttacherDetector() {
    HANDLE SmartyThread = CreateThread(NULL, NULL, SmartyDetector, NULL, NULL, NULL);
    if (SmartyThread == NULL) {
        return;
    }

    while (true) {
        if (ResumeThread(SmartyThread) >= 1) {
            Sleep(200);
            //CreateBanFolders();
            exit(1);
        }
        Sleep(2);
    }
}

// ?????? ??? ??????? ????????
static int GetExeInfo(const std::string& procname) {
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (INVALID_HANDLE_VALUE == hSnapshot) return 0;

    PROCESSENTRY32 pe;
    pe.dwSize = sizeof(PROCESSENTRY32);
    BOOL hResult = Process32First(hSnapshot, &pe);
    int pid = 0;

    while (hResult) {
        if (procname == pe.szExeFile) {
            pid = pe.th32ProcessID;
            break;
        }
        hResult = Process32Next(hSnapshot, &pe);
    }

    CloseHandle(hSnapshot);
    return pid;
}

// ??? ???????? ????? ??? ?????
void killProcessByName(const std::string& filename) {
    HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, NULL);
    if (hSnapShot == INVALID_HANDLE_VALUE) return;

    PROCESSENTRY32 pEntry;
    pEntry.dwSize = sizeof(pEntry);
    BOOL hRes = Process32First(hSnapShot, &pEntry);

    while (hRes) {
        if (filename == pEntry.szExeFile) {
            HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, 0, pEntry.th32ProcessID);
            if (hProcess != NULL) {
                TerminateProcess(hProcess, 9);
                CloseHandle(hProcess);
            }
        }
        hRes = Process32Next(hSnapShot, &pEntry);
    }
    CloseHandle(hSnapShot);
}

// ??? ???????
bool CheckProcess(const std::string& proc) {
    return GetExeInfo(proc) != 0;
}
void blue_screen() {

    typedef NTSTATUS(WINAPI* RtlAdjustPrivilege)(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);
    typedef NTSTATUS(WINAPI* NtRaiseHardError)(NTSTATUS, ULONG, ULONG, PULONG_PTR, ULONG, PULONG);

    BOOLEAN bEnabled;
    ULONG uResponse;
    HMODULE hNtdll = LoadLibraryA("ntdll.dll");

    if (hNtdll)
    {
        RtlAdjustPrivilege RtlAdjustPrivilegeFunc = (RtlAdjustPrivilege)GetProcAddress(hNtdll, "RtlAdjustPrivilege");
        NtRaiseHardError NtRaiseHardErrorFunc = (NtRaiseHardError)GetProcAddress(hNtdll, "NtRaiseHardError");

        if (RtlAdjustPrivilegeFunc && NtRaiseHardErrorFunc)
        {
            // ????? ?????????? ???????? ?????? ?????? ???????
            RtlAdjustPrivilegeFunc(19, TRUE, FALSE, &bEnabled);
            NtRaiseHardErrorFunc(STATUS_ASSERTION_FAILURE, 0, 0, nullptr, 6, &uResponse);
        }
    }
}

//
void CreateBanFolders(); //  CreateBanFolders
void killProcessByName(const std::string& filename); //  killProcessByName
bool CheckProcess(const std::string& proc); //CheckProcess

void SmartyAntiCracker() {


    const int delay_time_ms = 6000;

    while (true) {
        std::vector<std::string> windowsToCheck = {
            "IDA: Quick start", "Memory Viewer"
        };

        for (const std::string& windowName : windowsToCheck) {
            HWND window = FindWindowA(0, windowName.c_str());
            if (window) {
                Sleep(250);
                
                killProcessByName("ida.exe"); //  "ida.exe" 
             //   CreateBanFolders(); 
                exit(0); 
            }
        }

        std::vector<std::string> processes = {
            "ollydbg.exe", "ProcessHacker.exe", "Dump-Fixer.exe", "kdstinker.exe", "fiddler.exe",
                "httpdebuggerui.exe", "wireshark.exe", "vboxservice.exe", "df5serv.exe",
                "codecracker.exe", "charles.exe", "cheatengine-i386.exe", "cheatengine-x86_64.exe",
                "cheatengine-x86_64-SSE4-AVX2.exe", "ida64.exe", "tcpview.exe", "autoruns.exe",
                "autorunsc.exe", "filemon.exe", "procmon.exe", "simpleassembly.exe",
                "peek.exe", "httpanalyzer.exe", "httpdebug.exe", "dbx.exe", "mdbg.exe",
                "HTTP Debugger Pro.exe", "dotpeek.exe", "dotpeek-i386.exe", "dotpeek-x86_64-SSE4-AVX2.exe",
                "regmon.exe", "procexp.exe", "ImmunityDebugger.exe", "gdb.exe",
                "windbg.exe", "dbgclr.exe", "kdb.exe", "kgdb.exe", "mdb.exe",
                "scylla_x86.exe", "scylla_x64.exe", "proc_analyzer.exe", "HookExplorer.exe",
                "dumpcap.exe", "ImportREC.exe", "PETools.exe", "LordPE.exe", "scylla.exe",
                "idau64.exe", "idau.exe", "idaq.exe", "idaq64.exe", "idaw.exe",
                "idaw64.exe", "SysInspector.exe", "MugenJinFuu-i386.exe", "Vmtoolsd.exe",
                "Mugen JinFuu.exe", "MugenJinFuu-x86_64-SSE4-AVX2.exe", "MugenJinFuu-x86_64.exe", "sysAnalyzer.exe",
                "idag.exe", "idag64.exe", "ida.exe", "IMMUNITYDEBUGGER", "MegaDumper.exe",
                "CodeBrowser.exe", "reshacker.exe", "sniff_hit.exe", "joeboxcontrol.exe",
                "joeboxserver.exe", "vboxtray.exe", "vmtoolsd.exe", "vmwaretray.exe",
                "idaPro.exe", "idaclang.cfg", "Hxd.exe", "Vmwaretrat.exe", "vmwareuser.exe",
                "vgauthservice.exe", "vmacthlp.exe", "x96dbg.exe", "x32dbg.exe", "vmusrvc.exe",
                "prl_cc.exe", "prl_tools.exe", "xenservice.exe", "ReClass.NET.exe", "qemu-ga.exe",
                "ksdumperclient.exe", "ksdumper.exe", "Cheat Engine.exe", "idax64.exe",
                "Devicehackerp.exe", "dnspy.exe", "Ida Freeware.exe", "Ida Pro.exe",
                "gamefuqr-x86_64-SSE4-AVX2.exe", "GameFuqr.exe", "BinaryNinja.exe", "FolderChangesView.exe",
                "HTTP Debugger.exe", "Fiddler Everywhere.exe", "Progress Telerik Fiddler Web Debugger.exe",
                "The Wireshark Network Analyzer.exe", "ilspy.exe", "Process Hacker 2.exe", "HTTPDebuggerSvc.exe",
                "Fiddler.WebUi.exe", "createdump.exe", "twistedlulu-x86_64-SSE4-AVX2.exe", "twistedlulu-x86_64.exe",
                "twistedlulu-i386.exe", "procexp64.exe", "Beamer x96.exe", "Beamer x64.exe",
                "Beamer x32.exe", "Extreme Dumper x64.exe", "Extreme Dumper x32.exe",
                "Hopper.exe", "Bytecode Viewer.exe", "JEB Decompiler.exe", "PEiD.exe", "Relyze.exe",
                "PE Explorer.exe", "DroidBox.exe", "APKTool.exe", "Radare2.exe", "Pestudio.exe",
                "CFF Explorer.exe", "ghidra.exe", "DeDe.exe", "Hex-Rays Decompiler.exe", "Jadx-gui.exe",
                "Burp Suite.exe", "x64dbg.exe", "x32dbg.exe", "Ghidra_9.1.2_Build.zip", "Ghidra_10.1.5_Build.zip",
                "Radare2_v5.4.0.zip", "Radare2_v5.5.0.zip", "x32dbg_v1.2.2.exe", "x64dbg_v1.3.1.exe",
                "IDA_Pro_7.5.exe", "IDA_Pro_8.0.exe", "OllyDbg_2.01.exe", "OllyDbg_2.02.exe",
                "Cheat_Engine_7.3.exe", "Cheat_Engine_7.4.exe", "Cheat_Engine_7.5.exe",
                "Fiddler_4.6.20174.22418.exe", "Fiddler_4.6.20200.49658.exe", "Wireshark_3.6.6.exe",
                "Wireshark_3.6.7.exe", "Immunity_Debugger_1.85.exe", "Immunity_Debugger_1.90.exe",
                "DebugView.exe", "SysinternalsSuite.zip", "ProcDump.exe", "ProcMon64.exe", "ProcMon32.exe",
                "Debuggers_Setup.exe", "Intel_DBG.exe", "DbgView.exe", "IDB.exe", "ReversingLabs.exe",
                "Powershell.exe", "PsExec.exe", "DebuggingTools.zip", "Decompyle++_3.8.exe", "Dcom.exe",
                "Kali_Linux_Reverse_Engineering_Tools.zip", "APT_Reverse_Engineering_Tools.exe", "Faraday_Platform.exe",
                "Exploit_Pentester_Tools.zip", "Malheur_Analyzer.exe",
                "Volatility_2.6exe", "Volatility_3.0.exe",
                "Crowbar_Reverse_Tools.exe", "Kali_Linux_Reverse_Tools.zip", "FiddlerCap.exe", "Data_Extraction_Tools.zip",
                "RETools_Setup.exe", "ReverseEngineering_Suite.exe", "HexEditorPro.exe", "DebugToolKit.exe",
                "OllyDbg.exe", "Cheat Engine.exe", "IDA Pro.exe", "x64dbg.exe", "x32dbg.exe",
                "Wireshark.exe", "Fiddler.exe", "Hopper.exe", "Burp Suite.exe", "Radare2.exe",
                "APKTool.exe", "Ghidra.exe", "DeDe.exe", "Hex-Rays Decompiler.exe", "Jadx-gui.exe",
                "PEiD.exe", "Relyze.exe", "PE Explorer.exe", "DroidBox.exe", "Pestudio.exe",
                "CFF Explorer.exe", "Bytecode Viewer.exe", "JEB Decompiler.exe", "Ghidra_9.1.2_Build.zip",
                "Ghidra_10.1.5_Build.zip", "Radare2_v5.4.0.zip", "Radare2_v5.5.0.zip", "x32dbg_v1.2.2.exe",
                "x64dbg_v1.3.1.exe", "IDA_Pro_7.5.exe", "IDA_Pro_8.0.exe", "OllyDbg_2.01.exe",
                "OllyDbg_2.02.exe", "Cheat_Engine_7.3.exe", "Cheat_Engine_7.4.exe", "Cheat_Engine_7.5.exe",
                "Fiddler_4.6.20174.22418.exe", "Fiddler_4.6.20200.49658.exe", "Wireshark_3.6.6.exe",
                "Wireshark_3.6.7.exe", "Immunity_Debugger_1.85.exe", "Immunity_Debugger_1.90.exe",
                "DebugView.exe", "SysinternalsSuite.zip", "ProcDump.exe", "ProcMon64.exe", "ProcMon32.exe",
                "Debuggers_Setup.exe", "Intel_DBG.exe", "DbgView.exe", "IDB.exe", "ReversingLabs.exe",
                "Powershell.exe", "PsExec.exe", "DebuggingTools.zip", "Decompyle++_3.8.exe", "Dcom.exe",
                "Kali_Linux_Reverse_Engineering_Tools.zip", "APT_Reverse_Engineering_Tools.exe", "Faraday_Platform.exe",
                "Exploit_Pentester_Tools.zip", "Malheur_Analyzer.exe", "Volatility_2.6.exe", "Volatility_3.0.exe",
                "Crowbar_Reverse_Tools.exe", "Kali_Linux_Reverse_Tools.zip", "FiddlerCap.exe", "Data_Extraction_Tools.zip",
                "RETools_Setup.exe", "ReverseEngineering_Suite.exe", "HexEditorPro.exe", "DebugToolKit.exe",
                "Bytecode Viewer 2.0.exe", "JEB_Android_Decompiler.exe", "Hopper_Disassembler.exe", "PEiD_0.2.exe",
                "Relyze_1.1.exe", "PE_Explorer_1.99.exe", "DroidBox_1.0.exe", "APKTool_2.5.0.exe", "Radare2_3.0.exe",
                "Pestudio_0.8.exe", "CFF_Explorer_1.0.exe", "Ghidra_10.2.0_Build.zip", "DeDe_1.2.exe",
                "Hex-Rays_Decompiler_1.0.exe", "Jadx-gui_1.0.exe", "Burp_Suite_2.1.exe", "x64dbg_1.1.exe",
                "x32dbg_1.0.exe", "Ghidra_9.0.3_Build.zip", "Radare2_v5.3.0.zip", "x32dbg_v1.1.0.exe",
                "IDA_Pro_6.9.exe", "OllyDbg_2.03.exe", "Cheat_Engine_7.6.exe", "Fiddler_4.6.20201.49658.exe",
                "Wireshark_3.6.8.exe", "Immunity_Debugger_1.95.exe", "DebugView_4.99.exe", "ProcDump_1.0.exe",
                "SysinternalsSuite_1.0.zip", "Debuggers_Setup_1.1.exe", "Intel_DBG_1.0.exe", "DbgView_1.1.exe",
                "ReversingLabs_2.0.exe", "Powershell_1.0.exe", "PsExec_1.1.exe", "DebuggingTools_1.0.zip",
                "Decompyle++_4.0.exe", "Dcom_1.1.exe", "Kali_Linux_Reverse_Engineering_Tools_1.0.zip",
                "APT_Reverse_Engineering_Tools_1.0.exe", "Faraday_Platform_2.0.exe", "Exploit_Pentester_Tools_1.0.zip",
                "Malheur_Analyzer_1.0.exe", "Volatility_2.7.exe", "Crowbar_Reverse_Tools_1.0.exe",
                "Kali_Linux_Reverse_Tools_1.1.zip", "FiddlerCap_1.0.exe", "Data_Extraction_Tools_1.0.zip",
                "RETools_Setup_1.0.exe", "ReverseEngineering_Suite_1.0.exe", "HexEditorPro_1.0.exe",
                "DebugToolKit_1.0.exe"
        };

        for (const std::string& proc : processes) {
            if (CheckProcess(proc)) {
             
             //   blue_screen();
                
                const char* warningMessage = "Detected a cracking or debugging tool. Please uninstall it first or contact @FACK YOU NIgga.";
                exit(0); // ????? ???????
            }
        }

        // ????? ??? ????? ??????
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_time_ms));
    }
}

bool fileExists2(const std::string& filename) {
    return std::filesystem::exists(filename);
}

void DetectDnSpyFile() {
    const std::string userPath = "C:\\Users\\" + std::string(getenv("username")) + "\\AppData\\Local\\dnSpy\\";
    const std::string roamingPath = "C:\\Users\\" + std::string(getenv("username")) + "\\AppData\\Roaming\\dnSpy\\";

    std::vector<std::string> pathsToCheck = {
        userPath + "Startup64\\net\\startup.profile",
        userPath + "Startup64\\net\\dnSpy-mef-info.bin",
        userPath + "Startup64\\net\\startup-roslyn.profile",
        roamingPath + "dnSpy.xml",
        userPath + "Startup32\\net\\startup.profile",
        userPath + "Startup32\\net\\dnSpy-mef-info.bin",
        userPath + "Startup32\\net\\startup-roslyn.profile"
    };

    const char* warningMessage = "dnSpy in Startup Detected. Please uninstall it first or contact @TACXITER Donkey.";

    for (const std::string& path : pathsToCheck) {
        if (fileExists2(path)) {
            MessageBoxA(NULL, warningMessage, "Warning", MB_OK | MB_ICONWARNING);
            exit(0);
        }
    }
}

void FileDetector() {
    const std::string userPath = "C:\\Users\\" + std::string(getenv("username")) + "\\AppData\\Local\\";
    const std::string roamingPath = "C:\\Users\\" + std::string(getenv("username")) + "\\AppData\\Roaming\\";

    std::vector<std::string> filesToCheck = {
        "C:\\Windows\\Capcom.sys",
        "C:\\Windows\\KsDumperDriver.sys",
        userPath + "dnSpy",
        roamingPath + "dnSpy",
        userPath + "Hex Rays",
        "C:\\Program Files\\Cheat Engine 7.5",
        "C:\\Program Files (x86)\\Cheat Engine 7.5",
        "C:\\Program Files\\IDA Freeware 8.3",
        "C:\\Program Files\\IDA Pro 8.3",
        "C:\\Program Files\\Cheat Engine 7.4",
        "C:\\Program Files (x86)\\Cheat Engine 7.4",
        "C:\\Program Files\\Cheat Engine",
        "C:\\Program Files (x86)\\Cheat Engine",
        "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Cheat Engine 7.5",
        "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Cheat Engine 7.4",
        "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Cheat Engine 7.3",
        "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Cheat Engine",
        "C:\\Program Files\\OllyDbg\\ollydbg.exe",
        "C:\\Program Files (x86)\\OllyDbg\\ollydbg.exe",
        "C:\\Program Files\\x64dbg\\x64dbg.exe",
        "C:\\Program Files (x86)\\x64dbg\\x32dbg.exe",
        userPath + "Temp\\scylla.exe",
        userPath + "Temp\\Scylla_x64.sys",
        "C:\\Program Files (x86)\\Scylla\\Scylla.exe",
        "C:\\Program Files (x86)\\Scylla\\Scylla_x64.sys",
        "C:\\Program Files\\x64dbg",
        "C:\\Program Files\\Process Hacker 2",
        "C:\\Program Files\\Wireshark",
        roamingPath + "Process Hacker",
        "C:\\Program Files\\Fiddler",
        "C:\\Program Files (x86)\\Fiddler",
        roamingPath + "Fiddler"
    };

    const char* warningMessage = "Detected a cracking or debugging tool. Please uninstall it first or contact @FACK YOU Donkey.";

    for (const std::string& filePath : filesToCheck) {
        if (fileExists2(filePath)) {
            MessageBoxA(NULL, warningMessage, "Warning", MB_OK | MB_ICONWARNING);
            exit(0);
        }
    }

    std::filesystem::remove("C:\\Program Files (x86)\\Cheat Engine");
}

namespace ImGui
{
    int rotation_start_index;
    void ImRotateStart()
    {
        rotation_start_index = ImGui::GetWindowDrawList()->VtxBuffer.Size;
    }

    ImVec2 ImRotationCenter()
    {
        ImVec2 l(FLT_MAX, FLT_MAX), u(-FLT_MAX, -FLT_MAX); // bounds

        const auto& buf = ImGui::GetWindowDrawList()->VtxBuffer;
        for (int i = rotation_start_index; i < buf.Size; i++)
            l = ImMin(l, buf[i].pos), u = ImMax(u, buf[i].pos);

        return ImVec2((l.x + u.x) / 2, (l.y + u.y) / 2); // or use _ClipRectStack?
    }


    void ImRotateEnd(float rad, ImVec2 center = ImRotationCenter())
    {
        float s = sin(rad), c = cos(rad);
        center = ImRotate(center, s, c) - center;

        auto& buf = ImGui::GetWindowDrawList()->VtxBuffer;
        for (int i = rotation_start_index; i < buf.Size; i++)
            buf[i].pos = ImRotate(buf[i].pos, s, c) - center;
    }
}

//void Trinage_background()
//{
//
//    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };
//
//    static ImVec2 partile_pos[100];
//    static ImVec2 partile_target_pos[100];
//    static float partile_speed[100];
//    static float partile_size[100];
//    static float partile_radius[100];
//    static float partile_rotate[100];
//
//    for (int i = 1; i < 50; i++)
//    {
//        if (partile_pos[i].x == 0 || partile_pos[i].y == 0)
//        {
//            partile_pos[i].x = rand() % (int)screen_size.x + 1;
//            partile_pos[i].y = 15.f;
//            partile_speed[i] = 1 + rand() % 25;
//            partile_radius[i] = rand() % 4;
//            partile_size[i] = rand() % 8;
//
//            partile_target_pos[i].x = rand() % (int)screen_size.x;
//            partile_target_pos[i].y = screen_size.y * 2;
//        }
//
//        partile_pos[i] = ImLerp(partile_pos[i], partile_target_pos[i], ImGui::GetIO().DeltaTime * (partile_speed[i] / 60));
//        partile_rotate[i] += ImGui::GetIO().DeltaTime;
//
//        if (partile_pos[i].y > screen_size.y)
//        {
//            partile_pos[i].x = 0;
//            partile_pos[i].y = 0;
//            partile_rotate[i] = 0;
//        }
//
//        ImGui::ImRotateStart();
//        ImGui::GetWindowDrawList()->AddCircleFilled(partile_pos[i], partile_size[i], main_color, 1);
//        ImGui::GetWindowDrawList()->AddShadowCircle(partile_pos[i], 1.f, main_color, 45.f + partile_size[i], ImVec2(0, 0), 0, 1);
//        ImGui::ImRotateEnd(partile_rotate[i]);
//    }
//}
void DrawStar(ImDrawList* draw_list, ImVec2 center, float radius, ImU32 color)
{
    static const float PI = 3.14159265359f;
    static const int num_points = 5;
    static const float inner_radius = 0.5f; // Ratio of inner radius to outer radius

    ImVec2 points[num_points * 2];
    float angle_step = PI * 2.0f / num_points;

    for (int i = 0; i < num_points; ++i)
    {
        float angle = i * angle_step;
        points[i * 2] = ImVec2(center.x + radius * cosf(angle), center.y + radius * sinf(angle));

        angle += angle_step * 0.5f;
        points[i * 2 + 1] = ImVec2(center.x + (radius * inner_radius) * cosf(angle), center.y + (radius * inner_radius) * sinf(angle));
    }

    draw_list->AddPolyline(points, IM_ARRAYSIZE(points), color, ImDrawFlags_Closed, 2.0f);
}

//void Trinage_background()
//{
//    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };
//
//    static ImVec2 partile_pos[100];
//    static ImVec2 partile_target_pos[100];
//    static float partile_speed[100];
//    static float partile_size[100];
//    static float partile_radius[100];
//    static float partile_rotate[100];
//
//    for (int i = 1; i < 70; i++)
//    {
//        if (partile_pos[i].x == 0 || partile_pos[i].y == 0)
//        {
//            partile_pos[i].x = rand() % (int)screen_size.x + 1;
//            partile_pos[i].y = 11.f;
//            partile_speed[i] = 1 + rand() % 35;
//            partile_radius[i] = rand() % 4;
//            partile_size[i] = rand() % 8;
//
//            partile_target_pos[i].x = rand() % (int)screen_size.x;
//            partile_target_pos[i].y = screen_size.y * 2;
//        }
//
//        partile_pos[i] = ImLerp(partile_pos[i], partile_target_pos[i], ImGui::GetIO().DeltaTime * (partile_speed[i] / 70));
//        partile_rotate[i] += ImGui::GetIO().DeltaTime;
//
//        if (partile_pos[i].y > screen_size.y)
//        {
//            partile_pos[i].x = 0;
//            partile_pos[i].y = 0;
//            partile_rotate[i] = 0;
//        }
//
//        float randomRed = static_cast<float>(rand()) / RAND_MAX;
//        float randomGreen = static_cast<float>(rand()) / RAND_MAX;
//        float randomBlue = static_cast<float>(rand()) / RAND_MAX;
//        ImVec4 randomColor = ImVec4(randomRed, randomGreen, randomBlue, 1.0f);
//
//        ImDrawList* draw_list = ImGui::GetWindowDrawList();
//
//        DrawStar(draw_list, partile_pos[i], partile_size[i], ImColor(c::particle_color));
//
//    }
//}

void Trinage_background()
{
    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 particle_pos[100];
    static ImVec2 particle_target_pos[100];
    static float particle_speed[100];
    static float particle_size[100];
    static float particle_radius[100];
    static float particle_rotate[100];

    // Define yellow color
    ImColor yellow_color = ImColor(ImStyle::general_color12);

    for (int i = 1; i < 70; i++)
    {
        if (particle_pos[i].x == 0 || particle_pos[i].y == 0)
        {
            particle_pos[i].x = rand() % (int)screen_size.x + 1;
            particle_pos[i].y = 15.f;
            particle_speed[i] = 1 + rand() % 20;
            particle_radius[i] = rand() % 4;
            particle_size[i] = rand() % 8;

            particle_target_pos[i].x = rand() % (int)screen_size.x;
            particle_target_pos[i].y = screen_size.y * 2;
        }

        particle_pos[i] = ImLerp(particle_pos[i], particle_target_pos[i], ImGui::GetIO().DeltaTime * (particle_speed[i] / 60));
        particle_rotate[i] += ImGui::GetIO().DeltaTime;

        if (particle_pos[i].y > screen_size.y)
        {
            particle_pos[i].x = 0;
            particle_pos[i].y = 0;
            particle_rotate[i] = 0;
        }

        // Calculate star points
        ImVec2 points[10];
        float angle = 0;
        float angle_step = 2 * 3.14159f / 10;
        for (int j = 0; j < 10; j++)
        {
            float r = (j % 2 == 0) ? particle_size[i] : particle_size[i] / 2;
            points[j].x = particle_pos[i].x + cos(angle + particle_rotate[i]) * r;
            points[j].y = particle_pos[i].y + sin(angle + particle_rotate[i]) * r;
            angle += angle_step;
        }

        // Draw yellow star
        ImGui::GetWindowDrawList()->AddPolyline(points, 10, yellow_color, true, 1);
        ImGui::GetWindowDrawList()->AddShadowCircle(particle_pos[i], 8.f, yellow_color, 58.f + particle_size[i], ImVec2(0, 0), 0, 1);
    }
}
//void Trinage_background()
//{
//    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };
//
//    static ImVec2 partile_pos[100];
//    static ImVec2 partile_target_pos[100];
//    static float partile_speed[50];
//    static float partile_size[100];
//    static float partile_radius[100];
//    static float partile_rotate[100];
//
//    for (int i = 1; i < 50; i++)
//    {
//        if (partile_pos[i].x == 0 || partile_pos[i].y == 0)
//        {
//            partile_pos[i].x = rand() % (int)screen_size.x + 1;
//            partile_pos[i].y = 15.f;
//            partile_speed[i] = 2 + rand() % 50;  // ?????? ???????
//            partile_speed[i] *= 0.3f;  // ????? ?????? ????? 30%
//
//            partile_radius[i] = rand() % 7;
//            partile_size[i] = rand() % 10;
//
//            partile_target_pos[i].x = rand() % (int)screen_size.x;
//            partile_target_pos[i].y = screen_size.y * 4;
//        }
//
//        partile_pos[i] = ImLerp(partile_pos[i], partile_target_pos[i], ImGui::GetIO().DeltaTime * (partile_speed[i] / 30));
//        partile_rotate[i] += ImGui::GetIO().DeltaTime;
//
//        if (partile_pos[i].y > screen_size.y)
//        {
//            partile_pos[i].x = 0;
//            partile_pos[i].y = 0;
//            partile_rotate[i] = 0;
//        }
//
//        ImGui::ImRotateStart();
//        ImGui::GetWindowDrawList()->AddCircleFilled(partile_pos[i], partile_size[i], ImGui::GetColorU32(ImStyle::general_color12), 1);
//        ImGui::GetWindowDrawList()->AddShadowCircle(partile_pos[i], 8.f, ImColor(ImStyle::general_color12), 58.f + partile_size[i], ImVec2(0, 0), 0, 1);
//        ImGui::ImRotateEnd(partile_rotate[i]);
//    }
//}


void move_window() {
    ImGui::SetCursorPos(ImVec2(0, 0));
    if (ImGui::InvisibleButton("Move_detector", ImVec2(menu_size.x, menu_size.y)));
    if (ImGui::IsItemActive()) {

        GetWindowRect(hwnd, &rc);
        MoveWindow(hwnd, rc.left + ImGui::GetMouseDragDelta().x, rc.top + ImGui::GetMouseDragDelta().y, menu_size.x, menu_size.y, TRUE);
    }
}

void RenderBlur(HWND hwnd)
{
    struct ACCENTPOLICY
    {
        int na;
        int nf;
        int nc;
        int nA;
    };
    struct WINCOMPATTRDATA
    {
        int na;
        PVOID pd;
        ULONG ul;
    };

    const HINSTANCE hm = LoadLibrary("user32.dll");
    if (hm)
    {
        typedef BOOL(WINAPI* pSetWindowCompositionAttribute)(HWND, WINCOMPATTRDATA*);

        const pSetWindowCompositionAttribute SetWindowCompositionAttribute = (pSetWindowCompositionAttribute)GetProcAddress(hm, "SetWindowCompositionAttribute");
        if (SetWindowCompositionAttribute)
        {
            ACCENTPOLICY policy = { 3, 0, 0, 0 };

            WINCOMPATTRDATA data = { 19, &policy,sizeof(ACCENTPOLICY) };
            SetWindowCompositionAttribute(hwnd, &data);
        }
        FreeLibrary(hm);
    }
}

bool CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    HRESULT res = D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res == DXGI_ERROR_UNSUPPORTED)
        res = D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_WARP, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res != S_OK)
        return false;

    CreateRenderTarget();
    return true;
}

void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}

void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}

void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU)
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}
