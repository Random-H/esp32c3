// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_main_screen_init(void)
{
ui_main = lv_obj_create(NULL);
lv_obj_clear_flag( ui_main, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label1 = lv_label_create(ui_main);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label1, -4 );
lv_obj_set_y( ui_Label1, -8 );
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"10");
lv_obj_set_style_text_font(ui_Label1, &ui_font_rh64, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label2 = lv_label_create(ui_main);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label2, 91 );
lv_obj_set_y( ui_Label2, -9 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"09");
lv_obj_set_style_text_font(ui_Label2, &ui_font_rh64, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label6 = lv_label_create(ui_main);
lv_obj_set_width( ui_Label6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label6, 41 );
lv_obj_set_y( ui_Label6, -10 );
lv_obj_set_align( ui_Label6, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label6,":");
lv_obj_set_style_text_font(ui_Label6, &ui_font_rh64, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Image1 = lv_img_create(ui_main);
lv_img_set_src(ui_Image1, &ui_img_1849664379);
lv_obj_set_width( ui_Image1, LV_SIZE_CONTENT);  /// 64
lv_obj_set_height( ui_Image1, LV_SIZE_CONTENT);   /// 64
lv_obj_set_x( ui_Image1, -98 );
lv_obj_set_y( ui_Image1, -36 );
lv_obj_set_align( ui_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image2 = lv_img_create(ui_main);
lv_img_set_src(ui_Image2, &ui_img_933897233);
lv_obj_set_width( ui_Image2, LV_SIZE_CONTENT);  /// 64
lv_obj_set_height( ui_Image2, LV_SIZE_CONTENT);   /// 64
lv_obj_set_x( ui_Image2, -97 );
lv_obj_set_y( ui_Image2, -33 );
lv_obj_set_align( ui_Image2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image2, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image3 = lv_img_create(ui_main);
lv_img_set_src(ui_Image3, &ui_img_1809350367);
lv_obj_set_width( ui_Image3, LV_SIZE_CONTENT);  /// 64
lv_obj_set_height( ui_Image3, LV_SIZE_CONTENT);   /// 64
lv_obj_set_x( ui_Image3, -95 );
lv_obj_set_y( ui_Image3, -38 );
lv_obj_set_align( ui_Image3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image3, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image4 = lv_img_create(ui_main);
lv_img_set_src(ui_Image4, &ui_img_614732645);
lv_obj_set_width( ui_Image4, LV_SIZE_CONTENT);  /// 79
lv_obj_set_height( ui_Image4, LV_SIZE_CONTENT);   /// 64
lv_obj_set_x( ui_Image4, -99 );
lv_obj_set_y( ui_Image4, -39 );
lv_obj_set_align( ui_Image4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image4, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label3 = lv_label_create(ui_main);
lv_obj_set_width( ui_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label3, -9 );
lv_obj_set_y( ui_Label3, -65 );
lv_obj_set_align( ui_Label3, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label3,"八");
lv_obj_set_style_text_font(ui_Label3, &ui_font_rh16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label4 = lv_label_create(ui_main);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label4, 22 );
lv_obj_set_y( ui_Label4, -65 );
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"月");
lv_obj_set_style_text_font(ui_Label4, &ui_font_rh16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label5 = lv_label_create(ui_main);
lv_obj_set_width( ui_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label5, 67 );
lv_obj_set_y( ui_Label5, -65 );
lv_obj_set_align( ui_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label5,"十一");
lv_obj_set_style_text_font(ui_Label5, &ui_font_rh16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label7 = lv_label_create(ui_main);
lv_obj_set_width( ui_Label7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label7, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label7, 110 );
lv_obj_set_y( ui_Label7, -65 );
lv_obj_set_align( ui_Label7, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label7,"日");
lv_obj_set_style_text_font(ui_Label7, &ui_font_rh16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button1 = lv_btn_create(ui_main);
lv_obj_set_width( ui_Button1, 108);
lv_obj_set_height( ui_Button1, 53);
lv_obj_set_x( ui_Button1, -6 );
lv_obj_set_y( ui_Button1, 66 );
lv_obj_set_align( ui_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x68B1F5), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label8 = lv_label_create(ui_Button1);
lv_obj_set_width( ui_Label8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label8,"MENU");
lv_obj_set_style_text_font(ui_Label8, &ui_font_rh32, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);

}