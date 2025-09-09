#include "main.h"
#include "SmartyMem.h"

#include <tchar.h>
#include <dwmapi.h>
#include "auth/auth.hpp"
#include <thread>
#pragma comment(lib, "Dwmapi.lib")
#include <ShObjIdl_core.h>
#include "SmartyMem2.h"
#include "minecraft_bg.h"



static int dnd_counter = 0;
ImFont* ico = nullptr;
static bool checkbox[25];
static int slider_int = false;

const char* themes[]{ "Head","Chest", "Legs", "Hands" };

const char* auto_stop[]{ "Betwen shots", "Force accuracy", "Power accuracy", "Auto sleep" };

static int combo;
static int camrakey;
static int keybind;

static int iTabs;
static int menu_state;

static bool holaaa = false;

static int fakelagx99;

int fakelag, fakelag2;
int fakelag12, fakelag22;

static int applyfakelag;
static bool applyfakelag1;
static bool enableFakeLag;

static bool sleepfuck4 = false;
bool sleepfucked4 = false;

static float text_animation = 0.00f;
static float loader_animation = 0.f;
static bool text_animation_hide = true;
float color_edit[4];


Memory memory;
SmartyMemory Smarty2;
SmartyMemory mirza;
SmartyMemory St2kangry;
SmartyMemory prizrak;


std::string MemoryLogs = "";
using namespace KeyAuth;



std::string name = skCrypt("panel").decrypt();
std::string ownerid = skCrypt("mYEqQgOibX").decrypt();
std::string secret = skCrypt("a03d93bae0113b788caddf92388dad0c909ecfba93e655914f6866882b2e08bc").decrypt();
std::string version = skCrypt("1.0").decrypt();
std::string url = skCrypt("https://keyauth.win/api/1.3/").decrypt(); // change if you're self-hosting
std::string path = skCrypt("").decrypt(); // (OPTIONAL) see tutorial here
api KeyAuthApp(name, ownerid, version, url, path);

namespace fonts {
    ImFont* poppins = nullptr;
    ImFont* roboto = nullptr;
    ImFont* texte = nullptr;
    ImFont* icon = nullptr;
    ImFont* Nevan = nullptr;
}

extern "C" {
    NTSTATUS NTAPI NtSuspendProcess(HANDLE ProcessHandle);
    NTSTATUS NTAPI NtResumeProcess(HANDLE ProcessHandle);
}


bool isProcessFrozen = false;
DWORD processId = Smarty2.findMyProc(Smarty2.GetEmulatorRunning());

bool hotkeypressed1 = false;
bool hotkeypressed2 = false;
bool hotkeypressed3 = false;




bool stream;
bool ModeStream = false;


bool AIMBOTHEAD;
bool AIMBOTSCOPE;
bool LANDING;
bool exspeed;
bool hide;
bool sniperaimxbest;
bool lagx12;
bool sniper55;
bool sniper66;
bool switch55;
bool cameraleft;
bool M82B;
bool menu1;
bool menu2;
bool menu3;
bool menu4;
bool menu5;
//bool fak12;
bool camera15;
//bool speed12;
//bool obb41;


struct c_bytes

{
    std::vector<DWORD_PTR> aimfovhack;
    std::vector<DWORD_PTR> cameraleft;
};  c_bytes bytes;





namespace var
{

    
    /*bool fakelagx99;*/
    bool ModeStream = false;
    //bool hide;
    bool exspeed;
    bool lagx12;
    bool M82B;
    bool menu1;
    bool menu2;
    bool menu3;
    bool menu4;
    bool menu5;
 /*   bool fak12;*/
    bool camera15;
    bool cameraleft;
   /* bool speed12;*/
    //bool obb41;
    bool sniper55;
    bool sniper66;
    bool switch55;
    bool sniperaimxbest;
    bool AIMBOTHEAD1;
    bool AIMBOTSCOPE1;
    bool LANDING;
   
}


bool sg, internet, xd, xd1, xd2;
int key1, key2, key3, key4, key5, key6, key7, key8, key9, key10, key11, m2;

namespace rafa {
    bool internet;

}



