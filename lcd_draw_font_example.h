#ifndef _FONT_H
#define _FONT_H

#ifdef _FONT_C
  #define EXTERN
#else
  #define EXTERN extern
#endif

#include <stdint.h>

typedef struct
{
  uint8_t width;
  uint8_t height;
  const uint8_t *bitmap;
  uint16_t bitmapSize;
}font_symbol_t;

#endif
