// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: CookingApp_Project

#include "../ui.h"

void ui_RecipeScreen_screen_init(void)
{
    ui_RecipeScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_RecipeScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Keyboard7 = lv_keyboard_create(ui_RecipeScreen);
    lv_obj_set_width(ui_Keyboard7, 450);
    lv_obj_set_height(ui_Keyboard7, 180);
    lv_obj_set_x(ui_Keyboard7, 1);
    lv_obj_set_y(ui_Keyboard7, 136);
    lv_obj_set_align(ui_Keyboard7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Keyboard7, LV_OBJ_FLAG_HIDDEN);     /// Flags

    ui_Container5 = lv_obj_create(ui_RecipeScreen);
    lv_obj_remove_style_all(ui_Container5);
    lv_obj_set_width(ui_Container5, 800);
    lv_obj_set_height(ui_Container5, 50);
    lv_obj_set_x(ui_Container5, 0);
    lv_obj_set_y(ui_Container5, -215);
    lv_obj_set_align(ui_Container5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Container5, lv_color_hex(0xB8B8B8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Container5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_RecipeScreen);
    lv_obj_set_width(ui_Label15, 600);
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 280
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15,
                      "Boil the potatoes in a pan of salted water for eight minutes until just tender, then drain well. ");
    lv_obj_set_style_text_align(ui_Label15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NextStepButton = lv_btn_create(ui_RecipeScreen);
    lv_obj_set_width(ui_NextStepButton, 60);
    lv_obj_set_height(ui_NextStepButton, 60);
    lv_obj_set_x(ui_NextStepButton, 360);
    lv_obj_set_y(ui_NextStepButton, 0);
    lv_obj_set_align(ui_NextStepButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_NextStepButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_NextStepButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_NextStepButton, lv_color_hex(0x00C118), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NextStepButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_NextStepButton);
    lv_img_set_src(ui_Image2, &ui_img_arrow_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_angle(ui_Image2, 900);

    ui_PreviousStepButton = lv_btn_create(ui_RecipeScreen);
    lv_obj_set_width(ui_PreviousStepButton, 60);
    lv_obj_set_height(ui_PreviousStepButton, 60);
    lv_obj_set_x(ui_PreviousStepButton, -360);
    lv_obj_set_y(ui_PreviousStepButton, 0);
    lv_obj_set_align(ui_PreviousStepButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PreviousStepButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PreviousStepButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PreviousStepButton, lv_color_hex(0x00C118), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PreviousStepButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_PreviousStepButton);
    lv_img_set_src(ui_Image1, &ui_img_arrow_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_angle(ui_Image1, 2700);

    ui_ShoppingTabButton4 = lv_btn_create(ui_RecipeScreen);
    lv_obj_set_width(ui_ShoppingTabButton4, 140);
    lv_obj_set_height(ui_ShoppingTabButton4, 50);
    lv_obj_set_x(ui_ShoppingTabButton4, -50);
    lv_obj_set_y(ui_ShoppingTabButton4, -215);
    lv_obj_set_align(ui_ShoppingTabButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ShoppingTabButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ShoppingTabButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ShoppingTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ShoppingTabButton4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ShoppingTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_ShoppingTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_ShoppingTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ShoppingLabel3 = lv_label_create(ui_ShoppingTabButton4);
    lv_obj_set_width(ui_ShoppingLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ShoppingLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ShoppingLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ShoppingLabel3, "Shopping List");
    lv_obj_set_style_text_color(ui_ShoppingLabel3, lv_color_hex(0x110700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ShoppingLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ShoppingLabel3, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BrowseTabButton5 = lv_btn_create(ui_RecipeScreen);
    lv_obj_set_width(ui_BrowseTabButton5, 140);
    lv_obj_set_height(ui_BrowseTabButton5, 50);
    lv_obj_set_x(ui_BrowseTabButton5, -190);
    lv_obj_set_y(ui_BrowseTabButton5, -215);
    lv_obj_set_align(ui_BrowseTabButton5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BrowseTabButton5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BrowseTabButton5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BrowseTabButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BrowseTabButton5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BrowseTabButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_BrowseTabButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_BrowseTabButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BrowseLabel3 = lv_label_create(ui_BrowseTabButton5);
    lv_obj_set_width(ui_BrowseLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BrowseLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BrowseLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BrowseLabel3, "Browse");
    lv_obj_set_style_text_color(ui_BrowseLabel3, lv_color_hex(0x110700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BrowseLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BrowseLabel3, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeTabButton5 = lv_btn_create(ui_RecipeScreen);
    lv_obj_set_width(ui_HomeTabButton5, 140);
    lv_obj_set_height(ui_HomeTabButton5, 50);
    lv_obj_set_x(ui_HomeTabButton5, -330);
    lv_obj_set_y(ui_HomeTabButton5, -215);
    lv_obj_set_align(ui_HomeTabButton5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_HomeTabButton5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_HomeTabButton5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_HomeTabButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_HomeTabButton5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeTabButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_HomeTabButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_HomeTabButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeLabel5 = lv_label_create(ui_HomeTabButton5);
    lv_obj_set_width(ui_HomeLabel5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HomeLabel5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_HomeLabel5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_HomeLabel5, "Home");
    lv_obj_set_style_text_color(ui_HomeLabel5, lv_color_hex(0x110700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HomeLabel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HomeLabel5, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ShoppingTabButton4, ui_event_ShoppingTabButton4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BrowseTabButton5, ui_event_BrowseTabButton5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_HomeTabButton5, ui_event_HomeTabButton5, LV_EVENT_ALL, NULL);

}
