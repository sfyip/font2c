#ifndef _COUR24_H_
#define _COUR24_H_

#include <stdint.h>

#define COUR24_WIDTH        14
#define COUR24_HEIGHT       24

const uint8_t *cour24_lookup_font(char c);
uint8_t cour24_get_width(void);
uint8_t cour24_get_height(void);

#endif
