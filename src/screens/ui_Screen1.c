// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.3
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_TextArea2 = lv_textarea_create(ui_Screen1);
lv_obj_set_width( ui_TextArea2, 150);
lv_obj_set_height( ui_TextArea2, 70);
lv_obj_set_align( ui_TextArea2, LV_ALIGN_CENTER );
lv_textarea_set_text(ui_TextArea2,"HELLO WORLD");
lv_textarea_set_placeholder_text(ui_TextArea2,"Placeholder...");

}
