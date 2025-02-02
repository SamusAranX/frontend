/**
 * @file fbdev.h
 *
 */

#ifndef FBDEV_H
#define FBDEV_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#ifndef LV_DRV_NO_CONF
#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lv_drv_conf.h"
#else

#include "../../lv_drv_conf.h"

#endif
#endif

#if USE_FBDEV || USE_BSD_FBDEV

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else

#include "../../lvgl.h"

#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void fbdev_init(const char *fbdev_path);

void fbdev_exit(void);

void fbdev_flush(lv_disp_drv_t *drv, const lv_area_t *area, lv_color_t *color_p);

void fbdev_get_sizes(uint32_t *width, uint32_t *height, uint32_t *dpi);

/**
 * Set the X and Y offset in the variable framebuffer info.
 * @param xoffset horizontal offset
 * @param yoffset vertical offset
 */
void fbdev_set_offset(uint32_t xoffset, uint32_t yoffset);


/**
 * Check for hdmi state and adapt according to the current device
 * @param disp driver pointer to display driver which active screen should be get.
 */

extern void fbdev_hdmi_rotate(lv_disp_drv_t *driver);

/**********************
 *      MACROS
 **********************/

#endif  /*USE_FBDEV*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*FBDEV_H*/
