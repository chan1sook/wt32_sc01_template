#ifndef _WT32SC01_UI_H
#define _WT32SC01_UI_H

#ifdef __cplusplus
extern "C"
{
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

    extern lv_obj_t *ui_Screen1;
    void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
