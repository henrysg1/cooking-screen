// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: CookingApp_Project

#include "../ui.h"

void ui_BrowseScreen_screen_init(void)
{
    ui_BrowseScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_BrowseScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Keyboard4 = lv_keyboard_create(ui_BrowseScreen);
    lv_obj_set_width(ui_Keyboard4, 450);
    lv_obj_set_height(ui_Keyboard4, 180);
    lv_obj_set_x(ui_Keyboard4, 1);
    lv_obj_set_y(ui_Keyboard4, 136);
    lv_obj_set_align(ui_Keyboard4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Keyboard4, LV_OBJ_FLAG_HIDDEN);     /// Flags

    ui_Container2 = lv_obj_create(ui_BrowseScreen);
    lv_obj_remove_style_all(ui_Container2);
    lv_obj_set_width(ui_Container2, 800);
    lv_obj_set_height(ui_Container2, 50);
    lv_obj_set_x(ui_Container2, 0);
    lv_obj_set_y(ui_Container2, -215);
    lv_obj_set_align(ui_Container2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Container2, lv_color_hex(0xB8B8B8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Container2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_BrowseScreen);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, -280);
    lv_obj_set_y(ui_Label8, -150);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "All recipes");
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile6 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile6, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_curry100_png, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile6, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile6, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile6, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile6, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile6, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile6, 100);
    lv_obj_set_height(ui_FavouriteTile6, 100);
    lv_obj_set_x(ui_FavouriteTile6, -302);
    lv_obj_set_y(ui_FavouriteTile6, -60);
    lv_obj_set_align(ui_FavouriteTile6, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile6, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile6, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile7 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile7, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_burger100_png, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile7, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile7, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile7, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile7, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile7, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile7, 100);
    lv_obj_set_height(ui_FavouriteTile7, 100);
    lv_obj_set_x(ui_FavouriteTile7, -152);
    lv_obj_set_y(ui_FavouriteTile7, -60);
    lv_obj_set_align(ui_FavouriteTile7, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile7, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile7, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile8 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile8, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_beans100_png, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile8, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile8, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile8, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile8, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile8, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile8, 100);
    lv_obj_set_height(ui_FavouriteTile8, 100);
    lv_obj_set_x(ui_FavouriteTile8, 0);
    lv_obj_set_y(ui_FavouriteTile8, -60);
    lv_obj_set_align(ui_FavouriteTile8, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile8, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile8, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile9 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile9, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_bol100_png, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile9, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile9, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile9, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile9, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile9, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile9, 100);
    lv_obj_set_height(ui_FavouriteTile9, 100);
    lv_obj_set_x(ui_FavouriteTile9, 152);
    lv_obj_set_y(ui_FavouriteTile9, -60);
    lv_obj_set_align(ui_FavouriteTile9, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile9, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile9, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile9, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile10 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile10, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_ban100_png, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile10, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile10, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile10, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile10, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile10, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile10, 100);
    lv_obj_set_height(ui_FavouriteTile10, 100);
    lv_obj_set_x(ui_FavouriteTile10, 302);
    lv_obj_set_y(ui_FavouriteTile10, -60);
    lv_obj_set_align(ui_FavouriteTile10, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile10, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile10, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile10, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTitle6 = lv_label_create(ui_BrowseScreen);
    lv_obj_set_width(ui_FavouriteTitle6, 110);
    lv_obj_set_height(ui_FavouriteTitle6, 64);
    lv_obj_set_x(ui_FavouriteTitle6, -300);
    lv_obj_set_y(ui_FavouriteTitle6, 35);
    lv_obj_set_align(ui_FavouriteTitle6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_FavouriteTitle6, "Yummy curry");
    lv_obj_set_style_text_align(ui_FavouriteTitle6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTitle7 = lv_label_create(ui_BrowseScreen);
    lv_obj_set_width(ui_FavouriteTitle7, 110);
    lv_obj_set_height(ui_FavouriteTitle7, 64);
    lv_obj_set_x(ui_FavouriteTitle7, -150);
    lv_obj_set_y(ui_FavouriteTitle7, 35);
    lv_obj_set_align(ui_FavouriteTitle7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_FavouriteTitle7, "Burger");
    lv_obj_set_style_text_align(ui_FavouriteTitle7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTitle8 = lv_label_create(ui_BrowseScreen);
    lv_obj_set_width(ui_FavouriteTitle8, 110);
    lv_obj_set_height(ui_FavouriteTitle8, 64);
    lv_obj_set_x(ui_FavouriteTitle8, 0);
    lv_obj_set_y(ui_FavouriteTitle8, 35);
    lv_obj_set_align(ui_FavouriteTitle8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_FavouriteTitle8, "Beans on Toast");
    lv_obj_set_style_text_align(ui_FavouriteTitle8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTitle9 = lv_label_create(ui_BrowseScreen);
    lv_obj_set_width(ui_FavouriteTitle9, 110);
    lv_obj_set_height(ui_FavouriteTitle9, 64);
    lv_obj_set_x(ui_FavouriteTitle9, 150);
    lv_obj_set_y(ui_FavouriteTitle9, 35);
    lv_obj_set_align(ui_FavouriteTitle9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_FavouriteTitle9, "Spaghetti Bolognese");
    lv_obj_set_style_text_align(ui_FavouriteTitle9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTitle10 = lv_label_create(ui_BrowseScreen);
    lv_obj_set_width(ui_FavouriteTitle10, 110);
    lv_obj_set_height(ui_FavouriteTitle10, 64);
    lv_obj_set_x(ui_FavouriteTitle10, 300);
    lv_obj_set_y(ui_FavouriteTitle10, 35);
    lv_obj_set_align(ui_FavouriteTitle10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_FavouriteTitle10, "Bahn Mi");
    lv_obj_set_style_text_align(ui_FavouriteTitle10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile11 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile11, LV_IMGBTN_STATE_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile11, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile11, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile11, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile11, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile11, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile11, 100);
    lv_obj_set_height(ui_FavouriteTile11, 100);
    lv_obj_set_x(ui_FavouriteTile11, -302);
    lv_obj_set_y(ui_FavouriteTile11, 140);
    lv_obj_set_align(ui_FavouriteTile11, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile11, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile11, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile11, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile12 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile12, LV_IMGBTN_STATE_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile12, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile12, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile12, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile12, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile12, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile12, 100);
    lv_obj_set_height(ui_FavouriteTile12, 100);
    lv_obj_set_x(ui_FavouriteTile12, -152);
    lv_obj_set_y(ui_FavouriteTile12, 140);
    lv_obj_set_align(ui_FavouriteTile12, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile12, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile12, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile12, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile12, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile13 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile13, LV_IMGBTN_STATE_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile13, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile13, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile13, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile13, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile13, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile13, 100);
    lv_obj_set_height(ui_FavouriteTile13, 100);
    lv_obj_set_x(ui_FavouriteTile13, 0);
    lv_obj_set_y(ui_FavouriteTile13, 140);
    lv_obj_set_align(ui_FavouriteTile13, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile13, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile13, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile13, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile13, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile14 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile14, LV_IMGBTN_STATE_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile14, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile14, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile14, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile14, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile14, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile14, 100);
    lv_obj_set_height(ui_FavouriteTile14, 100);
    lv_obj_set_x(ui_FavouriteTile14, 152);
    lv_obj_set_y(ui_FavouriteTile14, 140);
    lv_obj_set_align(ui_FavouriteTile14, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile14, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile14, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile14, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile14, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FavouriteTile15 = lv_imgbtn_create(ui_BrowseScreen);
    lv_imgbtn_set_src(ui_FavouriteTile15, LV_IMGBTN_STATE_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile15, LV_IMGBTN_STATE_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile15, LV_IMGBTN_STATE_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile15, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile15, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui__temporary_image, NULL);
    lv_imgbtn_set_src(ui_FavouriteTile15, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui__temporary_image, NULL);
    lv_obj_set_width(ui_FavouriteTile15, 100);
    lv_obj_set_height(ui_FavouriteTile15, 100);
    lv_obj_set_x(ui_FavouriteTile15, 302);
    lv_obj_set_y(ui_FavouriteTile15, 140);
    lv_obj_set_align(ui_FavouriteTile15, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_FavouriteTile15, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_FavouriteTile15, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_FavouriteTile15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_FavouriteTile15, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_FavouriteTile15, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BrowseTabButton1 = lv_btn_create(ui_BrowseScreen);
    lv_obj_set_width(ui_BrowseTabButton1, 140);
    lv_obj_set_height(ui_BrowseTabButton1, 50);
    lv_obj_set_x(ui_BrowseTabButton1, -190);
    lv_obj_set_y(ui_BrowseTabButton1, -215);
    lv_obj_set_align(ui_BrowseTabButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BrowseTabButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BrowseTabButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BrowseTabButton1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BrowseTabButton1, lv_color_hex(0x59C1FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BrowseTabButton1, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_BrowseTabButton1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_BrowseTabButton1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BrowseLabel1 = lv_label_create(ui_BrowseTabButton1);
    lv_obj_set_width(ui_BrowseLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BrowseLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BrowseLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BrowseLabel1, "Browse");
    lv_obj_set_style_text_color(ui_BrowseLabel1, lv_color_hex(0x0088FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BrowseLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BrowseLabel1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SelectedLabel1 = lv_obj_create(ui_BrowseTabButton1);
    lv_obj_remove_style_all(ui_SelectedLabel1);
    lv_obj_set_width(ui_SelectedLabel1, 140);
    lv_obj_set_height(ui_SelectedLabel1, 4);
    lv_obj_set_x(ui_SelectedLabel1, 0);
    lv_obj_set_y(ui_SelectedLabel1, 23);
    lv_obj_set_align(ui_SelectedLabel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_SelectedLabel1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SelectedLabel1, lv_color_hex(0x0088FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SelectedLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeTabButton1 = lv_btn_create(ui_BrowseScreen);
    lv_obj_set_width(ui_HomeTabButton1, 140);
    lv_obj_set_height(ui_HomeTabButton1, 50);
    lv_obj_set_x(ui_HomeTabButton1, -330);
    lv_obj_set_y(ui_HomeTabButton1, -215);
    lv_obj_set_align(ui_HomeTabButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_HomeTabButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_HomeTabButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_HomeTabButton1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_HomeTabButton1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeTabButton1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_HomeTabButton1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_HomeTabButton1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeLabel1 = lv_label_create(ui_HomeTabButton1);
    lv_obj_set_width(ui_HomeLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HomeLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_HomeLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_HomeLabel1, "Home");
    lv_obj_set_style_text_color(ui_HomeLabel1, lv_color_hex(0x110700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HomeLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HomeLabel1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ShoppingTabButton2 = lv_btn_create(ui_BrowseScreen);
    lv_obj_set_width(ui_ShoppingTabButton2, 140);
    lv_obj_set_height(ui_ShoppingTabButton2, 50);
    lv_obj_set_x(ui_ShoppingTabButton2, -50);
    lv_obj_set_y(ui_ShoppingTabButton2, -215);
    lv_obj_set_align(ui_ShoppingTabButton2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ShoppingTabButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ShoppingTabButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ShoppingTabButton2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ShoppingTabButton2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ShoppingTabButton2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_ShoppingTabButton2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_ShoppingTabButton2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ShoppingLabel6 = lv_label_create(ui_ShoppingTabButton2);
    lv_obj_set_width(ui_ShoppingLabel6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ShoppingLabel6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ShoppingLabel6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ShoppingLabel6, "Shopping List");
    lv_obj_set_style_text_color(ui_ShoppingLabel6, lv_color_hex(0x110700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ShoppingLabel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ShoppingLabel6, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SettingsButton5 = lv_btn_create(ui_BrowseScreen);
    lv_obj_set_width(ui_SettingsButton5, 50);
    lv_obj_set_height(ui_SettingsButton5, 50);
    lv_obj_set_x(ui_SettingsButton5, 370);
    lv_obj_set_y(ui_SettingsButton5, -215);
    lv_obj_set_align(ui_SettingsButton5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SettingsButton5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SettingsButton5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_SettingsButton5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SettingsButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_SettingsButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_SettingsButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SettingsImage5 = lv_img_create(ui_SettingsButton5);
    lv_img_set_src(ui_SettingsImage5, &ui_img_settings_png);
    lv_obj_set_width(ui_SettingsImage5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SettingsImage5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SettingsImage5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SettingsImage5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SettingsImage5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_SettingsImage5, 180);

    ui_WifiButton4 = lv_btn_create(ui_BrowseScreen);
    lv_obj_set_width(ui_WifiButton4, 50);
    lv_obj_set_height(ui_WifiButton4, 50);
    lv_obj_set_x(ui_WifiButton4, 310);
    lv_obj_set_y(ui_WifiButton4, -215);
    lv_obj_set_align(ui_WifiButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WifiButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WifiButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_WifiButton4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WifiButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_WifiButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_WifiButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiImage4 = lv_img_create(ui_WifiButton4);
    lv_img_set_src(ui_WifiImage4, &ui_img_wifi_png);
    lv_obj_set_width(ui_WifiImage4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiImage4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_WifiImage4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WifiImage4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_WifiImage4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_FavouriteTile6, ui_event_FavouriteTile6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_HomeTabButton1, ui_event_HomeTabButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ShoppingTabButton2, ui_event_ShoppingTabButton2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SettingsButton5, ui_event_SettingsButton5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_WifiButton4, ui_event_WifiButton4, LV_EVENT_ALL, NULL);

}
