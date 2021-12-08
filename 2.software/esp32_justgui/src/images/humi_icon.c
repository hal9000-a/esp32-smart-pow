#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_HUMI_ICON
#define LV_ATTRIBUTE_IMG_HUMI_ICON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_HUMI_ICON uint8_t humi_icon_map[] = {
  0x20, 0x1f, 0x1f, 0xff, 	/*Color of index 0*/
  0x5c, 0xa0, 0x04, 0xff, 	/*Color of index 1*/
  0x99, 0x9a, 0x99, 0xff, 	/*Color of index 2*/
  0x42, 0x64, 0x14, 0xff, 	/*Color of index 3*/
  0xc0, 0xde, 0x90, 0xff, 	/*Color of index 4*/
  0x5e, 0x5e, 0x5e, 0xff, 	/*Color of index 5*/
  0x32, 0x49, 0x12, 0xff, 	/*Color of index 6*/
  0x6d, 0xb2, 0x05, 0xff, 	/*Color of index 7*/
  0xd8, 0xd8, 0xd8, 0xff, 	/*Color of index 8*/
  0x97, 0xcb, 0x4d, 0xff, 	/*Color of index 9*/
  0xb6, 0xb5, 0xb6, 0xff, 	/*Color of index 10*/
  0xe6, 0xea, 0xde, 0xff, 	/*Color of index 11*/
  0x4d, 0x83, 0x05, 0xff, 	/*Color of index 12*/
  0x7a, 0x7a, 0x7a, 0xff, 	/*Color of index 13*/
  0x48, 0x48, 0x48, 0xff, 	/*Color of index 14*/
  0xfc, 0xfe, 0xfc, 0xff, 	/*Color of index 15*/

  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xfb, 0x00, 0xa2, 0x00, 0xbf, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xfd, 0x0a, 0xff, 0xf5, 0x0d, 0xff, 0xd0, 0xef, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x8f, 0x20, 0xef, 0xff, 0xfe, 0x0b, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xfb, 0x00, 0x50, 0xe8, 0x00, 0x8f, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xfe, 0x0d, 0xf5, 0x00, 0x0d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x20, 0xef, 0xfb, 0x00, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x00, 0x8f, 0xfb, 0x00, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf5, 0x0d, 0xff, 0xfd, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xef, 0xff, 0xff, 
  0xff, 0xff, 0xa0, 0xef, 0xff, 0xb0, 0x0b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x02, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0xaf, 0xff, 0xd0, 0x39, 0x79, 0x4f, 0xff, 0xff, 0xff, 0xfa, 0x00, 0xff, 0xff, 
  0xff, 0xfa, 0x0e, 0xff, 0xff, 0x00, 0x17, 0x77, 0x77, 0x4f, 0xff, 0xff, 0xff, 0x50, 0xaf, 0xff, 
  0xff, 0xfe, 0x0a, 0xff, 0xfa, 0x06, 0x77, 0x77, 0x77, 0x79, 0xbf, 0xff, 0xff, 0xa0, 0xef, 0xff, 
  0xff, 0xb0, 0x0f, 0xff, 0xf5, 0x0c, 0x77, 0x77, 0x77, 0x77, 0x79, 0xbf, 0xff, 0xf0, 0x0b, 0xff, 
  0xff, 0xa0, 0xdf, 0xff, 0xf0, 0x07, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x99, 0x93, 0x0a, 0xff, 
  0xff, 0x20, 0x2f, 0xff, 0xf0, 0x07, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x73, 0x02, 0xff, 
  0xff, 0x20, 0xdf, 0xff, 0xf0, 0x01, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x73, 0x02, 0xff, 
  0xff, 0x80, 0xef, 0xff, 0xfe, 0x0c, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x76, 0x0a, 0xff, 
  0xff, 0xfe, 0x0a, 0xff, 0xfd, 0x03, 0x17, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x70, 0x0f, 0xff, 
  0xff, 0xfa, 0x0e, 0xbf, 0xfa, 0x00, 0x11, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x30, 0x5f, 0xff, 
  0xff, 0xff, 0x50, 0xe8, 0xff, 0xe0, 0x31, 0x11, 0x77, 0x77, 0x77, 0x77, 0x71, 0x00, 0x8f, 0xff, 
  0xff, 0xff, 0xf5, 0x00, 0xe2, 0x20, 0x03, 0x11, 0x11, 0x77, 0x77, 0x77, 0x10, 0x0d, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00, 0x61, 0x11, 0x11, 0x11, 0x1c, 0x00, 0xef, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xa2, 0xd2, 0xd0, 0x00, 0x6c, 0xcc, 0xc3, 0x60, 0x05, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x50, 0x00, 0x00, 0x00, 0x0e, 0xaf, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x25, 0xee, 0xed, 0xaf, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const lv_img_dsc_t humi_icon = {
  .header.always_zero = 0,
  .header.w = 32,
  .header.h = 32,
  .data_size = 576,
  .header.cf = LV_IMG_CF_INDEXED_4BIT,
  .data = humi_icon_map,
};