/// <summary>
/// ///////////////////////////////////////////////////////////////////////////////
/// </summary>
///
///
/// 
//void hidemenuxd1() {
//
//}
void  aimbotdrag() {

    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  aimbody123() {

    notificationSystem.Notification("Notification", "Applying !", main_color);


};
void  magic12() {
    notificationSystem.Notification("Notification", "Applying !", main_color);


};
void  traking12() {

    notificationSystem.Notification("Notification", "Applying !", main_color);
};
//void  scope12() {
//    notificationSystem.Notification("Notification", "Applying !", main_color);
//};
void  scopez() {

    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  norecolo() {
    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  npcname12() {

    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  speedex() {

    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  backjump() {
    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  camera12() {
    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  expspeed() {

    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  bycamera12() {

    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  scopez12() {

    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  camarapremium() {
    notificationSystem.Notification("Notification", "Applying !", main_color);
};
void  fastswitch() {
    notificationSystem.Notification("Notification", "Applying !", main_color);


};
void bypassw()
{
    notificationSystem.Notification("Notification", "Applying !", main_color);
}
void aimbotbody12()
{
    notificationSystem.Notification("Notification", "Applying !", main_color);

}








void AIMBOTHEAD1()
{

    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;
    notificationSystem.Notification("", "Applying !", main_color);
    if (mirza.AttackProcess("HD-Player.exe")) {
        std::vector<DWORD_PTR> aimbot_new;
        std::vector<BYTE> SearchAimbot = { 0xA5, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?' };
        mirza.FindPattern(startAddress, endAddress, SearchAimbot.data(), aimbot_new);
        for (auto result : aimbot_new) {
            int originalValue, originalValuex;
            if (!ReadProcessMemory(mirza.ProcessHandle, (LPCVOID)(result + 0X2A), &originalValue, sizeof(originalValue), NULL)) {
                std::cerr << "Failed to read memory at address: " << std::hex << (result + 0X2A) << "\n";
                continue;
            }
            if (!ReadProcessMemory(mirza.ProcessHandle, (LPCVOID)(result + 0X26), &originalValuex, sizeof(originalValuex), NULL)) {
                std::cerr << "Failed to read memory at address: " << std::hex << (result + 0X26) << "\n";
                continue;
            }
            if (!WriteProcessMemory(mirza.ProcessHandle, (LPVOID)(result + 0X2A), &originalValuex, sizeof(originalValuex), NULL)) {
                std::cerr << "Failed to write memory at address: " << std::hex << (result + 0X2A) << "\n";
                continue;
            }
            if (!WriteProcessMemory(mirza.ProcessHandle, (LPVOID)(result + 0X26), &originalValue, sizeof(originalValue), NULL)) {
                std::cerr << "Failed to write memory at address: " << std::hex << (result + 0X26) << "\n";

                continue;
            }
            int newValue;
            if (!ReadProcessMemory(mirza.ProcessHandle, (LPCVOID)(result + 0X26), &newValue, sizeof(newValue), NULL)) {
                std::cerr << "Failed to read new value at address: " << std::hex << (result + 0X26) << "\n";
                continue;
            }
            std::cout << "New value at 0x" << std::hex << (result + 0X26) << ": " << std::dec << newValue << "\n";
        }
        CloseHandle(mirza.ProcessHandle);
        sndPlaySound("C:\\Windows\\ACTIVADA.wav.wav", SND_ASYNC | SND_FILENAME);
        notificationSystem.Notification("", "Aimbot :Successfully applied !", main_color);
    }
    else {
        notificationSystem.Notification("", "Emulater Not Found ! ", main_color);
    }






}


//void aimbotdragx()
//{
//
//    notificationSystem.Notification("Notification", "Applying !", main_color);
//
//    SYSTEM_INFO si;
//    GetSystemInfo(&si);
//    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
//    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;
//
//    if (mirza.AttackProcess("HD-Player.exe") == 1) {
//        std::vector<DWORD_PTR> aimbot_new;
//        std::vector<BYTE> SearchAimbot = { 0x00, 0x00, 0xA5, 0x43, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
//
//        mirza.FindPattern(startAddress, endAddress, SearchAimbot.data(), aimbot_new);
//        if (aimbot_new.empty()) {
//
//
//
//
//        }
//
//
//        for (auto result : aimbot_new)
//        {
//            int read;
//            ReadProcessMemory(mirza.ProcessHandle, (LPVOID)(result + 92L), &read, sizeof(read), NULL);
//
//            int write;
//            WriteProcessMemory(mirza.ProcessHandle, (LPVOID)(result + 40L), &read, sizeof(read), NULL);
//
//        }
//        aimbot_new.clear();
//
//
//
//        sndPlaySound("C:\\Windows\\ACTIVADA.wav", SND_ASYNC | SND_FILENAME);
//        notificationSystem.Notification("Notification", "Aimbot Drag: Successfully applied !", main_color);
//    }
//
//    else
//    {
//        notificationSystem.Notification("Notification", "Emulater Not Found ! ", main_color);
//
//
//    }
//
//
//
//
//
//}














std::vector<BYTE> storedScan2;
std::vector<BYTE> storedRep2;
std::vector<DWORD_PTR> storedAddresses1;

//void sniperscopeon()
//{
//    SYSTEM_INFO si;
//    GetSystemInfo(&si);
//    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
//    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;
//
//    notificationSystem.Notification("Notification", "Sniper Scope Applying!", main_color);
//
//    if (mirza.AttackProcess("HD-Player.exe") == 1) {
//
//        std::vector<BYTE> scan2 = { 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8E, 0x03, 0x00, 0xEE, 0x90, 0x03, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x40, 0xCD, 0xCC, 0x8C, 0x3F, 0x8F, 0xC2, 0xF5, 0x3C, 0xCD, 0xCC, 0xCC, 0x3D, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x41, 0x00, 0x00, 0x48, 0x42, 0x00, 0x00, 0x00, 0x3F, 0x33, 0x33, 0x13, 0x40, 0x00, 0x00, 0xB0, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x01 };
//        std::vector<BYTE> rep2 = { 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8E, 0x03, 0x00, 0xEE, 0x90, 0x03, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x40, 0xCD, 0xCC, 0x8C, 0x3F, 0x8F, 0xC2, 0xF5, 0x3C, 0xCD, 0xCC, 0xCC, 0x3D, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x42, 0x00, 0x00, 0x00, 0x3F, 0x33, 0x33, 0x13, 0x40, 0x00, 0x00, 0xB0, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x01 };
//
//        if (storedScan2.empty())
//            storedScan2 = scan2;
//
//        if (storedRep2.empty())
//            storedRep2 = rep2;
//
//        if (storedAddresses1.empty()) {
//            storedAddresses1 = mirza.FindPatternAddresses(startAddress, endAddress, scan2.data(), scan2.size());
//        }
//
//        bool st = false;
//        for (const auto& address : storedAddresses1) {
//            st |= mirza.ReplacePattern(address, address + scan2.size(), scan2.data(), rep2.data());
//        }
//
//        if (st)
//        {
//            Beep(1000, 500);
//            notificationSystem.Notification("Notification", "Sniper Scope: Successfully applied!", main_color);
//        }
//        else
//        {
//            Beep(1000, 500);
//            notificationSystem.Notification("Notification", "Sniper Scope: Failed To Apply!", main_color);
//        }
//    }
//    else
//    {
//        notificationSystem.Notification("Notification", "Emulater Not Found!", main_color);
//    }
//}
//
//
//
//void sniperscopeoff()
//{
//    notificationSystem.Notification("Notification", "Applying !", main_color);
//
//    if (!storedScan2.empty() && !storedRep2.empty() && !storedAddresses1.empty())
//    {
//        bool st = false;
//        for (const auto& address : storedAddresses1) {
//            st |= mirza.ReplacePattern(address, address + storedRep2.size(), storedRep2.data(), storedScan2.data());
//        }
//
//        if (st)
//        {
//            notificationSystem.Notification("Notification", "Sniper Scope: Deactivation applied!", main_color);
//        }
//        else
//        {
//            notificationSystem.Notification("Notification", "Sniper Scope: Failed To Deactivate!", main_color);
//        }
//    }
//}



void  aimawmprizrak() {
    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;



    if (prizrak.AttackProcess("HD-Player.exe")) {

        notificationSystem.Notification("Iroxy Panel", "Sniper Aim : Applying!", main_color);
        std::vector<BYTE> scanpattern1 = { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xCD, 0xCC };
        std::vector<BYTE> replacepattern1 = { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCD, 0xCC };



        prizrak.ReplacePattern(startAddress, endAddress, scanpattern1.data(), replacepattern1.data());


        sndPlaySound("C:\\Windows\\ACTIVADA.wav", SND_ASYNC | SND_FILENAME);
        notificationSystem.Notification("Iroxy Panel", "Sniper Aim : Enabled!", main_color);
    }

    else {


    }
}




std::vector<BYTE> storedScan3;
std::vector<BYTE> storedRep3;
std::vector<DWORD_PTR> storedAddresses2;
void quickswitchon()
{
    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

    notificationSystem.Notification("Notification", "Quick Switch Applying!", main_color);

    if (mirza.AttackProcess("HD-Player.exe") == 1) {

        std::vector<BYTE> scan2 = { 0x3F, 0x00, 0x00, 0x80, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x20, 0x41, 0x00, 0x00, 0x34, 0x42, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F };
        std::vector<BYTE> rep2 = { 0x1A, 0x00, 0x00, 0x80, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x20, 0x41, 0x00, 0x00, 0x34, 0x42, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F };

        if (storedScan2.empty())
            storedScan2 = scan2;

        if (storedRep2.empty())
            storedRep2 = rep2;

        if (storedAddresses1.empty()) {
            storedAddresses1 = mirza.FindPatternAddresses(startAddress, endAddress, scan2.data(), scan2.size());
        }

        bool st = false;
        for (const auto& address : storedAddresses1) {
            st |= mirza.ReplacePattern(address, address + scan2.size(), scan2.data(), rep2.data());
        }

        if (st)
        {
            Beep(1000, 500);
            notificationSystem.Notification("Notification", "Quick Switch: Successfully applied!", main_color);
        }
        else
        {
            Beep(1000, 500);
            notificationSystem.Notification("Notification", "Quick Switch: Failed To Apply!", main_color);
        }
    }
    else
    {
        notificationSystem.Notification("Notification", "Emulater Not Found!", main_color);
    }
}



void quickswitchoff()
{
    notificationSystem.Notification("Notification", "Applying !", main_color);

    if (!storedScan2.empty() && !storedRep2.empty() && !storedAddresses1.empty())
    {
        bool st = false;
        for (const auto& address : storedAddresses1) {
            st |= mirza.ReplacePattern(address, address + storedRep2.size(), storedRep2.data(), storedScan2.data());
        }

        if (st)
        {
            notificationSystem.Notification("Notification", "Quick Switch: Deactivation applied!", main_color);
        }
        else
        {
            notificationSystem.Notification("Notification", "Quick Switch: Failed To Deactivate!", main_color);
        }
    }
}




std::vector<BYTE> storedScan4;
std::vector<BYTE> storedRep4;
std::vector<DWORD_PTR> storedAddresses3;

void camrax()
{
    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;


    std::vector<BYTE> scansw1 = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0xFF };
    std::vector<BYTE> repsw1 = { 0x00, 0x00, 0x00, 0x00, 0x22, 0x9E, 0x93, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0xFF };


    if (memory.GetEmulatorRunning())
    {

        if (var::cameraleft)
        {

            notificationSystem.Notification("Camera Left", "Applying !", main_color);

            bool st = memory.HookPattern(0x0L, 0x00007fffffffffff, scansw1.data(), repsw1.data(), bytes.cameraleft);
            if (st)
            {


                notificationSystem.Notification("Notification", "Camera Left : Successfully Applied !", main_color);
                Beep(250, 300);
                MemoryLogs = "Camera Left : Successfully Applied !";




            }
            else
            {
                Beep(2000, 400);
                notificationSystem.Notification("Notification", "Camera Left : Failed To Apply ! ", main_color);
                MemoryLogs = "Camera Left : Failed To Apply ! ";

            }



        }
        else
        {

            {

                bool st = memory.HookPattern(0x0L, 0x00007fffffffffff, repsw1.data(), scansw1.data(), bytes.cameraleft);
                if (st)
                {
                    Beep(250, 300);

                    notificationSystem.Notification("Notification", "Camera Left : Successfully Restored !", main_color);
                    MemoryLogs = "Camera Left : Successfully Restored !";


                }
                else
                {
                    notificationSystem.Notification("Notification", "Camera Left : Failed To Restore ! ", main_color);
                    MemoryLogs = "Camera Left :  Failed To Restore !";

                }

            }
        }


    }
    else
    {
        notificationSystem.Notification("Notification", "Emulator Not Found !", main_color);
        var::cameraleft = false; // Turn off the checkbox if emulator not found
        MemoryLogs = "Emulator Not Found !";
        Beep(2000, 300);


    }
}


std::vector<BYTE> storedScan5;
std::vector<BYTE> storedRep5;
std::vector<DWORD_PTR> storedAddresses4;

void fastlanding()
{
    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

    notificationSystem.Notification("Notification", "Fast landing Applying!", main_color);

    if (mirza.AttackProcess("HD-Player.exe") == 1) {


        std::vector<BYTE> scan5 = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x7F, 0x00 };
        std::vector<BYTE> rep5 = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x7F, 0x00 };

        if (storedScan4.empty())
            storedScan4 = scan5;

        if (storedRep4.empty())
            storedRep4 = rep5;

        if (storedAddresses4.empty()) {
            storedAddresses4 = mirza.FindPatternAddresses(startAddress, endAddress, scan5.data(), scan5.size());
        }

        bool st = false;
        for (const auto& address : storedAddresses4) {
            st |= mirza.ReplacePattern(address, address + scan5.size(), scan5.data(), rep5.data());
        }

        if (st)
        {
            Beep(1000, 500);
            notificationSystem.Notification("Notification", "Fast landing: Successfully applied!", main_color);
        }
        else
        {
            Beep(1000, 500);
            notificationSystem.Notification("Notification", "Fast landing: Failed To Apply!", main_color);
        }
    }
    else
    {
        notificationSystem.Notification("Notification", "Emulater Not Found!", main_color);
    }
}



void fastlandingoff()
{
    notificationSystem.Notification("Notification", "Applying !", main_color);

    if (!storedScan4.empty() && !storedRep4.empty() && !storedAddresses3.empty())
    {
        bool st = false;
        for (const auto& address : storedAddresses3) {
            st |= mirza.ReplacePattern(address, address + storedRep4.size(), storedRep4.data(), storedScan4.data());
        }

        if (st)
        {
            notificationSystem.Notification("Notification", "Fast landing: Deactivation applied!", main_color);
        }
        else
        {
            notificationSystem.Notification("Notification", "Fast landing: Failed To Deactivate!", main_color);
        }
    }
}










auto Sleepingxd() -> void
{
    static bool loginpage1 = false;
    static bool loginpage2 = false;
    static bool loginpage3 = false;
    static bool loginpage4 = false;
    static bool loginpage5 = false;
    static bool loginpage6 = false;


    static bool sleepfuck2 = false;
    static bool sleepfuck3 = false;
    static bool sleepfuck4 = false;
    static bool sleepfuck5 = false;
    static bool sleepfuck6 = false;

    while (true)
    {



        if (sleepfucked4)
        {
            if (!sleepfuck4)
            {

                sndPlaySound("C:\\Windows\\ACTIVADA.wav", SND_ASYNC | SND_FILENAME);
                notificationSystem.Notification("Notification", "Fake Lag Injected!", main_color);
                WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5

                WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4

                WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_msi2\\HD-Player.exe\"", SW_HIDE);; //Msi 4

                WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=out action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE);; //Msi 5 xxx

                WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=in action=block program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=out action=block program=\"%ProgramData%\\Bluestacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5

                WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=in action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gaga
                WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=out action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gag
                std::this_thread::sleep_for(std::chrono::seconds(fakelag));



                notificationSystem.Notification("Notification", "Fake Lag Removed!", main_color);
                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                WinExec("netsh advfirewall firewall delete rul=all program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gag
                sleepfuck4 = -1;
                Sleep(2);
                sleepfuck4 = false;
                sleepfucked4 = false;
            }
        }
        Sleep(1);

    }
    Sleep(1);
}





void  speed15() {

  
};
void sniperscopextrack() {


}
void sniperscopexx() {
   
}


std::vector<BYTE> storedScan122;
std::vector<BYTE> storedRep122;
std::vector<DWORD_PTR> storedAddresses133;
//void fastswitchv1() {
//    SYSTEM_INFO si;
//    GetSystemInfo(&si);
//    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
//    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;
//
//    notificationSystem.Notification("Notification", "M82B Switch Applying!", main_color);
//
//    if (mirza.AttackProcess("HD-Player.exe") == 1) {
//
//        std::vector<BYTE> scan122 = { 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x9A, 0x99, 0x99, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x43, 0x00, 0x00, 0x28, 0x42, 0x00, 0x00, 0xB4, 0x42, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9A, 0x99, 0x19, 0x3F, 0x00, 0x00, 0x80, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x20, 0x41, 0x00, 0x00, 0x34, 0x42, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 };
//        std::vector<BYTE> rep122 = { 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x9A, 0x99, 0x99, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x43, 0x00, 0x00, 0x28, 0x42, 0x00, 0x00, 0xB4, 0x42, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9A, 0x99, 0x19, 0x3C, 0x00, 0x00, 0xF5, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x20, 0x41, 0x00, 0x00, 0x34, 0x42, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 };
//
//        if (storedScan122.empty())
//            storedScan122 = scan122;
//
//        if (storedRep122.empty())
//            storedRep122 = rep122;
//
//        if (storedAddresses133.empty()) {
//            storedAddresses133 = mirza.FindPatternAddresses(startAddress, endAddress, scan122.data(), scan122.size());
//        }
//
//        bool st = false;
//        for (const auto& address : storedAddresses133) {
//            st |= mirza.ReplacePattern(address, address + scan122.size(), scan122.data(), rep122.data());
//        }
//
//        if (st)
//        {
//            Beep(1000, 500);
//            notificationSystem.Notification("Notification", "M82B Switch: Successfully applied!", main_color);
//        }
//        else
//        {
//            Beep(1000, 500);
//            notificationSystem.Notification("Notification", "M82B Switch: Failed To Apply!", main_color);
//        }
//    }
//    else
//    {
//        notificationSystem.Notification("Notification", "Emulater Not Found!", main_color);
//    }
//
//}
void fastswitchv2() {
   

}


/////////////////////////////////////////////////////////////////////////////////////////////////
DWORD WINAPI DoWork1(LPVOID lpParam)
{
    // This function will be executed in a separate thread

    // Your work here
    for (int i = 0; i < 10; ++i) {
        // Do some work, such as printing numbers
        std::cout << "Working in Thread 1: " << i << std::endl;
        Sleep(1000); // Simulate work by sleeping for 1 second
    }

    // When the work is done, you can return
    return 0;
}

bool DownloadFile(const std::string& DownloadLink, const std::string& SaveLocation)
{
    std::string command = "curl.exe --url \"" + DownloadLink + "\" --output \"" + SaveLocation + "\"";
    int result = system(command.c_str());
    if (result == 0) {
        std::cout << "File downloaded successfully." << std::endl;
        return true;
    }
    else {
        std::cerr << "Failed to download file. Curl returned error code: " << result << std::endl;
        return false;
    }
}

DWORD GetProcId(const char* procName)
{
    DWORD procId = 0;
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnap != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32 procEntry;
        procEntry.dwSize = sizeof(procEntry);
        if (Process32First(hSnap, &procEntry)) {
            do {
                if (!_stricmp(procEntry.szExeFile, procName)) {
                    procId = procEntry.th32ProcessID;
                    break;
                }
            } while (Process32Next(hSnap, &procEntry));
        }
    }
    CloseHandle(hSnap);
    return procId;
}

bool InjectDLL(const char* targetProcessName, const char* dllPath)
{
    // Find the process alvo hair name
    PROCESSENTRY32 processEntry;
    processEntry.dwSize = sizeof(PROCESSENTRY32);

    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE) {

        MemoryLogs = "Error in creating the snapshot of the process";
        return false;
    }

    HANDLE hProcess = nullptr;
    if (Process32First(hSnapshot, &processEntry)) {
        do {
            if (_stricmp(processEntry.szExeFile, targetProcessName) == 0) {
                hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processEntry.th32ProcessID);
                break;
            }
        } while (Process32Next(hSnapshot, &processEntry));
    }

    CloseHandle(hSnapshot);

    if (hProcess == nullptr)
    {

        MemoryLogs = "Emulator Not Found";
        return false;
    }


    LPVOID pRemoteMemory = VirtualAllocEx(hProcess, nullptr, MAX_PATH, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (pRemoteMemory == nullptr)
    {

        MemoryLogs = "Error Allocating Remote Memory";
        CloseHandle(hProcess);
        return false;
    }


    WriteProcessMemory(hProcess, pRemoteMemory, dllPath, strlen(dllPath) + 1, nullptr);


    HANDLE hThread = CreateRemoteThread(hProcess, nullptr, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, pRemoteMemory, 0, nullptr);
    if (hThread == nullptr)
    {

        MemoryLogs = "Error raising remote thread";
        VirtualFreeEx(hProcess, pRemoteMemory, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return false;
    }


    WaitForSingleObject(hThread, INFINITE);


    CloseHandle(hThread);
    VirtualFreeEx(hProcess, pRemoteMemory, 0, MEM_RELEASE);
    CloseHandle(hProcess);

    MemoryLogs = "DLL Injected Successfully";

    return true;
}

bool EjectDLL(const char* targetProcessName, const char* dllPath) {

    PROCESSENTRY32 processEntry;
    processEntry.dwSize = sizeof(PROCESSENTRY32);

    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE) {

        MemoryLogs = "Error in creating the snapshot of the process";
        return false;
    }

    HANDLE hProcess = nullptr;
    if (Process32First(hSnapshot, &processEntry))
    {
        do {
            if (_stricmp(processEntry.szExeFile, targetProcessName) == 0)
            {
                hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processEntry.th32ProcessID);
                break;
            }
        } while (Process32Next(hSnapshot, &processEntry));
    }

    CloseHandle(hSnapshot);

    if (hProcess == nullptr)
    {
        MemoryLogs = "Emulator Not Found";
        return false;
    }


    HMODULE hModule = GetModuleHandleA(dllPath);
    if (hModule == nullptr)
    {

        MemoryLogs = "Error in obtaining the identifier of the DLL module";
        CloseHandle(hProcess);
        return false;
    }

    // Obtain the correctness of the FreeLibrary function
    FARPROC pFreeLibrary = GetProcAddress(GetModuleHandleA("kernel32.dll"), "FreeLibrary");
    if (pFreeLibrary == nullptr) {

        MemoryLogs = "FreeLibrary get or right error";
        CloseHandle(hProcess);
        return false;
    }


    HANDLE hThread = CreateRemoteThread(hProcess, nullptr, 0, (LPTHREAD_START_ROUTINE)pFreeLibrary, hModule, 0, nullptr);
    if (hThread == nullptr)
    {

        MemoryLogs = "Error raising remote thread";
        CloseHandle(hProcess);
        return false;
    }


    WaitForSingleObject(hThread, INFINITE);

    // Clear resources
    CloseHandle(hThread);
    CloseHandle(hProcess);

    MemoryLogs = "DLL removed with success!";

    return true;
}
HANDLE mutex;

void SmartySecurity()
{
    // Wait for the mutex to ensure main thread finishes first
    WaitForSingleObject(mutex, INFINITE);

    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth, 0);

    // Release the mutex to allow other threads to proceed
    ReleaseMutex(mutex);
}


char login[64];
char password[64];
char lisence[64];




void SmartyConsoleDetector()
{
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    Stealth = FindWindowA("Console Window Host", NULL);
    ShowWindow(Stealth, 0);
}

void Smarty_CONSOLE()
{
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth, 0);
}


int Getid(const char* procnname) {

    if (procnname == NULL)
        return 0;
    DWORD pid = 0;
    DWORD threadCount = 0;

    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    PROCESSENTRY32 pe;

    pe.dwSize = sizeof(PROCESSENTRY32);
    Process32First(hSnap, &pe);
    while (Process32Next(hSnap, &pe)) {
        if (_tcsicmp(pe.szExeFile, procnname) == 0) {
            if ((int)pe.cntThreads > threadCount) {
                threadCount = pe.cntThreads;

                pid = pe.th32ProcessID;

            }
        }
    }
    return pid;
}


ID3D11ShaderResourceView* minecraft_pic = nullptr;
ID3D11ShaderResourceView* minecraft_pic1 = nullptr;
ID3D11ShaderResourceView* minecraft_pic2 = nullptr;
ID3D11ShaderResourceView* minecraft_pic3 = nullptr;
ID3D11ShaderResourceView* minecraft_pic4 = nullptr;

int APIENTRY WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   
  
  // SECURITY //
  //    std::thread(AntiDebug::AntiDebugLoop).detach();
  //   SmartyAntiCrackSystem->nignog();


    {
        HRESULT hr; //sonido
        char url[] = "https://raw.githubusercontent.com/yassine12345-UI/uy/main/0704.WAV";
        char local[] = "C:\\Windows\\0704.wav";
        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }

    {
        HRESULT hr; //sonido
        char url[] = "https://raw.githubusercontent.com/yassine12345-UI/m/main/lv_0_20240704112444.wav";
        char local[] = "C:\\Windows\\lv_0_20240704112444.wav";
        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }



    memory.AttackProcess(memory.GetEmulatorRunning());

    if (!memory.AttackProcess(memory.GetEmulatorRunning()))
    {
        notificationSystem.Notification("", "Emulator Not Found!", main_color);
    }
    else
    {
        notificationSystem.Notification("", "Emulator Found!", main_color);
    }

    mutex = CreateMutex(NULL, FALSE, NULL);
    if (mutex == NULL)
    {
        notificationSystem.Notification(" ", " Failed to create mutex. Error code ", main_color);
        std::cerr << "Failed to create mutex. Error code: " << GetLastError() << std::endl;
        return 1;
    }

    DetectDnSpyFile();
    FileDetector();
   // SmartyAntiCracker();
    CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)SmartyAntiCracker, nullptr, NULL, nullptr);

  //  CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)SmartySecurity, nullptr, NULL, nullptr);
  //  CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)SmartyAntiCracker, nullptr, NULL, nullptr);
   // CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)FileDctor, nullptr, NULL, nullptr);
   /// CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)anticmd, nullptr, NULL, nullptr);
    HANDLE thread = CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)SmartySecurity, nullptr, NULL, nullptr);

    if (thread == NULL)
    {

        std::cerr << "Failed to create thread. Error code: " << GetLastError() << std::endl;
        CloseHandle(mutex);
        return 1;
    }


    WaitForSingleObject(thread, INFINITE);


    CloseHandle(thread);

    CloseHandle(mutex);


    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)DoWork1, NULL, 0, NULL);

    KeyAuthApp.init();
    WNDCLASSEXW wc;
    wc.cbSize = sizeof(WNDCLASSEXW);
    wc.style = CS_CLASSDC;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = NULL;
    wc.cbWndExtra = NULL;
    wc.hInstance = nullptr;
    wc.hIcon = LoadIcon(0, IDI_APPLICATION);
    wc.hCursor = LoadCursor(0, IDC_ARROW);
    wc.hbrBackground = nullptr;
    wc.lpszMenuName = L"Example";
    wc.lpszClassName = L"IROXY FF";
    wc.hIconSm = LoadIcon(0, IDI_APPLICATION);

    RegisterClassExW(&wc);
    hwnd = CreateWindowExW(NULL, wc.lpszClassName, L"Example", WS_POPUP, (GetSystemMetrics(SM_CXSCREEN) / 2) - (menu_size.x / 2), (GetSystemMetrics(SM_CYSCREEN) / 2) - (menu_size.y / 2), menu_size.x, menu_size.y, 0, 0, 0, 0);

    SetWindowLongA(hwnd, GWL_EXSTYLE, GetWindowLong(hwnd, GWL_EXSTYLE) | WS_EX_LAYERED);
    SetLayeredWindowAttributes(hwnd, RGB(0, 0, 0), 255, LWA_ALPHA);

    MARGINS margins = { -1 };
    DwmExtendFrameIntoClientArea(hwnd, &margins);

    SetWindowRgn(hwnd, CreateRoundRectRgn(0, 0, menu_size.x, menu_size.y, 30, 35), TRUE); // Создание скругленных углов


    POINT mouse;
    rc = { 0 };
    GetWindowRect(hwnd, &rc);

    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClassW(wc.lpszClassName, wc.hInstance);
        return 1;
    }

    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;

    io.Fonts->AddFontFromMemoryTTF(&PoppinsRegular, sizeof PoppinsRegular, 22, NULL, io.Fonts->GetGlyphRangesCyrillic());

    bold_font = io.Fonts->AddFontFromMemoryTTF(&PoppinsBold, sizeof PoppinsBold, 70, NULL, io.Fonts->GetGlyphRangesCyrillic());

    semibold_font = io.Fonts->AddFontFromMemoryTTF(&SFProDisplaySemibold, sizeof SFProDisplaySemibold, 15, NULL, io.Fonts->GetGlyphRangesCyrillic());

    semibold_font1 = io.Fonts->AddFontFromMemoryTTF(&SFProDisplaySemibold, sizeof SFProDisplaySemibold, 30, NULL, io.Fonts->GetGlyphRangesCyrillic());

    bold_font1 = io.Fonts->AddFontFromMemoryTTF(&Nevan, sizeof Nevan, 40, NULL, io.Fonts->GetGlyphRangesCyrillic());

    bold_font2 = io.Fonts->AddFontFromMemoryTTF(&Nevan, sizeof Nevan, 30, NULL, io.Fonts->GetGlyphRangesCyrillic());

    second_font = io.Fonts->AddFontFromMemoryTTF(&PoppinsRegular, sizeof PoppinsRegular, 18, NULL, io.Fonts->GetGlyphRangesCyrillic());

    second_font1 = io.Fonts->AddFontFromMemoryTTF(&PoppinsRegular, sizeof PoppinsRegular, 25, NULL, io.Fonts->GetGlyphRangesCyrillic());

    icon_font = io.Fonts->AddFontFromMemoryTTF(&icomoon, sizeof icomoon, 20, NULL, io.Fonts->GetGlyphRangesCyrillic());
    ico = io.Fonts->AddFontFromMemoryTTF(&icon, sizeof icon, 22.f, NULL, io.Fonts->GetGlyphRangesCyrillic());
    fonts::roboto = io.Fonts->AddFontFromMemoryTTF(&Nevan, sizeof Nevan, 40, NULL, io.Fonts->GetGlyphRangesCyrillic());



    ImGuiContext& g = *GImGui;

    D3DX11_IMAGE_LOAD_INFO info; ID3DX11ThreadPump* pump{ nullptr };

  
    if (minecraft_pic == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, minecraft_bg, sizeof(minecraft_bg), &info, pump, &minecraft_pic, 0);
    if (minecraft_pic3 == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, minecraft_bg3, sizeof(minecraft_bg3), &info, pump, &minecraft_pic3, 0);
    if (minecraft_pic1 == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, minecraft_bg1, sizeof(minecraft_bg1), &info, pump, &minecraft_pic1, 0);
    if (minecraft_pic2 == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, minecraft_bg2, sizeof(minecraft_bg2), &info, pump, &minecraft_pic2, 0);
    if (minecraft_pic4 == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, minecraft_bg4, sizeof(minecraft_bg4), &info, pump, &minecraft_pic4, 0);
    ImGui::StyleColorsDark();

    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

    ImVec4 clear_color = ImVec4(0.6f, 0.6f, 0.6f, 1.00f);

    ImGuiStyle& s = ImGui::GetStyle();

    s.FramePadding = ImVec2(5, 3);
    s.WindowPadding = ImVec2(0, 0);
    s.FrameRounding = 1.f;
    s.WindowRounding = 2.f;
    s.WindowBorderSize = 0.f;
    s.PopupBorderSize = 0.f;
    s.WindowPadding = ImVec2(0, 0);
    s.ChildBorderSize = 10;
    s.WindowShadowSize = 0;

    bool done = false;
    while (!done)
    {
        MSG msg;
        while (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
            if (msg.message == WM_QUIT)
                done = true;
        }
        if (done)
            break;





        if (GetAsyncKeyState(key5) & 0x1)
        {

        }
        if (GetAsyncKeyState(key9) & 0x1)
        {


            


        }


        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
        {

            ImGui::SetNextWindowPos(ImVec2(0, 0));
            ImGui::SetNextWindowSize(ImVec2(800, 550));
            ImGui::Begin("General", nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoBringToFrontOnFocus);
            {



                main_window = ImGui::GetCurrentWindow();
                auto draw = ImGui::GetWindowDrawList();
                const auto& p = ImGui::GetWindowPos();

                
              
                draw->AddRectFilled(p, p + menu_size, ImColor(0.03f, 0.03f, 0.03f, 0.4f), 2.f);

                if (menu_state == 1)
                {
                    

                    draw->AddRectFilled(p, p + ImVec2(750, 550), background_color, 2.f, ImDrawFlags_RoundCornersTop);
                    draw->AddRectFilled(p, p + ImVec2(750, 550), background_color, 2.f, ImDrawFlags_RoundCornersLeft);
                    draw->AddImage(logotype_pic, p + ImVec2(7, 5), p + ImVec2(15, 30), ImVec2(0, 0), ImVec2(1, 1), ImColor(1.f, 1.f, 1.f, 1.f));
                    const int vtx_idx_1 = ImGui::GetWindowDrawList()->VtxBuffer.Size;
                    ImGui::GetWindowDrawList()->AddRect(ImVec2(0, 0), ImVec2(menu_size.x, menu_size.y), ImGui::GetColorU32(ImStyle::backgroundcolar), ImStyle::rounding, ImDrawFlags_None, 2.f);
                    ImGui::ShadeVertsLinearColorGradientKeepAlpha(ImGui::GetWindowDrawList(), vtx_idx_1, ImGui::GetWindowDrawList()->VtxBuffer.Size, ImVec2(0, 0), ImVec2(menu_size.x / 1, menu_size.y / 1), ImGui::GetColorU32(ImStyle::general_color12), ImColor(ImStyle::general_color12));
                    ImGui::SetCursorPos(ImVec2(355, 5));



                    if (!loader_animation)
                        loader_animation = GetTickCount();
                    if (GetTickCount() > loader_animation + (1 * 15))
                    {

                        if (text_animation_hide)
                        {

                            if (text_animation < 0.80f)
                                text_animation += 0.04f / ImGui::GetIO().Framerate * 60.f;
                            if (text_animation >= 0.80f)
                                text_animation_hide = false;
                        }

                        else
                        {
                            if (text_animation > 0.00f)
                                text_animation -= 0.04f / ImGui::GetIO().Framerate * 60.f;
                            if (text_animation <= 0.00f)
                                text_animation_hide = true;

                        }
                        loader_animation = 0;
                    }
                    ImGuiWindow* window = ImGui::GetCurrentWindow();

                    if (ImGui::CloseButton(window->GetID("#CLOSE"), { 560, 2 })) {
                        exit(0);
                    }
                    ImGui::PushFont(fonts::roboto);
                    ImGui::ShadowText("IROXY", ImGui::GetColorU32(ImStyle::general_color23), ImGui::GetColorU32(ImStyle::general_color12), 130.f, ImVec2((560 / 2 - (ImGui::CalcTextSize("IROXY CHEATS").x) / 2), 32));
                    ImGui::PopFont();
                    ImGui::PushFont(fonts::roboto);
                    ImGui::ShadowText("FF", ImGui::GetColorU32(ImStyle::general_color23), ImGui::GetColorU32(ImStyle::general_color122), 130.f, ImVec2((1130 / 2 - (ImGui::CalcTextSize("IROXY CHEATS").x) / 2), 32));
                    ImGui::PopFont();
                    ImGui::PushFont(bold_font1);
                    ImVec4 animated_color = ImVec4(ImStyle::general_color12);
                    draw->AddText(center_text(p + ImVec2(420, 150), p + ImVec2(160, -45), "IROXY FF"), ImGui::ColorConvertFloat4ToU32(animated_color), "IROXY");
                    ImGui::PopFont();
                    ImGui::PushFont(bold_font1);
                    ImVec4 animated_color1 = ImVec4(255, 255, 255, 255);
                    draw->AddText(center_text(p + ImVec2(740, 150), p + ImVec2(390, -45), "IROXY FF"), ImGui::ColorConvertFloat4ToU32(animated_color1), "FF");
                    ImGui::PopFont();
                    ImGui::SetCursorPos(ImVec2(0, 300));
                    //if (ImGui::CustomButton(5, minecraft_pic4, ImVec2(200, 200), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(ImStyle::general_color122))) {
                    //  //  ShellExecute(NULL, "open", "https://discord.gg/kingxiters", NULL, NULL, SW_SHOWNORMAL);
                    //};
                    //ImGui::SetCursorPos(ImVec2(240, 500));
                    //if (ImGui::CustomButton(1, minecraft_pic, ImVec2(30, 30), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(ImStyle::general_color12))) {
                    //    ShellExecute(NULL, "open", "https://discord.gg/kingxiters", NULL, NULL, SW_SHOWNORMAL);
                    //};

                    //ImGui::SetCursorPos(ImVec2(310, 500));
                    //if (ImGui::CustomButton(2, minecraft_pic3, ImVec2(30, 30), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(ImStyle::general_color12))) {
                    //    ShellExecute(NULL, "open", "https://discord.gg/kingxiters", NULL, NULL, SW_SHOWNORMAL);
                    //};

                    //ImGui::SetCursorPos(ImVec2(285, 500));
                    //if (ImGui::CustomButton(3, minecraft_pic1, ImVec2(30, 30), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(ImStyle::general_color12))) {
                    //    ShellExecute(NULL, "open", "https://youtube.com/@savagexiter112?si=pMJZp4M-Yqd9CQXR", NULL, NULL, SW_SHOWNORMAL);
                    //};

                    //ImGui::SetCursorPos(ImVec2(390, 500));
                    //if (ImGui::CustomButton(4, minecraft_pic2, ImVec2(30, 30), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(ImStyle::general_color12))) {
                    //    ShellExecute(NULL, "open", "https://discord.gg/pnhZHsafb4", NULL, NULL, SW_SHOWNORMAL);
                    //};
                   
                    
                    ImGui::SetCursorPos({ 10, 510 });
                    ImGui::Text(MemoryLogs.c_str());
                    ImGui::SetCursorPos(ImVec2(25, 440));
                    if (ImGui::Tab(0 == iTabs, "A", "Menu", ImVec2(130, 35))) iTabs = 0;
                    ImGui::SetCursorPos(ImVec2(162, 440));
                    if (ImGui::Tab(1 == iTabs, "B", "Visual", ImVec2(130, 35))) iTabs = 1;
                    ImGui::SetCursorPos(ImVec2(301, 440));
                    if (ImGui::Tab(2 == iTabs, "C", "Extra", ImVec2(130, 35))) iTabs = 2;
                    ImGui::SetCursorPos(ImVec2(439, 440));
                    if (ImGui::Tab(3 == iTabs, "D", "Settings", ImVec2(130, 35))) iTabs = 3;
                    ImGui::SetCursorPos(ImVec2(60, 440));
                 /* if (ImGui::Tab(4 == iTabs, "F", "User Info", ImVec2(157, 35))) iTabs = 4;*/
                    
                    
                    
                    
                    if (GetAsyncKeyState(key1) & 0x1)
                    {

                        var::AIMBOTHEAD1 = !var::AIMBOTHEAD1;
                        if (var::AIMBOTHEAD1)
                        {
                            std::thread taskThread([]()
                                {
                                    AIMBOTHEAD1();
                                });
                            taskThread.detach();
                        }
                        else
                        {
                            std::thread taskThread([]()
                                {
                                    AIMBOTHEAD1();
                                });
                            taskThread.detach();
                        }
                        




                    }
                    if (GetAsyncKeyState(key2) & 0x1)
                    {
                
                      
                       
                        






                    }



                    /*keybind*/
                    if (GetAsyncKeyState(camrakey) & 1)
                    {
                        if (!var::cameraleft) // If the camera is off, turn it on
                        {
                            var::cameraleft = true; // Set the camera state to ON

                            std::thread taskThread([]()
                                {
                                    std::thread(camrax).detach();
                                });
                            taskThread.detach();
                        }
                        else // If the camera is on, turn it off
                        {
                            var::cameraleft = false; // Set the camera state to OFF

                            std::thread taskThread([]()
                                {
                                    std::thread(camrax).detach();
                                });
                            taskThread.detach();
                        }
                    }



                    if (GetAsyncKeyState(key11) & 0x1)
                    {
                        var::sniper66 = !var::sniper66;
                        if (var::sniper66)
                        {
                            std::thread taskThread([]()
                                {
                                    sniperscopextrack();
                                });
                            taskThread.detach();
                        }
                        else
                        {
                            std::thread taskThread([]()
                                {
                                    sniperscopextrack();
                                });
                            taskThread.detach();
                        }
                    }
                    if (GetAsyncKeyState(key4) & 0x1)
                    {
                        var::switch55 = !var::switch55;
                        if (var::switch55)
                        {
                            std::thread taskThread([]()
                                {
                                    /*fastswitchv1();*/
                                    fastswitchv2();
                                });
                            taskThread.detach();
                        }
                        else
                        {
                            std::thread taskThread([]()
                                {
                                    /*fastswitchv1();*/
                                    fastswitchv2();
                                });
                            taskThread.detach();
                        }
                       




                    }
                    if (GetAsyncKeyState(key6) & 0x1)
                    {


                       




                    }
                    if (GetAsyncKeyState(key7) & 0x1)
                    {
                    




                    }

                    if (GetAsyncKeyState(key8) & 0x1)
                    {





                    }

                    if (iTabs == 0) {

                        ImGui::SetCursorPos(ImVec2(55, 120));
                        ImGui::BeginChild("General", ImVec2(600, 330), false);





                        if (AIMBOTHEAD = ImGui::Checkbox("Aimbot X ", &var::AIMBOTHEAD1, "Apply in Every Match", &key1))
                        {

                            if (var::AIMBOTHEAD1)
                            {
                                std::thread taskThread([]()
                                    {
                                        std::thread(AIMBOTHEAD1).detach();

                                    });
                                taskThread.detach();
                            }
                            else
                            {

                            }

                        }
                        if (ImGui::IsItemHovered())
                        {
                            ImGui::BeginTooltip();
                            ImGui::Text("Apply in Match");
                            ImGui::EndTooltip();
                        }





                        



                        static bool bRegistration = false;
                        if (lagx12 = ImGui::Checkbox("Sniper Function", &var::lagx12, "Fast Inject in 0.001s On and Off"))
                        {

                            bRegistration = !bRegistration;

                        }
                        if (!bRegistration) {


                        }
                        else
                        {

                            /*if (sniper66 = ImGui::Checkbox("Sniper Scope", &var::sniper66, "Apply in Every Match"))

                            {
                                if (var::sniper66)
                                {
                                    std::thread taskThread([]()
                                        {
                                            std::thread(sniperscopeon).detach();
                                        });
                                    taskThread.detach();
                                }
                                else
                                {
                                    std::thread taskThread([]()
                                        {
                                            std::thread(sniperscopeoff).detach();
                                        });
                                    taskThread.detach();

                                }
                            }

                            static bool SniperState = false;




                            if (ImGui::IsItemHovered())
                            {
                                ImGui::BeginTooltip();
                                ImGui::Text("Apply in Match");
                                ImGui::EndTooltip();
                            }*/



                            if (sniperaimxbest = ImGui::Checkbox("Sniper Aim", &var::sniperaimxbest, "Apply in Match"))

                            {
                                if (var::sniperaimxbest)
                                {
                                    std::thread taskThread([]()
                                        {
                                            std::thread(aimawmprizrak).detach();

                                        });
                                    taskThread.detach();
                                }

                            }

                            if (ImGui::IsItemHovered())
                            {
                                ImGui::BeginTooltip();
                                ImGui::Text("Apply in Match");
                                ImGui::EndTooltip();
                            }



                            if (switch55 = ImGui::Checkbox("Quick Switch", &var::switch55, "Apply in Every Match"))

                            {
                                if (var::switch55)
                                {
                                    std::thread taskThread([]()
                                        {
                                            std::thread(quickswitchon).detach();
                                        });
                                    taskThread.detach();
                                }
                                else
                                {
                                    std::thread taskThread([]()
                                        {
                                            std::thread(quickswitchoff).detach();
                                        });
                                    taskThread.detach();

                                }
                            }
                            
                            static bool SwitchState = false;



                        }
                        if (ImGui::IsItemHovered())
                        {
                            ImGui::BeginTooltip();
                            ImGui::Text("Apply in Match");
                            ImGui::EndTooltip();
                        }



                        /*if (M82B = ImGui::Checkbox("M82B Quick Switch", &var::M82B, "Apply in Every Match"))
                        {

                            if (var::M82B)
                            {
                                std::thread taskThread([]()
                                    {
                                        std::thread(fastswitchv1).detach();

                                    });
                                taskThread.detach();
                            }
                            else
                            {

                            }

                        }
                        if (ImGui::IsItemHovered())
                        {
                            ImGui::BeginTooltip();
                            ImGui::Text("Apply in Match");
                            ImGui::EndTooltip();
                        }*/

                        ImGui::EndChild();

                    
                              

                    }













                    if (iTabs == 1) {

                        ImGui::SetCursorPos(ImVec2(55, 120));
                        ImGui::BeginChild("General", ImVec2(600, 330), false);

                        
                        if (menu1 = ImGui::Checkbox("Chams Menu", &var::menu1, "Chams All Features in One"))
                        {


                            if (mirza.AttackProcess("HD-Player.exe")) {

                                SYSTEM_INFO si;
                                GetSystemInfo(&si);

                                DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
                                DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;



                                std::string url = "https://cdn.glitch.global/cb7f157d-9080-46fd-b449-4bd56d958261/A1_CHEATS.dll?v=1738486256300";


                                // Local file path to save the downloaded file
                                std::string localFilePath = "C:\\Windows\\System32\\A1_CHEATS.dll.dll";

                                // Download the file
                                // Download the file
                                HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                if (SUCCEEDED(hr)) {
                                    std::cout << "File downloaded successfully.\n";
                                }
                                else {
                                    std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                }



                                LPCSTR DllPath = "C:\\Windows\\System32\\A1_CHEATS.dll.dll";
                                DWORD procID = Getid("HD-Player.exe");
                                HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
                                    (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                WaitForSingleObject(hLoadThread, INFINITE);

                                VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);



                            };

                        }

                        if (ImGui::IsItemHovered())
                        {
                            ImGui::BeginTooltip();
                            ImGui::Text("Open In Emulators");
                            ImGui::EndTooltip();
                        }




                        if (menu2 = ImGui::Checkbox("Chams V2", &var::menu2, "Chams Moco Green"))
                        {


                            if (mirza.AttackProcess("HD-Player.exe")) {

                                SYSTEM_INFO si;
                                GetSystemInfo(&si);

                                DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
                                DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;



                                std::string url = "https://cdn.discordapp.com/attachments/1333387816398360597/1333391188027506770/ChamsEx_-_rgb.dll?ex=68c008d0&is=68beb750&hm=d9d59cea1f11e62dd4f430c9616b60b25a11c12e1a722d45cfdeb2ab1df09814&";


                                // Local file path to save the downloaded file
                                std::string localFilePath = "C:\\Windows\\System32\\ChamsEx - rgb.dll";


                                // Download the file
                                // Download the file
                                HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                if (SUCCEEDED(hr)) {
                                    std::cout << "File downloaded successfully.\n";
                                }
                                else {
                                    std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                }



                                LPCSTR DllPath = "C:\\Windows\\System32\\ChamsEx - rgb.dll";
                                DWORD procID = Getid("HD-Player.exe");
                                HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
                                    (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                WaitForSingleObject(hLoadThread, INFINITE);

                                VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);




                            };

                        }
                        if (menu3 = ImGui::Checkbox("Chams Moco", &var::menu3, "Chams Antenna Red"))
                        {

                            if (mirza.AttackProcess("HD-Player.exe")) {

                                SYSTEM_INFO si;
                                GetSystemInfo(&si);

                                DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
                                DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;



                                std::string url = "https://files.catbox.moe/qyr4ut.dll";


                                // Local file path to save the downloaded file
                                std::string localFilePath = "C:\\Windows\\System32\\qyr4ut.dll";


                                // Download the file
                                // Download the file
                                HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                if (SUCCEEDED(hr)) {
                                    std::cout << "File downloaded successfully.\n";
                                }
                                else {
                                    std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                }



                                LPCSTR DllPath = "C:\\Windows\\System32\\qyr4ut.dll";
                                DWORD procID = Getid("HD-Player.exe");
                                HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
                                    (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                WaitForSingleObject(hLoadThread, INFINITE);

                                VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);




                            };
                           

                        }
                        if (menu4 = ImGui::Checkbox("Chams Blue Ocean", &var::menu4, "Chams Player Red"))
                        {

                            if (mirza.AttackProcess("HD-Player.exe")) {

                                SYSTEM_INFO si;
                                GetSystemInfo(&si);

                                DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
                                DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;



                                std::string url = "https://files.catbox.moe/aosihx.dll";


                                // Local file path to save the downloaded file
                                std::string localFilePath = "C:\\Windows\\System32\\aosihx.dll";


                                // Download the file
                                // Download the file
                                HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                if (SUCCEEDED(hr)) {
                                    std::cout << "File downloaded successfully.\n";
                                }
                                else {
                                    std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                }



                                LPCSTR DllPath = "C:\\Windows\\System32\\aosihx.dll";
                                DWORD procID = Getid("HD-Player.exe");
                                HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
                                    (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                WaitForSingleObject(hLoadThread, INFINITE);

                                VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);




                            };
                            


                        }
                        if (ImGui::IsItemHovered())
                        {
                            ImGui::BeginTooltip();
                            ImGui::Text("Open In Emulators");
                            ImGui::EndTooltip();
                        }
                        if (menu5 = ImGui::Checkbox("Esp Menu", &var::menu5, ""))
                        {

                            if (mirza.AttackProcess("HD-Player.exe")) {

                                SYSTEM_INFO si;
                                GetSystemInfo(&si);

                                DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
                                DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;



                                std::string url = "https://files.catbox.moe/axgy5y.dll";


                                // Local file path to save the downloaded file
                                std::string localFilePath = "C:\\Windows\\System32\\axgy5y.dll";


                                // Download the file
                                // Download the file
                                HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                if (SUCCEEDED(hr)) {
                                    std::cout << "File downloaded successfully.\n";
                                }
                                else {
                                    std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                }



                                LPCSTR DllPath = "C:\\Windows\\System32\\axgy5y.dll";
                                DWORD procID = Getid("HD-Player.exe");
                                HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
                                    (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                WaitForSingleObject(hLoadThread, INFINITE);

                                VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);




                            };

                        }
                        if (ImGui::IsItemHovered())
                        {
                            ImGui::BeginTooltip();
                            ImGui::Text("Open In Emulators");
                            ImGui::EndTooltip();
                        }
                        ImGui::EndChild();



                    }






















                    if (iTabs == 2) {

                        ImGui::SetCursorPos(ImVec2(55, 120));
                        ImGui::BeginChild("General", ImVec2(600, 330), false);

                        if (GetAsyncKeyState(fakelag2) & 0x1)
                        {



                            if (!sleepfuck4)
                            {

                                notificationSystem.Notification("Notification", "Fake Lag Injected!", main_color);
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_msi2\\HD-Player.exe\"", SW_HIDE);; //Msi 4

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=out action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE);; //Msi 5 xxx

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=in action=block program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=out action=block program=\"%ProgramData%\\Bluestacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=in action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gaga
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=out action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gag
                                std::this_thread::sleep_for(std::chrono::seconds(fakelag));

                                notificationSystem.Notification("Notification", "Fake Lag Removed!", main_color);
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                                WinExec("netsh advfirewall firewall delete rul=all program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gag
                                sleepfuck4 = -1;
                                Sleep(2);
                                sleepfuck4 = false;
                                sleepfucked4 = false;
                            }



                        }



                        ImGui::SliderInt("Fake Lag", &fakelag, 1, 10);
                        static int m = 0;

                        if (ImGui::Checkbox("Enable Fake Lag", &enableFakeLag, "Key Bind To Activate", &fakelag2)) {
                            if (enableFakeLag && !sleepfuck4) {
                                std::thread([]() {
                                    std::this_thread::sleep_for(std::chrono::seconds(fakelag));
                                    sleepfuck4 = false;
                                    }).detach();
                            }
                        }

                        if (GetAsyncKeyState(fakelag2) & 0x1) {
                            enableFakeLag = !enableFakeLag;
                            if (enableFakeLag && !sleepfuck4) {
                                std::thread([]() {
                                    std::this_thread::sleep_for(std::chrono::seconds(fakelag));
                                    sleepfuck4 = false;
                                    }).detach();
                            }
                        }
                        if (ImGui::IsItemHovered())
                        {
                            ImGui::BeginTooltip();
                            ImGui::Text("Apply in Match");
                            ImGui::EndTooltip();
                        }


                        /*camera left*/
                        if (cameraleft = ImGui::Checkbox("Camera Left", &var::cameraleft, "Apply In Game | Fast Inject", &camrakey))
                        {
                            if (var::cameraleft)
                            {
                                std::thread taskThread([]()
                                    {
                                        std::thread(camrax).detach();

                                    });
                                taskThread.detach();
                            }
                            else
                            {
                                std::thread taskThread([]()
                                    {
                                        std::thread(camrax).detach();

                                    });
                                taskThread.detach();
                            }
                        }

                       

                        //if (LANDING = ImGui::Checkbox("Fast landing", &var::LANDING, "Fast Inject ON & OFF", &key7))

                        //{
                        //    if (var::LANDING)
                        //    {
                        //        std::thread taskThread([]()
                        //            {
                        //                FAST.Samwil("land", 0x0L, 0x00007fffffffffff, "", "", "land");


                        //            });
                        //        taskThread.detach();
                        //    }
                        //    else
                        //    {
                        //        FAST.Samwil("land", 0x0L, 0x00007fffffffffff, "", "", "land");



                        //    }

                        //}

                        //if (GetAsyncKeyState(key7) & 0x1)
                        //{
                        //    std::thread taskThread([]()
                        //        {
                        //            FAST.Samwil("land", 0x0L, 0x00007fffffffffff, "", "", "land");



                        //        });
                        //    taskThread.detach();

                        //}



                        //static bool fastlandhackState = false;

                        //if (GetAsyncKeyState(key6) & 0x1)
                        //{
                        //    if (fastlandhackState)
                        //    {
                        //        std::thread(fastlandingoff).detach();
                        //    }
                        //    else
                        //    {
                        //        std::thread(fastlanding).detach();
                        //    }
                        //    fastlandhackState = !fastlandhackState; // Durumu de?i?tir
                        //}


                     

                        ImGui::EndChild();
                       
                       

                    }
                     

                    if (iTabs == 3) {

                        ImGui::SetCursorPos(ImVec2(55, 120));
                        ImGui::BeginChild("General", ImVec2(600, 330), false);

                        if (ModeStream = ImGui::Checkbox("Streamer Mode", &var::ModeStream, " "))
                        {
                            if (ModeStream)
                            {

                                if (var::ModeStream)
                                {
                                    notificationSystem.Notification(" ", "Streamer Mode Activated", main_color);
                                    SetWindowDisplayAffinity(GetActiveWindow(), WDA_EXCLUDEFROMCAPTURE);
                                    ITaskbarList* pTaskList = NULL;
                                    HRESULT initRet = CoInitialize(NULL);
                                    HRESULT createRet = CoCreateInstance(CLSID_TaskbarList,
                                        NULL,
                                        CLSCTX_INPROC_SERVER,
                                        IID_ITaskbarList,
                                        (LPVOID*)&pTaskList);

                                    if (createRet == S_OK)
                                    {

                                        pTaskList->DeleteTab(GetActiveWindow());

                                        pTaskList->Release();
                                    }

                                    CoUninitialize();
                                }
                                else
                                {
                                    notificationSystem.Notification(" ", "Streamer Mode Removed", main_color);
                                    SetWindowDisplayAffinity(GetActiveWindow(), WDA_NONE);
                                    ITaskbarList* pTaskList = NULL;
                                    HRESULT initRet = CoInitialize(NULL);
                                    HRESULT createRet = CoCreateInstance(CLSID_TaskbarList,
                                        NULL,
                                        CLSCTX_INPROC_SERVER,
                                        IID_ITaskbarList,
                                        (LPVOID*)&pTaskList);

                                    if (createRet == S_OK)
                                    {
                                        pTaskList->AddTab(GetActiveWindow());

                                        pTaskList->Release();
                                    }

                                    CoUninitialize();
                                }


                            }


                        }

                        internet = ImGui::Checkbox("Stop Internet", &rafa::internet, " ");
                      



                        if (internet) {
                            if (rafa::internet) {
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_msi2\\HD-Player.exe\"", SW_HIDE);; //Msi 4

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=out action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE);; //Msi 5 xxx

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=in action=block program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=out action=block program=\"%ProgramData%\\Bluestacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5

                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=in action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gaga
                                WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=out action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gaga

                                notificationSystem.Notification("Notification", "Desactivado Internet!", main_color);




                            }
                            else {

                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                                WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gag


                                notificationSystem.Notification("Notification", "Activado Internet!", main_color);


                            }
                        }
                        ImGui::ColorEdit3("Particles Color", (float*)&main_color);


                        ImGui::Separator();
                        ImGui::Spacing();
                        ImGui::TextColored(main_color, "ENJOY YOUR GAME ");

                        ImGui::EndChild();


                    }
                    if (iTabs == 4) {
                        ImGui::SetCursorPos(ImVec2(55, 120));
                        ImGui::BeginChild("General", ImVec2(600, 330), false);
                       
                       
                        ImGui::TextColored(main_color, "IROXY User Information");
                        ImGui::Separator();
                        ImGui::Spacing();
                        ImGui::Spacing();
                       /* ImGui::Text("Username : %s", KeyAuthApp.response.username.c_str());*/
                        ImGui::Separator();
                        ImGui::Spacing();
                        ImGui::Spacing();

                        // Display IP Address
                      /*  ImGui::Text("IP Address : %s", KeyAuthApp.response.c_str());*/
                        ImGui::Separator();
                        ImGui::Spacing();
                        ImGui::Spacing();

                        // Display Registration Date
                        
                        // Display Application Version
                      /*  ImGui::Text("Version : %s", KeyAuthApp.response.version.c_str());*/
                        ImGui::Separator();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::TextColored(main_color, "ENJOY YOUR GAME ");
                        ImGui::EndChild();

                    }
                   



                    }
                    else
                    {
                        draw->AddRectFilled(p, p + ImVec2(750, 550), background_color, 2.f, ImDrawFlags_RoundCornersTop);
                        draw->AddRectFilled(p, p + ImVec2(750, 550), background_color, 2.f, ImDrawFlags_RoundCornersLeft);
                        {

                        if (!loader_animation)
                            loader_animation = GetTickCount();
                        if (GetTickCount() > loader_animation + (1 * 15))
                        {

                            if (text_animation_hide)
                            {

                                if (text_animation < 0.80f)
                                    text_animation += 0.04f / ImGui::GetIO().Framerate * 60.f;
                                if (text_animation >= 0.80f)
                                    text_animation_hide = false;
                            }

                            else
                            {
                                if (text_animation > 0.00f)
                                    text_animation -= 0.04f / ImGui::GetIO().Framerate * 60.f;
                                if (text_animation <= 0.00f)
                                    text_animation_hide = true;

                            }
                            loader_animation = 0;
                        }
                        ImGuiWindow* window = ImGui::GetCurrentWindow();
                        const int vtx_idx_1 = ImGui::GetWindowDrawList()->VtxBuffer.Size;
                        ImGui::GetWindowDrawList()->AddRect(ImVec2(0, 0), ImVec2(menu_size.x, menu_size.y), ImGui::GetColorU32(ImStyle::backgroundcolar), ImStyle::rounding, ImDrawFlags_None, 2.f);
                        ImGui::ShadeVertsLinearColorGradientKeepAlpha(ImGui::GetWindowDrawList(), vtx_idx_1, ImGui::GetWindowDrawList()->VtxBuffer.Size, ImVec2(0, 0), ImVec2(menu_size.x / 1, menu_size.y / 1), ImGui::GetColorU32(ImStyle::general_color12), ImColor(ImStyle::general_color12));
                        if (ImGui::CloseButton(window->GetID("#CLOSE"), { 560, 2 })) {
                            exit(0);
                        }
                        ImGui::PushFont(fonts::roboto);
                        ImGui::ShadowText("IROXY", ImGui::GetColorU32(ImStyle::general_color23), ImGui::GetColorU32(ImStyle::general_color12), 130.f, ImVec2((560 / 2 - (ImGui::CalcTextSize("IROXY FF").x) / 2), 32));
                        ImGui::PopFont();
                        ImGui::PushFont(fonts::roboto);
                        ImGui::ShadowText("FF", ImGui::GetColorU32(ImStyle::general_color23), ImGui::GetColorU32(ImStyle::general_color122), 130.f, ImVec2((1130 / 2 - (ImGui::CalcTextSize("IROXY FF").x) / 2), 32));
                        ImGui::PopFont();
                        ImGui::PushFont(bold_font1);
                        ImVec4 animated_color = ImVec4(ImStyle::general_color12);
                        draw->AddText(center_text(p + ImVec2(420, 150), p + ImVec2(160, -45), "IROXY FF"), ImGui::ColorConvertFloat4ToU32(animated_color), "IROXY");
                        ImGui::PopFont();
                        ImGui::PushFont(bold_font1);
                        ImVec4 animated_color1 = ImVec4(255, 255, 255, text_animation);
                        draw->AddText(center_text(p + ImVec2(740, 150), p + ImVec2(390, -45), "IROXY FF"), ImGui::ColorConvertFloat4ToU32(animated_color1), "FF");
                        ImGui::PopFont();
                        ImGui::SetCursorPos(ImVec2(240, 500));
                        /*if (ImGui::CustomButton(1, minecraft_pic, ImVec2(30, 30), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(ImStyle::general_color12))) {
                            ShellExecute(NULL, "open", "https://discord.gg/kingxiters", NULL, NULL, SW_SHOWNORMAL);
                        };*/
                       
                   /*     ImGui::SetCursorPos(ImVec2(310, 500));
                        if (ImGui::CustomButton(2, minecraft_pic3, ImVec2(30, 30), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(ImStyle::general_color12))) {
                            ShellExecute(NULL, "open", "https://discord.gg/kingxiters", NULL, NULL, SW_SHOWNORMAL);
                        };
                        */
                        /*ImGui::SetCursorPos(ImVec2(285, 500));
                        if (ImGui::CustomButton(3, minecraft_pic1, ImVec2(30, 30), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(ImStyle::general_color12))) {
                            ShellExecute(NULL, "open", "https://youtube.com/@savagexiter112?si=pMJZp4M-Yqd9CQXR", NULL, NULL, SW_SHOWNORMAL);
                        };
                       
                        ImGui::SetCursorPos(ImVec2(390, 500));
                        if (ImGui::CustomButton(4, minecraft_pic2, ImVec2(30, 30), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(ImStyle::general_color12))) {
                            ShellExecute(NULL, "open", "https://discord.gg/pnhZHsafb4", NULL, NULL, SW_SHOWNORMAL);
                        };
                      */


                            ImGui::SetCursorPos(ImVec2(150, 140));
                            ImGui::InputTextEx("Username", NULL, login, 16, ImVec2(290, 50), 0);
                            ImGui::SetCursorPos(ImVec2(150, 200));
                            ImGui::InputTextEx("Password", NULL, password, 32, ImVec2(290, 50), 0);
                            ImGui::SetCursorPos(ImVec2(150, 260));
                            ImGui::InputTextEx("License", NULL, lisence, 64, ImVec2(290, 50), 0);


                            ImGui::SetCursorPos(ImVec2(150, 320));
                            if (ImGui::Button("Login", ImVec2(290, 50)))
                            {
                                KeyAuthApp.login(login, password);
                                if (KeyAuthApp.response.success)
                                {
                                    sndPlaySound("C:\\Windows\\0704.wav", SND_ASYNC | SND_FILENAME);
                                    menu_state = 1;
                                    notificationSystem.Notification("", KeyAuthApp.response.message.c_str(), main_color);
                                }
                                else
                                {
                                    notificationSystem.Notification("",KeyAuthApp.response.message.c_str(), main_color);
                                    
                                }
                            }
                            ImGui::SetCursorPos(ImVec2(150, 380));
                            if (ImGui::Button("Register", ImVec2(290, 50)))
                            {
                                KeyAuthApp.regstr(login, password, lisence);
                                if (KeyAuthApp.response.success)
                                {
                                    sndPlaySound("C:\\Windows\\0704.wav", SND_ASYNC | SND_FILENAME);
                                    notificationSystem.Notification("", KeyAuthApp.response.message.c_str(), main_color);
                                    menu_state = 1;
                                }
                                else
                                {
                                    notificationSystem.Notification("", KeyAuthApp.response.message.c_str(), main_color);
                                }

                            }

                        }//ImGui::EndChild();
                    }
                    Trinage_background();
                   // Trinage_background1();
                    //Trinage_background2();
                    notificationSystem.DrawNotification();
                    
            }
                move_window();
                ImGui::End();
                RenderBlur(hwnd);
        }

            ImGui::Render();
            const float clear_color_with_alpha[4] = { 0 };
            g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
            g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, clear_color_with_alpha);
            ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

            g_pSwapChain->Present(1, 0);
    }

        ImGui_ImplDX11_Shutdown();
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();

        CleanupDeviceD3D();
        ::DestroyWindow(hwnd);
        ::UnregisterClassW(wc.lpszClassName, wc.hInstance);

        return 0;
}
