// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Panel5;
extern lv_obj_t * ui_batVoltage;
extern lv_obj_t * ui_chargingStatus;
extern lv_obj_t * ui_Keyboard1;
void ui_event_TextArea1(lv_event_t * e);
extern lv_obj_t * ui_TextArea1;
extern lv_obj_t * ui_Label2;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label5;
void ui_event_TextArea2(lv_event_t * e);
extern lv_obj_t * ui_TextArea2;
extern lv_obj_t * ui_Label6;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui_Label10;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_usbLBL;
extern lv_obj_t * ui_Label13;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_timeLBL;
extern lv_obj_t * ui_Panel3;
extern lv_obj_t * ui_Panel4;
extern lv_obj_t * ui_inVoltageLBL;
extern lv_obj_t * ui_curLBL;
extern lv_obj_t * ui_Label17;
extern lv_obj_t * ui_Panel6;
extern lv_obj_t * ui_trgVOL;
extern lv_obj_t * ui_chCur;
extern lv_obj_t * ui_sysVol;
extern lv_obj_t * ui_curLBL2;
extern lv_obj_t * ui_Label18;
void ui_event_Switch2(lv_event_t * e);
extern lv_obj_t * ui_Switch2;
extern lv_obj_t * ui_onoff;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_25_comics_wallpaper_1080x1920px_png);    // assets\25_Comics_Wallpaper_1080x1920px.png
LV_IMG_DECLARE(ui_img_bat_png);    // assets\bat.png
LV_IMG_DECLARE(ui_img_1389822213);    // assets\Pictogrammers-Material-Usb.32.png
LV_IMG_DECLARE(ui_img_954528419);    // assets\Google-Noto-Emoji-Travel-Places-42689-high-voltage.24.png

LV_FONT_DECLARE(ui_font_BAT);
LV_FONT_DECLARE(ui_font_BAT2);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
