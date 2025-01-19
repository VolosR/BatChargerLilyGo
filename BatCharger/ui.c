// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Panel5;
lv_obj_t * ui_batVoltage;
lv_obj_t * ui_chargingStatus;
lv_obj_t * ui_Keyboard1;
void ui_event_TextArea1(lv_event_t * e);
lv_obj_t * ui_TextArea1;
lv_obj_t * ui_Label2;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label5;
void ui_event_TextArea2(lv_event_t * e);
lv_obj_t * ui_TextArea2;
lv_obj_t * ui_Label6;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Label11;
lv_obj_t * ui_usbLBL;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Label14;
lv_obj_t * ui_timeLBL;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_inVoltageLBL;
lv_obj_t * ui_curLBL;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Panel6;
lv_obj_t * ui_trgVOL;
lv_obj_t * ui_chCur;
lv_obj_t * ui_sysVol;
lv_obj_t * ui_curLBL2;
lv_obj_t * ui_Label18;
void ui_event_Switch2(lv_event_t * e);
lv_obj_t * ui_Switch2;
lv_obj_t * ui_onoff;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_101228468[1] = {&ui_img_1389822213};
const lv_img_dsc_t * ui_imgset_1893061423[1] = {&ui_img_954528419};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_TextArea1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextArea1);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        setCURRENT(e);
    }
}
void ui_event_TextArea2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_TextArea2);
    }
}
void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        setVOLTAGE(e);
    }
}
void ui_event_Switch2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        crgOnOF(e);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
