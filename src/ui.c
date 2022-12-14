// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_CpuBar;
lv_obj_t * ui_GpuBar;
lv_obj_t * ui_CpuTempLabel;
lv_obj_t * ui_GpuTempLabel;
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Label3;
lv_obj_t * ui_CpuGhzLabel;
lv_obj_t * ui_CpuGhzBar;
lv_obj_t * ui_Label5;
lv_obj_t * ui_GpuGhzBar;
lv_obj_t * ui_GpuGhzLabel;

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -130);
    lv_obj_set_y(ui_Label1, -66);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "CPU");
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -129);
    lv_obj_set_y(ui_Label2, 9);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "GPU");
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CpuBar = lv_bar_create(ui_Screen1);
    lv_obj_set_width(ui_CpuBar, 236);
    lv_obj_set_height(ui_CpuBar, 10);
    lv_obj_set_x(ui_CpuBar, 28);
    lv_obj_set_y(ui_CpuBar, -65);
    lv_obj_set_align(ui_CpuBar, LV_ALIGN_CENTER);

    ui_GpuBar = lv_bar_create(ui_Screen1);
    lv_obj_set_width(ui_GpuBar, 236);
    lv_obj_set_height(ui_GpuBar, 10);
    lv_obj_set_x(ui_GpuBar, 28);
    lv_obj_set_y(ui_GpuBar, 9);
    lv_obj_set_align(ui_GpuBar, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_GpuBar, lv_color_hex(0xFFD8D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GpuBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_GpuBar, lv_color_hex(0xFB0B0B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GpuBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_CpuTempLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_CpuTempLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CpuTempLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CpuTempLabel, 8);
    lv_obj_set_y(ui_CpuTempLabel, -26);
    lv_obj_set_align(ui_CpuTempLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_CpuTempLabel, "100C/100F");
    lv_obj_set_style_text_font(ui_CpuTempLabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GpuTempLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_GpuTempLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GpuTempLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GpuTempLabel, 8);
    lv_obj_set_y(ui_GpuTempLabel, 45);
    lv_obj_set_align(ui_GpuTempLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_GpuTempLabel, "100C/100F");
    lv_obj_set_style_text_font(ui_GpuTempLabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label3 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -130);
    lv_obj_set_y(ui_Label3, -66);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "CPU");
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CpuGhzLabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_CpuGhzLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CpuGhzLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CpuGhzLabel, 8);
    lv_obj_set_y(ui_CpuGhzLabel, -26);
    lv_obj_set_align(ui_CpuGhzLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_CpuGhzLabel, "1.0GHz");
    lv_obj_set_style_text_font(ui_CpuGhzLabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CpuGhzBar = lv_bar_create(ui_Screen2);
    lv_obj_set_width(ui_CpuGhzBar, 236);
    lv_obj_set_height(ui_CpuGhzBar, 10);
    lv_obj_set_x(ui_CpuGhzBar, 28);
    lv_obj_set_y(ui_CpuGhzBar, -65);
    lv_obj_set_align(ui_CpuGhzBar, LV_ALIGN_CENTER);

    ui_Label5 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -129);
    lv_obj_set_y(ui_Label5, 9);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "GPU");
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_GpuGhzBar = lv_bar_create(ui_Screen2);
    lv_obj_set_width(ui_GpuGhzBar, 236);
    lv_obj_set_height(ui_GpuGhzBar, 10);
    lv_obj_set_x(ui_GpuGhzBar, 28);
    lv_obj_set_y(ui_GpuGhzBar, 9);
    lv_obj_set_align(ui_GpuGhzBar, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_GpuGhzBar, lv_color_hex(0xFFD8D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GpuGhzBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_GpuGhzBar, lv_color_hex(0xFB0B0B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_GpuGhzBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_GpuGhzLabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_GpuGhzLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GpuGhzLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GpuGhzLabel, 8);
    lv_obj_set_y(ui_GpuGhzLabel, 45);
    lv_obj_set_align(ui_GpuGhzLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_GpuGhzLabel, "1.0GHz");
    lv_obj_set_style_text_font(ui_GpuGhzLabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
