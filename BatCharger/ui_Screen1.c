// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel5 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel5, 220);
    lv_obj_set_height(ui_Panel5, 393);
    lv_obj_set_x(ui_Panel5, 0);
    lv_obj_set_y(ui_Panel5, -42);
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Panel5, &ui_img_25_comics_wallpaper_1080x1920px_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_Panel5, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_batVoltage = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_batVoltage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_batVoltage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_batVoltage, 92);
    lv_obj_set_y(ui_batVoltage, 44);
    lv_label_set_text(ui_batVoltage, "3245");
    lv_obj_set_style_text_font(ui_batVoltage, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_chargingStatus = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_chargingStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_chargingStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_chargingStatus, 3);
    lv_obj_set_y(ui_chargingStatus, 165);
    lv_label_set_text(ui_chargingStatus, "4.2345");
    lv_obj_set_style_text_font(ui_chargingStatus, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Keyboard1 = lv_keyboard_create(ui_Screen1);
    lv_keyboard_set_mode(ui_Keyboard1, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_Keyboard1, 220);
    lv_obj_set_height(ui_Keyboard1, 146);
    lv_obj_set_x(ui_Keyboard1, 0);
    lv_obj_set_y(ui_Keyboard1, 166);
    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);

    lv_obj_set_style_radius(ui_Keyboard1, 1, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Keyboard1, lv_color_hex(0x495960), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Keyboard1, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Keyboard1, lv_color_hex(0x000000), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Keyboard1, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Keyboard1, &lv_font_montserrat_20, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_TextArea1 = lv_textarea_create(ui_Screen1);
    lv_obj_set_width(ui_TextArea1, 125);
    lv_obj_set_height(ui_TextArea1, LV_SIZE_CONTENT);    /// 20
    lv_obj_set_x(ui_TextArea1, -47);
    lv_obj_set_y(ui_TextArea1, 66);
    lv_obj_set_align(ui_TextArea1, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_TextArea1, 4);
    lv_textarea_set_placeholder_text(ui_TextArea1, "mA");
    lv_textarea_set_one_line(ui_TextArea1, true);
    lv_obj_set_style_text_font(ui_TextArea1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_TextArea1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TextArea1, lv_color_hex(0x082831), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TextArea1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_TextArea1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -43);
    lv_obj_set_y(ui_Label2, 26);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Charging  Current");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x6CB6F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button2, 87);
    lv_obj_set_height(ui_Button2, 33);
    lv_obj_set_x(ui_Button2, 63);
    lv_obj_set_y(ui_Button2, 66);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xDEAE08), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "SET");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -18);
    lv_obj_set_y(ui_Label4, 40);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Range 0~5056mA ,step: 64mA");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFFD631), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -56);
    lv_obj_set_y(ui_Label5, -46);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "Target Voltage");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x6CB6F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextArea2 = lv_textarea_create(ui_Screen1);
    lv_obj_set_width(ui_TextArea2, 147);
    lv_obj_set_height(ui_TextArea2, LV_SIZE_CONTENT);    /// 30
    lv_obj_set_x(ui_TextArea2, -36);
    lv_obj_set_y(ui_TextArea2, -3);
    lv_obj_set_align(ui_TextArea2, LV_ALIGN_CENTER);
    if("1234567890" == "") lv_textarea_set_accepted_chars(ui_TextArea2, NULL);
    else lv_textarea_set_accepted_chars(ui_TextArea2, "1234567890");
    lv_textarea_set_max_length(ui_TextArea2, 4);
    lv_textarea_set_placeholder_text(ui_TextArea2, "mV");
    lv_textarea_set_one_line(ui_TextArea2, true);
    lv_obj_set_style_text_font(ui_TextArea2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_TextArea2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TextArea2, lv_color_hex(0x082831), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TextArea2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_TextArea2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_Label6 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, -3);
    lv_obj_set_y(ui_Label6, -30);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "Range:3840 ~ 4608mV ,step: 16 mV");
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0xFFD631), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button1, 66);
    lv_obj_set_height(ui_Button1, 33);
    lv_obj_set_x(ui_Button1, 74);
    lv_obj_set_y(ui_Button1, -4);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xDEAE08), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "SET");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_bat_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 80
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 52
    lv_obj_set_x(ui_Image1, -70);
    lv_obj_set_y(ui_Image1, -189);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 240);

    ui_Label8 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, -63);
    lv_obj_set_y(ui_Label8, -86);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "CRG STATUS:");
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, -14);
    lv_obj_set_y(ui_Label10, -139);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "");

    ui_Label11 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, 24);
    lv_obj_set_y(ui_Label11, 121);
    lv_label_set_text(ui_Label11, "IN mV:");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_usbLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_usbLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_usbLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_usbLBL, 24);
    lv_obj_set_y(ui_usbLBL, 96);
    lv_label_set_text(ui_usbLBL, "DISCONNECTED");
    lv_obj_set_style_text_color(ui_usbLBL, lv_color_hex(0xD4CBCB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_usbLBL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, 43);
    lv_obj_set_y(ui_Label13, -224);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "BATman");
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0xEDDADA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &ui_font_BAT, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, 20);
    lv_obj_set_y(ui_Label14, -207);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "batERRY");
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x869EA5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &ui_font_BAT2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_timeLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_timeLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_timeLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_timeLBL, 65);
    lv_obj_set_y(ui_timeLBL, -86);
    lv_obj_set_align(ui_timeLBL, LV_ALIGN_CENTER);
    lv_label_set_text(ui_timeLBL, "00:00:00");
    lv_obj_set_style_text_color(ui_timeLBL, lv_color_hex(0x107C9A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_timeLBL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_timeLBL, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel3, 24);
    lv_obj_set_height(ui_Panel3, 24);
    lv_obj_set_x(ui_Panel3, -100);
    lv_obj_set_y(ui_Panel3, -136);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Panel3, &ui_img_1389822213, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_Panel3, lv_color_hex(0x9696A0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel4 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel4, 22);
    lv_obj_set_height(ui_Panel4, 21);
    lv_obj_set_x(ui_Panel4, -100);
    lv_obj_set_y(ui_Panel4, -110);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Panel4, &ui_img_954528419, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_inVoltageLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_inVoltageLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_inVoltageLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_inVoltageLBL, 81);
    lv_obj_set_y(ui_inVoltageLBL, 121);

    ui_curLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_curLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_curLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_curLBL, -93);
    lv_obj_set_y(ui_curLBL, -227);
    lv_obj_set_align(ui_curLBL, LV_ALIGN_CENTER);
    lv_label_set_text(ui_curLBL, "SYS: ");
    lv_obj_set_style_text_color(ui_curLBL, lv_color_hex(0xDEAE08), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_curLBL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_curLBL, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, -51);
    lv_obj_set_y(ui_Label17, -155);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "FINE TUNE CHARGER");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x38697E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel6 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel6, 100);
    lv_obj_set_height(ui_Panel6, 1);
    lv_obj_set_x(ui_Panel6, 56);
    lv_obj_set_y(ui_Panel6, -56);
    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel6, lv_color_hex(0xDEAE08), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_trgVOL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_trgVOL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_trgVOL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_trgVOL, -6);
    lv_obj_set_y(ui_trgVOL, 186);
    lv_obj_set_align(ui_trgVOL, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_trgVOL, "4000");
    lv_obj_set_style_text_color(ui_trgVOL, lv_color_hex(0x6CB6F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_trgVOL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_chCur = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_chCur, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_chCur, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_chCur, -7);
    lv_obj_set_y(ui_chCur, 258);
    lv_obj_set_align(ui_chCur, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_chCur, "320");
    lv_obj_set_style_text_color(ui_chCur, lv_color_hex(0x6CB6F3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_chCur, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sysVol = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_sysVol, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sysVol, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_sysVol, -68);
    lv_obj_set_y(ui_sysVol, -227);
    lv_obj_set_align(ui_sysVol, LV_ALIGN_CENTER);
    lv_label_set_text(ui_sysVol, "2345");
    lv_obj_set_style_text_color(ui_sysVol, lv_color_hex(0xDEAE08), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sysVol, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sysVol, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_curLBL2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_curLBL2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_curLBL2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_curLBL2, -43);
    lv_obj_set_y(ui_curLBL2, -227);
    lv_obj_set_align(ui_curLBL2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_curLBL2, "mV");
    lv_obj_set_style_text_color(ui_curLBL2, lv_color_hex(0xDEAE08), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_curLBL2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_curLBL2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label18, 72);
    lv_obj_set_y(ui_Label18, -186);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "mV");
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch2 = lv_switch_create(ui_Screen1);
    lv_obj_set_width(ui_Switch2, 59);
    lv_obj_set_height(ui_Switch2, 27);
    lv_obj_set_x(ui_Switch2, 73);
    lv_obj_set_y(ui_Switch2, -118);
    lv_obj_set_align(ui_Switch2, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch2, LV_STATE_CHECKED);       /// States


    ui_onoff = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_onoff, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_onoff, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_onoff, 86);
    lv_obj_set_y(ui_onoff, -143);
    lv_obj_set_align(ui_onoff, LV_ALIGN_CENTER);
    lv_label_set_text(ui_onoff, "ON");
    lv_obj_set_style_text_color(ui_onoff, lv_color_hex(0x4A5761), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_onoff, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_onoff, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_keyboard_set_textarea(ui_Keyboard1, ui_TextArea1);
    lv_obj_add_event_cb(ui_TextArea1, ui_event_TextArea1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextArea2, ui_event_TextArea2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch2, ui_event_Switch2, LV_EVENT_ALL, NULL);

}
