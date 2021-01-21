#ifndef _FONT_H_
#define _FONT_H_

typedef const uint8_t *(*fnt_lookup_fp)(char c);

typedef struct
{
    uint8_t width;
    uint8_t height;
    fnt_lookup_fp lookup;
}font_t;

#endif
