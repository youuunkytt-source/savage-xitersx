#pragma once

#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui_internal.h"
inline ImColor main_color(32, 3, 252);//PARTICEL

inline ImColor main_color1(3, 3, 3, 150);//

inline ImColor main_color3(255, 255, 255);

inline ImColor main_color12(54, 53, 53, 0);

inline ImColor background_color(3, 3, 3, 150); // BACK GOUNED

inline ImColor second_color(32, 3, 252, 250);//  BUTUON COLOR



inline ImColor text_color[2] = { ImColor(255, 255, 255, 255), ImColor(255, 255, 255, 255) };///ALERT COLOR

inline ImVec2 menu_size = ImVec2(593, 495);

inline ImVec2 _sizemenu = ImVec2(593, 350);

inline ImVec2 _sizemenu1 = ImVec2(593, 380);

inline ImVec2 _sizemenu2 = ImVec2(593, 380);

inline float anim_speed = 8.f;

inline ImVec2 frame_size = ImVec2(480, 50);

inline ImVec2 frame_sizee = ImVec2(480, 50);


namespace ImStyle {
    inline ImVec4 general_color12 = ImColor(32, 3, 252);//

    inline ImVec4 general_color23 = ImColor(32, 3, 252, 0);

    inline ImVec4 general_color21 = ImColor(32, 3, 252, 80);

    inline ImVec4 general_color122 = ImColor(255, 255, 255);

    inline ImVec4 text_active = ImColor(255, 255, 255, 255);

    inline ImVec4 general_color13 = ImColor(255, 255, 255);

    inline ImVec4 general_color14 = ImColor(255, 255, 255);

    inline ImVec4 general_color22 = ImColor(12, 12, 12, 89);

    inline ImVec4 backgroundcolar = ImColor(255, 245, 0);

    inline float rounding = 15.f;
}

inline ImVec2 center_text(ImVec2 min, ImVec2 max, const char* text)
{
    return min + (max - min) / 2 - ImGui::CalcTextSize(text) / 2;
}

inline ImFont* second_font;
inline ImFont* second_font1;
inline ImFont* bold_font;
inline ImFont* bold_font1;
inline ImFont* bold_font2;
inline ImFont* semibold_font;
inline ImFont* semibold_font1;
inline ImFont* icon_font;
inline ImGuiWindow* main_window;
inline char search[64];

inline struct Notification
{
    std::string message, information;
    ImColor color;
    ImRect bb;
    ImVec2 offset = ImVec2(400, 0);
    ImVec2 target_offset = ImVec2(400, 0);
    float timer = 30;
}notif_state;

class NotificationSystem
{
public:

    inline void Notification(std::string message, std::string information, ImColor color)
    {
      /* notif_state.offset.x = 1.0f;*/

        notif_state.offset = ImVec2(400, 0);
        notif_state.target_offset = ImVec2(400, 0);
        static ImVec2 tab_offset(0.f, menu_size.x);
        notif_state.timer = 0;
        notif_state.color = color;
        notif_state.message = message;
        notif_state.information = information;
    }

    inline void DrawNotification()
    {
        notif_state.timer += ImGui::GetIO().DeltaTime * 10.f;
        notif_state.target_offset = notif_state.timer > 30.f ? ImVec2(400.f, 0.f) : ImVec2(0.f, 0.f);

        notif_state.offset = ImLerp(notif_state.offset, notif_state.target_offset, ImGui::GetIO().DeltaTime * 10.f);

        notif_state.bb = ImRect(ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(360, 70) + ImVec2(notif_state.offset.x, 0.f), ImGui::GetWindowPos() + ImGui::GetWindowSize() - ImVec2(600, 100));

        ImGui::GetForegroundDrawList()->AddRectFilled(notif_state.bb.Min + ImVec2(notif_state.offset.x, 0.f), notif_state.bb.Max + ImVec2(notif_state.offset.x, 0.f), ImColor(0, 0, 0, 0), 0);

        ImGui::GetForegroundDrawList()->AddText(notif_state.bb.Min + ImVec2(12.5f, 6.f), main_color, notif_state.message.c_str());

        ImGui::PushFont(second_font);
        ImGui::GetForegroundDrawList()->AddText(ImVec2(notif_state.bb.Min.x + 12.5f, notif_state.bb.Max.y - 9.5f - ImGui::CalcTextSize(notif_state.information.c_str()).y), text_color[1], notif_state.information.c_str());
        ImGui::PopFont();
    }
};

inline NotificationSystem notificationSystem;
/// ??? ???? ????
namespace c
{

    namespace picker
    {
        inline ImVec4 background = ImColor(27, 29, 32, 255);
        inline ImVec4 outline_background = ImColor(30, 32, 36, 255);
        inline float rounding = 2;
    }

    inline ImVec4 particle_color = ImColor(0, 0, 166);

    inline ImVec4 particle_color1 = ImColor(241, 98, 21);

    inline ImVec4 trasparo = ImColor(0, 0, 255, 0.5);

    inline ImVec4 clscolor = ImColor(255, 215, 0);

    inline float rounding = 2.f;
}
namespace tabs {

    inline ImVec4 background_active = ImColor(70, 70, 70, 43);//coolor de lo menus
    inline ImVec4 background_inactive = ImColor(70, 70, 70, 1);//color de menu
    inline ImVec4 text_active = ImColor(255, 255, 255, 255);
    inline ImVec4 text_hov = ImColor(150, 150, 150, 255);
    inline ImVec4 text = ImColor(255, 255, 255);

}
