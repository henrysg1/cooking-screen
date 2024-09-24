// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: CookingApp_Project

#include "../ui.h"

void ui_DescriptionScreen_screen_init(void)
{
    ui_DescriptionScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_DescriptionScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Keyboard6 = lv_keyboard_create(ui_DescriptionScreen);
    lv_obj_set_width(ui_Keyboard6, 450);
    lv_obj_set_height(ui_Keyboard6, 180);
    lv_obj_set_x(ui_Keyboard6, 1);
    lv_obj_set_y(ui_Keyboard6, 136);
    lv_obj_set_align(ui_Keyboard6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Keyboard6, LV_OBJ_FLAG_HIDDEN);     /// Flags

    ui_Container4 = lv_obj_create(ui_DescriptionScreen);
    lv_obj_remove_style_all(ui_Container4);
    lv_obj_set_width(ui_Container4, 800);
    lv_obj_set_height(ui_Container4, 50);
    lv_obj_set_x(ui_Container4, 0);
    lv_obj_set_y(ui_Container4, -215);
    lv_obj_set_align(ui_Container4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Container4, lv_color_hex(0xB8B8B8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Container4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RecipeTitle = lv_label_create(ui_DescriptionScreen);
    lv_obj_set_width(ui_RecipeTitle, 350);
    lv_obj_set_height(ui_RecipeTitle, 40);
    lv_obj_set_x(ui_RecipeTitle, -180);
    lv_obj_set_y(ui_RecipeTitle, -150);
    lv_obj_set_align(ui_RecipeTitle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RecipeTitle, "Yummy curry");
    lv_obj_set_style_text_font(ui_RecipeTitle, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DescriptionText = lv_label_create(ui_DescriptionScreen);
    lv_obj_set_width(ui_DescriptionText, 350);
    lv_obj_set_height(ui_DescriptionText, 300);
    lv_obj_set_x(ui_DescriptionText, -180);
    lv_obj_set_y(ui_DescriptionText, 30);
    lv_obj_set_align(ui_DescriptionText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DescriptionText,
                      "Aloo dum is a potato and pea curry which is possibly the most common vegetable curry in India. It's almost like chips with everything here, aloo dum with everything there. It#s either easy to make or hard, depending on what you want to do with it. If I was describing it to somebody I'd just say boil potatoes, fry them with garam masala, add some tomato, chilli, turmeric and salt and it's done; then, if you like, throw in frozen peas just before the end.\n\nThis meal, if served as 8 portions, provides 223kcal, 4g protein, 28g carbohydrate (of which 4g sugars), 10g fat (of which 1.5g saturates), 4g fibre and 0.4g salt per portion.\n");
    lv_obj_set_style_text_font(ui_DescriptionText, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Divider3 = lv_obj_create(ui_DescriptionScreen);
    lv_obj_remove_style_all(ui_Divider3);
    lv_obj_set_width(ui_Divider3, 1);
    lv_obj_set_height(ui_Divider3, 400);
    lv_obj_set_x(ui_Divider3, 20);
    lv_obj_set_y(ui_Divider3, 25);
    lv_obj_set_align(ui_Divider3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Divider3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Divider3, lv_color_hex(0xA0A0A0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Divider3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AddToShoppingListButton3 = lv_btn_create(ui_DescriptionScreen);
    lv_obj_set_width(ui_AddToShoppingListButton3, 200);
    lv_obj_set_height(ui_AddToShoppingListButton3, LV_SIZE_CONTENT);    /// 40
    lv_obj_set_x(ui_AddToShoppingListButton3, 220);
    lv_obj_set_y(ui_AddToShoppingListButton3, 65);
    lv_obj_set_align(ui_AddToShoppingListButton3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AddToShoppingListButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_AddToShoppingListButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_AddToShoppingListButton3, lv_color_hex(0x00C118), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AddToShoppingListButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_AddToShoppingListButton3);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "+ Add to shopping list");

    ui_RecipeImage = lv_img_create(ui_DescriptionScreen);
    lv_img_set_src(ui_RecipeImage, &ui_img_curry200_png);
    lv_obj_set_width(ui_RecipeImage, 200);
    lv_obj_set_height(ui_RecipeImage, 200);
    lv_obj_set_x(ui_RecipeImage, 220);
    lv_obj_set_y(ui_RecipeImage, -60);
    lv_obj_set_align(ui_RecipeImage, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_RecipeImage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_RecipeImage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RecipeStartButton = lv_btn_create(ui_DescriptionScreen);
    lv_obj_set_width(ui_RecipeStartButton, 200);
    lv_obj_set_height(ui_RecipeStartButton, LV_SIZE_CONTENT);    /// 40
    lv_obj_set_x(ui_RecipeStartButton, 220);
    lv_obj_set_y(ui_RecipeStartButton, 175);
    lv_obj_set_align(ui_RecipeStartButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_RecipeStartButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_RecipeStartButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_RecipeStartButton, lv_color_hex(0x00C118), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RecipeStartButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_RecipeStartButton);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "START");
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AddToShoppingListButton2 = lv_btn_create(ui_DescriptionScreen);
    lv_obj_set_width(ui_AddToShoppingListButton2, 200);
    lv_obj_set_height(ui_AddToShoppingListButton2, LV_SIZE_CONTENT);    /// 40
    lv_obj_set_x(ui_AddToShoppingListButton2, 220);
    lv_obj_set_y(ui_AddToShoppingListButton2, 115);
    lv_obj_set_align(ui_AddToShoppingListButton2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AddToShoppingListButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_AddToShoppingListButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_AddToShoppingListButton2, lv_color_hex(0x00C118), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_AddToShoppingListButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_AddToShoppingListButton2);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "+ Add to favourites");

    ui_ShoppingTabButton3 = lv_btn_create(ui_DescriptionScreen);
    lv_obj_set_width(ui_ShoppingTabButton3, 140);
    lv_obj_set_height(ui_ShoppingTabButton3, 50);
    lv_obj_set_x(ui_ShoppingTabButton3, -50);
    lv_obj_set_y(ui_ShoppingTabButton3, -215);
    lv_obj_set_align(ui_ShoppingTabButton3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ShoppingTabButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ShoppingTabButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ShoppingTabButton3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ShoppingTabButton3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ShoppingTabButton3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_ShoppingTabButton3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_ShoppingTabButton3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ShoppingLabel2 = lv_label_create(ui_ShoppingTabButton3);
    lv_obj_set_width(ui_ShoppingLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ShoppingLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ShoppingLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ShoppingLabel2, "Shopping List");
    lv_obj_set_style_text_color(ui_ShoppingLabel2, lv_color_hex(0x110700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ShoppingLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ShoppingLabel2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BrowseTabButton4 = lv_btn_create(ui_DescriptionScreen);
    lv_obj_set_width(ui_BrowseTabButton4, 140);
    lv_obj_set_height(ui_BrowseTabButton4, 50);
    lv_obj_set_x(ui_BrowseTabButton4, -190);
    lv_obj_set_y(ui_BrowseTabButton4, -215);
    lv_obj_set_align(ui_BrowseTabButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BrowseTabButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BrowseTabButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BrowseTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BrowseTabButton4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BrowseTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_BrowseTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_BrowseTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BrowseLabel2 = lv_label_create(ui_BrowseTabButton4);
    lv_obj_set_width(ui_BrowseLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BrowseLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BrowseLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BrowseLabel2, "Browse");
    lv_obj_set_style_text_color(ui_BrowseLabel2, lv_color_hex(0x110700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BrowseLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BrowseLabel2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeTabButton4 = lv_btn_create(ui_DescriptionScreen);
    lv_obj_set_width(ui_HomeTabButton4, 140);
    lv_obj_set_height(ui_HomeTabButton4, 50);
    lv_obj_set_x(ui_HomeTabButton4, -330);
    lv_obj_set_y(ui_HomeTabButton4, -215);
    lv_obj_set_align(ui_HomeTabButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_HomeTabButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_HomeTabButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_HomeTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_HomeTabButton4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_HomeTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_HomeTabButton4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeLabel4 = lv_label_create(ui_HomeTabButton4);
    lv_obj_set_width(ui_HomeLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HomeLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_HomeLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_HomeLabel4, "Home");
    lv_obj_set_style_text_color(ui_HomeLabel4, lv_color_hex(0x110700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HomeLabel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HomeLabel4, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_RecipeStartButton, ui_event_RecipeStartButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ShoppingTabButton3, ui_event_ShoppingTabButton3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BrowseTabButton4, ui_event_BrowseTabButton4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_HomeTabButton4, ui_event_HomeTabButton4, LV_EVENT_ALL, NULL);

}
