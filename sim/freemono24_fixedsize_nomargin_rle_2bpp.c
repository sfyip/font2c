/*
    <Generate from 2bpp_fixedsize_nomargin_rle.tpl>
    generate font bitmap
    font: FreeMono
    size: 24
    calc_margin: False
    encoding method: rle

    width: 14
    height: 24
*/

#include "font.h"

#define FREEMONO24_WIDTH     14
#define FREEMONO24_HEIGHT    24

static const uint8_t freemono24_bmp[] = {
    // FreeMono24_0
    0xFF, 0xFF, 0xF0, 0x11, 0x11, 0x91, 0x11, 0x11, 0x17, 0x11, 0x41, 0x16, 0x11, 0x51, 0x61, 0x61, 0x15, 0x16, 0x11, 0x41,
    0x16, 0x11, 0x41, 0x16, 0x11, 0x41, 0x16, 0x11, 0x41, 0x16, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11, 0x52, 0x51, 0x71, 0x13,
    0x11, 0x81, 0x21, 0x1A, 0x2F, 0xFF, 0x30,
    // FreeMono24_1
    0xFF, 0xFF, 0xF1, 0x11, 0xB1, 0x11, 0xA1, 0x11, 0x19, 0x11, 0x11, 0x19, 0x12, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11,
    0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x19, 0x81, 0xFF, 0xFD,
    // FreeMono24_2
    0xFF, 0xFF, 0xF0, 0x12, 0x18, 0x11, 0x11, 0x11, 0x17, 0x15, 0x11, 0x51, 0x16, 0x11, 0xC1, 0x1C, 0x1C, 0x2B, 0x2B, 0x2B,
    0x2B, 0x2B, 0x2B, 0x11, 0xB1, 0x16, 0x11, 0x49, 0x1F, 0xFF, 0xD0,
    // FreeMono24_3
    0xFF, 0xFF, 0xF0, 0x12, 0x11, 0x71, 0x11, 0x21, 0x11, 0x61, 0x61, 0xD1, 0x1C, 0x11, 0xC1, 0x91, 0x21, 0xA1, 0x11, 0x1D,
    0x11, 0xD1, 0x1D, 0x1D, 0x1C, 0x11, 0x42, 0x51, 0x16, 0x12, 0x21, 0x1A, 0x2F, 0xFF, 0x30,
    // FreeMono24_4
    0xFF, 0xFF, 0xF3, 0x2B, 0x21, 0xB1, 0x11, 0xA1, 0x11, 0x19, 0x11, 0x21, 0x91, 0x31, 0x81, 0x13, 0x18, 0x14, 0x17, 0x11,
    0x41, 0x61, 0x15, 0x16, 0x18, 0x1B, 0x1D, 0x1D, 0x1A, 0x14, 0x1F, 0xFF, 0xD0,
    // FreeMono24_5
    0xFF, 0xFF, 0xD1, 0x16, 0x61, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0x13, 0x81, 0x23, 0x11, 0x71, 0x51, 0xD1, 0x1D, 0x1D, 0x1D,
    0x1C, 0x11, 0x41, 0x11, 0x41, 0x17, 0x22, 0x11, 0xA2, 0xFF, 0xFF, 0x20,
    // FreeMono24_6
    0xFF, 0xFF, 0xF3, 0x12, 0x18, 0x11, 0x12, 0x17, 0x2B, 0x11, 0xC1, 0xC1, 0x1C, 0x11, 0x11, 0x21, 0x71, 0x11, 0x12, 0x11,
    0x63, 0x42, 0x51, 0x16, 0x15, 0x11, 0x61, 0x51, 0x16, 0x16, 0x16, 0x16, 0x11, 0x41, 0x17, 0x11, 0x21, 0x1A, 0x2F, 0xFF,
    0x20,
    // FreeMono24_7
    0xFF, 0xFF, 0xC1, 0x16, 0x11, 0x42, 0x61, 0x1C, 0x1C, 0x11, 0xC1, 0x1C, 0x1C, 0x11, 0xC1, 0x1C, 0x1D, 0x1C, 0x2C, 0x1D,
    0x1C, 0x11, 0xFF, 0xFF, 0xF1,
    // FreeMono24_8
    0xFF, 0xFF, 0xF0, 0x12, 0x19, 0x11, 0x11, 0x11, 0x16, 0x25, 0x16, 0x16, 0x11, 0x51, 0x61, 0x15, 0x11, 0x51, 0x71, 0x12,
    0x11, 0x18, 0x41, 0x81, 0x13, 0x11, 0x61, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11, 0x51, 0x14, 0x11, 0x71,
    0x12, 0x11, 0xA2, 0xFF, 0xF3,
    // FreeMono24_9
    0xFF, 0xFF, 0xF0, 0x11, 0x11, 0x91, 0x11, 0x11, 0x11, 0x71, 0x51, 0x61, 0x15, 0x11, 0x51, 0x16, 0x15, 0x11, 0x61, 0x51,
    0x15, 0x26, 0x11, 0x33, 0x74, 0x11, 0x1D, 0x1C, 0x11, 0xC1, 0x1B, 0x2B, 0x11, 0x71, 0x22, 0x1A, 0x1F, 0xFF, 0x50,
    // FreeMono24_colon
    0xFF, 0xFF, 0xFF, 0xFF, 0xC2, 0x1A, 0x13, 0xB2, 0x1F, 0xFF, 0xF7, 0x21, 0xA1, 0x3A, 0x12, 0x1C, 0x1F, 0xFF, 0xF2,
    // FreeMono24_A
    0xFF, 0xFF, 0xFC, 0x59, 0x21, 0x21, 0xA3, 0x1A, 0x12, 0x1A, 0x12, 0x11, 0x81, 0x13, 0x18, 0x14, 0x17, 0x11, 0x41, 0x16,
    0x71, 0x61, 0x61, 0x14, 0x11, 0x61, 0x14, 0x18, 0x14, 0x18, 0x11, 0x11, 0x44, 0x14, 0xFF, 0xFB,
    // FreeMono24_B
    0xFF, 0xFF, 0xFA, 0x16, 0x16, 0x21, 0x41, 0x11, 0x61, 0x62, 0x51, 0x71, 0x51, 0x71, 0x51, 0x61, 0x15, 0x15, 0x11, 0x61,
    0x42, 0x11, 0x51, 0x71, 0x14, 0x18, 0x14, 0x18, 0x14, 0x17, 0x11, 0x41, 0x61, 0x13, 0x91, 0xFF, 0xFE,
    // FreeMono24_C
    0xFF, 0xFF, 0xFE, 0x21, 0x11, 0x71, 0x11, 0x11, 0x11, 0x11, 0x14, 0x16, 0x11, 0x13, 0x11, 0x71, 0x13, 0x1C, 0x11, 0xC1,
    0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xD1, 0xD1, 0x17, 0x11, 0x41, 0x15, 0x11, 0x61, 0x22, 0x11, 0xA2, 0xFF, 0xF2,
    // FreeMono24_D
    0xFF, 0xFF, 0xFA, 0x15, 0x26, 0x12, 0x31, 0x26, 0x11, 0x51, 0x15, 0x11, 0x61, 0x14, 0x11, 0x71, 0x41, 0x17, 0x11, 0x31,
    0x17, 0x11, 0x31, 0x17, 0x11, 0x31, 0x17, 0x11, 0x31, 0x17, 0x11, 0x31, 0x17, 0x14, 0x11, 0x61, 0x14, 0x11, 0x41, 0x11,
    0x48, 0x1F, 0xFF, 0xF0,
    // FreeMono24_E
    0xFF, 0xFF, 0xFA, 0x19, 0x13, 0x21, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x31, 0x18, 0x13, 0x11, 0x81, 0x31,
    0x18, 0x13, 0x11, 0x81, 0xD1, 0x72, 0x41, 0x71, 0x14, 0x17, 0x11, 0x2B, 0x1F, 0xFF, 0xC0,
    // FreeMono24_F
    0xFF, 0xFF, 0xFA, 0x1A, 0x32, 0x17, 0x11, 0x41, 0x71, 0x14, 0x17, 0x24, 0x1D, 0x13, 0x11, 0x81, 0x31, 0x18, 0x13, 0x11,
    0x81, 0x31, 0x18, 0x1D, 0x1D, 0x1D, 0x1B, 0x7F, 0xFF, 0xF2,
    // FreeMono24_G
    0xFF, 0xFF, 0xFE, 0x11, 0x12, 0x71, 0x11, 0x11, 0x11, 0x21, 0x41, 0x71, 0x13, 0x11, 0x72, 0x31, 0xC1, 0x1C, 0x11, 0xC1,
    0x1C, 0x11, 0x41, 0x51, 0x11, 0x18, 0x11, 0x31, 0x81, 0x13, 0x27, 0x11, 0x41, 0x16, 0x11, 0x51, 0x22, 0x21, 0x92, 0xFF,
    0xF2,
    // FreeMono24_H
    0xFF, 0xFF, 0xFB, 0x12, 0x13, 0x31, 0x31, 0x12, 0x31, 0x21, 0x41, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11,
    0x51, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x13, 0x14, 0x21,
    0x4F, 0xFF, 0xC0,
    // FreeMono24_I
    0xFF, 0xFF, 0xFC, 0x17, 0x15, 0x31, 0x13, 0x91, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1,
    0x1C, 0x11, 0xC1, 0x19, 0x81, 0xFF, 0xFD,
    // FreeMono24_J
    0xFF, 0xFF, 0xFF, 0x04, 0x13, 0xA1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x61, 0x15,
    0x11, 0x51, 0x71, 0x21, 0x21, 0x93, 0xFF, 0xFF, 0x20,
    // FreeMono24_K
    0xFF, 0xFF, 0xFA, 0x14, 0x31, 0x21, 0x22, 0x12, 0x31, 0x21, 0x41, 0x51, 0x16, 0x14, 0x27, 0x13, 0x28, 0x12, 0x11, 0x91,
    0x12, 0x19, 0x21, 0x11, 0x18, 0x14, 0x11, 0x71, 0x51, 0x71, 0x51, 0x16, 0x16, 0x16, 0x16, 0x23, 0x51, 0x42, 0x1F, 0xFF,
    0xB0,
    // FreeMono24_L
    0xFF, 0xFF, 0xFB, 0x68, 0x21, 0x12, 0xA1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x16, 0x15, 0x11, 0x61,
    0x51, 0x16, 0x15, 0x11, 0x61, 0x51, 0x16, 0x12, 0x1B, 0xFF, 0xFC,
    // FreeMono24_M
    0xFF, 0xFF, 0xFA, 0x21, 0x72, 0x11, 0x12, 0x61, 0x21, 0x11, 0x21, 0x51, 0x11, 0x21, 0x11, 0x14, 0x11, 0x11, 0x21, 0x11,
    0x11, 0x31, 0x21, 0x21, 0x11, 0x11, 0x21, 0x12, 0x12, 0x11, 0x21, 0x21, 0x12, 0x12, 0x11, 0x21, 0x11, 0x13, 0x12, 0x11,
    0x31, 0x11, 0x31, 0x21, 0x13, 0x11, 0x41, 0x21, 0x19, 0x12, 0x11, 0x91, 0x21, 0x19, 0x11, 0x14, 0x41, 0x4F, 0xFF, 0xB0,
    // FreeMono24_N
    0xFF, 0xFF, 0xFA, 0x21, 0x54, 0x21, 0x21, 0x42, 0x11, 0x32, 0x16, 0x14, 0x11, 0x25, 0x14, 0x11, 0x11, 0x51, 0x41, 0x11,
    0x11, 0x41, 0x41, 0x12, 0x11, 0x31, 0x41, 0x13, 0x13, 0x14, 0x11, 0x32, 0x21, 0x41, 0x14, 0x12, 0x14, 0x11, 0x41, 0x11,
    0x14, 0x11, 0x51, 0x11, 0x41, 0x16, 0x23, 0x41, 0x41, 0x1F, 0xFF, 0xD0,
    // FreeMono24_O
    0xFF, 0xFF, 0xFE, 0x12, 0x11, 0x71, 0x11, 0x21, 0x11, 0x61, 0x62, 0x41, 0x17, 0x11, 0x21, 0x18, 0x11, 0x21, 0x19, 0x12,
    0x11, 0x91, 0x21, 0xA1, 0x21, 0x19, 0x12, 0x11, 0x91, 0x31, 0x82, 0x32, 0x71, 0x51, 0x14, 0x11, 0x16, 0x11, 0x22, 0xA2,
    0xFF, 0xF3,
    // FreeMono24_P
    0xFF, 0xFF, 0xFA, 0x16, 0x16, 0x21, 0x41, 0x11, 0x61, 0x61, 0x15, 0x17, 0x15, 0x17, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15,
    0x14, 0x21, 0x61, 0x58, 0x1D, 0x1D, 0x1D, 0x1B, 0x7F, 0xFF, 0xF2,
    // FreeMono24_Q
    0xFF, 0xFF, 0xFE, 0x12, 0x11, 0x71, 0x11, 0x21, 0x11, 0x61, 0x62, 0x41, 0x17, 0x11, 0x21, 0x18, 0x11, 0x21, 0x19, 0x12,
    0x11, 0x91, 0x21, 0xA1, 0x21, 0x19, 0x12, 0x11, 0x91, 0x31, 0x82, 0x32, 0x71, 0x51, 0x14, 0x11, 0x16, 0x11, 0x22, 0x91,
    0x11, 0xA1, 0x41, 0x21, 0x41, 0x11, 0x21, 0x3F, 0x10,
    // FreeMono24_R
    0xFF, 0xFF, 0xFA, 0x16, 0x16, 0x21, 0x41, 0x11, 0x61, 0x61, 0x15, 0x17, 0x15, 0x17, 0x15, 0x16, 0x25, 0x14, 0x12, 0x66,
    0x17, 0x14, 0x11, 0x71, 0x51, 0x16, 0x16, 0x16, 0x16, 0x11, 0x51, 0x71, 0x12, 0x51, 0x52, 0xFF, 0xFB,
    // FreeMono24_S
    0xFF, 0xFF, 0xFE, 0x12, 0x11, 0x11, 0x51, 0x11, 0x11, 0x12, 0x15, 0x11, 0x51, 0x15, 0x16, 0x11, 0x51, 0xD1, 0x1D, 0x11,
    0x11, 0xC1, 0x12, 0x1D, 0x2D, 0x14, 0x18, 0x14, 0x11, 0x71, 0x42, 0x15, 0x11, 0x41, 0x11, 0x12, 0x21, 0x93, 0xFF, 0xF2,
    // FreeMono24_T
    0xFF, 0xFF, 0xFB, 0xA1, 0x21, 0x13, 0x11, 0x32, 0x21, 0x13, 0x11, 0x31, 0x13, 0x13, 0x11, 0x41, 0x71, 0x1C, 0x11, 0xC1,
    0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x19, 0x16, 0x1F, 0xFF, 0xE0,
    // FreeMono24_U
    0xFF, 0xFF, 0xFA, 0x11, 0x12, 0x32, 0x11, 0x31, 0x17, 0x14, 0x11, 0x71, 0x41, 0x17, 0x14, 0x11, 0x71, 0x41, 0x17, 0x14,
    0x11, 0x71, 0x41, 0x17, 0x14, 0x11, 0x71, 0x41, 0x17, 0x15, 0x16, 0x25, 0x24, 0x11, 0x71, 0x12, 0x2A, 0x2F, 0xFF, 0xF2,
    // FreeMono24_V
    0xFF, 0xFF, 0xF9, 0x13, 0x14, 0x13, 0x21, 0x12, 0x42, 0x11, 0x12, 0x18, 0x11, 0x31, 0x17, 0x15, 0x16, 0x11, 0x51, 0x61,
    0x61, 0x15, 0x17, 0x14, 0x11, 0x71, 0x13, 0x18, 0x11, 0x21, 0x19, 0x12, 0x1A, 0x21, 0x1B, 0x11, 0x1B, 0x2F, 0xFF, 0xF2,
    // FreeMono24_W
    0xFF, 0xFF, 0xFA, 0x44, 0x13, 0x11, 0x22, 0x42, 0x11, 0x11, 0x11, 0x91, 0x21, 0x13, 0x11, 0x31, 0x13, 0x13, 0x21, 0x21,
    0x13, 0x13, 0x11, 0x12, 0x11, 0x31, 0x21, 0x11, 0x12, 0x11, 0x31, 0x21, 0x11, 0x12, 0x14, 0x11, 0x11, 0x21, 0x11, 0x14,
    0x11, 0x11, 0x21, 0x11, 0x14, 0x12, 0x13, 0x11, 0x14, 0x11, 0x14, 0x11, 0x14, 0x12, 0x41, 0x11, 0x51, 0x14, 0x11, 0x1F,
    0xFF, 0xD0,
    // FreeMono24_X
    0xFF, 0xFF, 0xFA, 0x12, 0x14, 0x12, 0x12, 0x12, 0x14, 0x11, 0x11, 0x41, 0x15, 0x11, 0x61, 0x42, 0x71, 0x12, 0x11, 0x92,
    0x11, 0xB2, 0x1B, 0x2B, 0x21, 0x19, 0x11, 0x22, 0x81, 0x41, 0x16, 0x11, 0x51, 0x52, 0x61, 0x13, 0x41, 0x34, 0x1F, 0xFF,
    0xB0,
    // FreeMono24_Y
    0xFF, 0xFF, 0xFA, 0x12, 0x14, 0x12, 0x12, 0x11, 0x11, 0x41, 0x11, 0x14, 0x11, 0x51, 0x16, 0x14, 0x11, 0x72, 0x31, 0x91,
    0x11, 0x11, 0xA1, 0x2B, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x19, 0x16, 0x1F, 0xFF, 0xE0,
    // FreeMono24_Z
    0xFF, 0xFF, 0xFC, 0x86, 0x16, 0x11, 0x51, 0x51, 0x16, 0x15, 0x17, 0x14, 0x11, 0xB1, 0x1C, 0x1C, 0x11, 0xB2, 0xB1, 0x15,
    0x16, 0x16, 0x15, 0x11, 0x61, 0x41, 0x17, 0x14, 0x19, 0xFF, 0xFD,
    // FreeMono24_a
    0xFF, 0xFF, 0xFF, 0xFF, 0x91, 0x22, 0x11, 0x71, 0x51, 0x1D, 0x1D, 0x16, 0x17, 0x51, 0x11, 0x51, 0x51, 0x71, 0x51, 0x71,
    0x51, 0x51, 0x25, 0x11, 0x31, 0x11, 0x35, 0x3F, 0xFF, 0xF3,
    // FreeMono24_b
    0xFF, 0xFF, 0xB1, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x13, 0x27, 0x11, 0x11, 0x12, 0x11, 0x52, 0x11, 0x42, 0x41, 0x11, 0x61,
    0x13, 0x27, 0x11, 0x32, 0x81, 0x31, 0x18, 0x13, 0x27, 0x11, 0x31, 0x17, 0x11, 0x32, 0x11, 0x42, 0x21, 0x21, 0x12, 0x21,
    0x1A, 0x2F, 0xFF, 0xF1,
    // FreeMono24_c
    0xFF, 0xFF, 0xFF, 0xFF, 0xA1, 0x12, 0x22, 0x52, 0x51, 0x11, 0x31, 0x17, 0x11, 0x31, 0x17, 0x14, 0x1D, 0x1D, 0x1D, 0x11,
    0x81, 0x41, 0x15, 0x11, 0x15, 0x11, 0x32, 0x93, 0xFF, 0xFF, 0x10,
    // FreeMono24_d
    0xFF, 0xFF, 0xF4, 0x21, 0xD1, 0xD1, 0x81, 0x41, 0x62, 0x21, 0x11, 0x15, 0x11, 0x42, 0x14, 0x11, 0x61, 0x13, 0x11, 0x81,
    0x31, 0x18, 0x13, 0x11, 0x81, 0x31, 0x18, 0x14, 0x11, 0x61, 0x15, 0x11, 0x42, 0x16, 0x22, 0x11, 0x13, 0x62, 0xFF, 0xFF,
    0x20,
    // FreeMono24_e
    0xFF, 0xFF, 0xFF, 0xFF, 0xA2, 0x22, 0x71, 0x14, 0x11, 0x51, 0x16, 0x11, 0x31, 0x18, 0x13, 0x1A, 0x12, 0x11, 0xD1, 0xD1,
    0x1D, 0x11, 0x51, 0x11, 0x51, 0x13, 0x21, 0x83, 0xFF, 0xFF, 0x10,
    // FreeMono24_f
    0xFF, 0xFF, 0xF3, 0x48, 0x11, 0x56, 0x11, 0xC1, 0x1C, 0x11, 0xA8, 0x17, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1,
    0x1C, 0x11, 0xC1, 0x19, 0x18, 0x1F, 0xFF, 0xD0,
    // FreeMono24_g
    0xFF, 0xFF, 0xFF, 0xFF, 0x91, 0x21, 0x21, 0x12, 0x12, 0x11, 0x51, 0x24, 0x17, 0x11, 0x31, 0x17, 0x23, 0x11, 0x71, 0x13,
    0x11, 0x72, 0x41, 0x71, 0x14, 0x25, 0x11, 0x15, 0x11, 0x11, 0x12, 0x11, 0x61, 0x31, 0x11, 0x1C, 0x11, 0xC1, 0x1B, 0x11,
    0x71, 0x41, 0x85, 0x50,
    // FreeMono24_h
    0xFF, 0xFF, 0xB1, 0x11, 0xB1, 0x11, 0xD1, 0xD1, 0xD1, 0x31, 0x91, 0x11, 0x11, 0x21, 0x62, 0x13, 0x11, 0x61, 0x15, 0x11,
    0x51, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11, 0x31, 0x31, 0x34, 0xFF, 0xFC,
    // FreeMono24_i
    0xFF, 0xFF, 0xF1, 0x11, 0xC1, 0x1C, 0x2F, 0xF7, 0x13, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11,
    0xC1, 0x18, 0x19, 0xFF, 0xFD,
    // FreeMono24_j
    0xFF, 0xFF, 0xF3, 0x1D, 0x1D, 0x1F, 0xF6, 0x71, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11,
    0xC1, 0x1C, 0x11, 0xC1, 0xC1, 0x17, 0x14, 0x15,
    // FreeMono24_k
    0xFF, 0xFF, 0xC1, 0x1C, 0x11, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x12, 0x13, 0x15, 0x11, 0x31, 0x17, 0x11, 0x11, 0x11,
    0x81, 0x21, 0xA1, 0x21, 0xA2, 0x12, 0x91, 0x12, 0x28, 0x11, 0x32, 0x71, 0x14, 0x24, 0x12, 0x13, 0x14, 0xFF, 0xFC,
    // FreeMono24_l
    0xFF, 0xFF, 0xD1, 0x31, 0x93, 0x2C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1,
    0x1C, 0x11, 0xC1, 0x18, 0x19, 0xFF, 0xFD,
    // FreeMono24_m
    0xFF, 0xFF, 0xFF, 0xFF, 0xB1, 0x41, 0x31, 0x12, 0x11, 0x11, 0x11, 0x11, 0x31, 0x11, 0x21, 0x11, 0x21, 0x12, 0x11, 0x31,
    0x14, 0x12, 0x11, 0x41, 0x41, 0x21, 0x14, 0x14, 0x12, 0x11, 0x41, 0x41, 0x21, 0x14, 0x14, 0x12, 0x11, 0x41, 0x41, 0x21,
    0x14, 0x14, 0x11, 0x13, 0x32, 0x32, 0xFF, 0xFB,
    // FreeMono24_n
    0xFF, 0xFF, 0xFF, 0xFF, 0xD1, 0x71, 0x21, 0x11, 0x12, 0x16, 0x21, 0x41, 0x61, 0x15, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11,
    0x51, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11, 0x31, 0x31, 0x31, 0x3F, 0xFF, 0xC0,
    // FreeMono24_o
    0xFF, 0xFF, 0xFF, 0xFF, 0xA1, 0x12, 0x21, 0x61, 0x14, 0x11, 0x14, 0x27, 0x14, 0x18, 0x11, 0x31, 0x81, 0x13, 0x18, 0x11,
    0x31, 0x81, 0x13, 0x27, 0x15, 0x11, 0x51, 0x16, 0x11, 0x22, 0x19, 0x2F, 0xFF, 0xF2,
    // FreeMono24_p
    0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x21, 0x12, 0x21, 0x15, 0x21, 0x14, 0x11, 0x41, 0x17, 0x11, 0x32, 0x81, 0x31, 0x18, 0x13,
    0x28, 0x13, 0x11, 0x71, 0x13, 0x11, 0x16, 0x14, 0x11, 0x11, 0x11, 0x11, 0x11, 0x41, 0x12, 0x31, 0x61, 0x1C, 0x11, 0xC1,
    0x1B, 0x11, 0x39, 0x58,
    // FreeMono24_q
    0xFF, 0xFF, 0xFF, 0xFF, 0x91, 0x22, 0x11, 0x13, 0x21, 0x11, 0x42, 0x14, 0x17, 0x11, 0x31, 0x18, 0x13, 0x11, 0x81, 0x31,
    0x18, 0x14, 0x17, 0x11, 0x42, 0x62, 0x51, 0x11, 0x11, 0x11, 0x11, 0x61, 0x31, 0x21, 0xD1, 0xD1, 0xD1, 0xA1, 0x21, 0x11,
    0x86,
    // FreeMono24_r
    0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x13, 0x21, 0x31, 0x61, 0x11, 0x13, 0x16, 0x21, 0xB1, 0x1C, 0x1D, 0x1D, 0x1D, 0x1D, 0x1A,
    0x81, 0xFF, 0xFE,
    // FreeMono24_s
    0xFF, 0xFF, 0xFF, 0xFF, 0xA1, 0x12, 0x21, 0x15, 0x11, 0x51, 0x15, 0x16, 0x11, 0x52, 0xD1, 0x31, 0x1C, 0x11, 0x1D, 0x11,
    0x41, 0x17, 0x14, 0x11, 0x61, 0x14, 0x11, 0x22, 0x21, 0x92, 0xFF, 0xFF, 0x20,
    // FreeMono24_t
    0xFF, 0xFF, 0xFC, 0x11, 0xC1, 0x1C, 0x11, 0xA9, 0x71, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11, 0xC1, 0x1C, 0x11,
    0x51, 0x16, 0x11, 0x32, 0x18, 0x3F, 0xFF, 0xF1,
    // FreeMono24_u
    0xFF, 0xFF, 0xFF, 0xFF, 0x73, 0x41, 0x21, 0x51, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15, 0x16, 0x11, 0x51, 0x61, 0x15,
    0x16, 0x11, 0x51, 0x62, 0x51, 0x14, 0x21, 0x61, 0x22, 0x22, 0x62, 0xFF, 0xFF, 0x30,
    // FreeMono24_v
    0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0x41, 0x34, 0x12, 0x11, 0x71, 0x51, 0x61, 0x15, 0x25, 0x17, 0x14, 0x11, 0x71, 0x13, 0x19,
    0x12, 0x11, 0x91, 0x11, 0x1A, 0x11, 0x11, 0xB2, 0x1F, 0xFF, 0xF1,
    // FreeMono24_w
    0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0x31, 0x53, 0x12, 0x18, 0x11, 0x31, 0x41, 0x31, 0x41, 0x12, 0x23, 0x14, 0x11, 0x21, 0x11,
    0x21, 0x51, 0x11, 0x11, 0x11, 0x11, 0x51, 0x11, 0x11, 0x11, 0x11, 0x51, 0x11, 0x21, 0x11, 0x61, 0x11, 0x32, 0x61, 0x14,
    0x11, 0xFF, 0xFE,
    // FreeMono24_x
    0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x31, 0x33, 0x14, 0x11, 0x51, 0x16, 0x11, 0x31, 0x18, 0x21, 0x1B, 0x2B, 0x11, 0x29, 0x11,
    0x22, 0x71, 0x14, 0x25, 0x11, 0x62, 0x31, 0x31, 0x34, 0xFF, 0xFC,
    // FreeMono24_y
    0xFF, 0xFF, 0xFF, 0xFF, 0x71, 0x34, 0x13, 0x31, 0x17, 0x15, 0x16, 0x11, 0x51, 0x15, 0x17, 0x14, 0x11, 0x71, 0x13, 0x19,
    0x12, 0x11, 0x91, 0x11, 0x1B, 0x11, 0x1B, 0x11, 0xC1, 0x1C, 0x1C, 0x11, 0x93, 0x11, 0x18, 0x66,
    // FreeMono24_z
    0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x81, 0x51, 0x51, 0x16, 0x14, 0x11, 0xB1, 0x1C, 0x1C, 0x11, 0xB1, 0x1B, 0x11, 0x51, 0x52,
    0x51, 0x15, 0x81, 0xFF, 0xFD,
};


static const uint8_t freemono24_bpp[] = {
    // FreeMono24_0
    0x1B, 0x8B, 0x4B, 0x1C, 0x63, 0x4C, 0xC9, 0x31, 0x86, 0x18, 0x61, 0x86, 0x18, 0x71, 0x8C, 0x63, 0x34, 0x8C, 0xD3, 0x4E,
    0xE1, 0x00,
    // FreeMono24_1
    0x24, 0xB8, 0xB6, 0x2C, 0x61, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0x63, 0x80,
    // FreeMono24_2
    0x2E, 0x1D, 0x1B, 0x31, 0xC6, 0x24, 0x93, 0x22, 0x22, 0x22, 0x38, 0xD2, 0x4D, 0x00,
    // FreeMono24_3
    0x2E, 0x47, 0x47, 0x48, 0xC9, 0x24, 0xC6, 0xC6, 0xE1, 0xC6, 0x33, 0x18, 0x87, 0x1E, 0xE1, 0x00,
    // FreeMono24_4
    0x22, 0xCC, 0xCD, 0x31, 0x8C, 0xCC, 0x93, 0x33, 0x24, 0xC6, 0x31, 0xD3, 0x33, 0x1D, 0x00,
    // FreeMono24_5
    0x1D, 0x18, 0x61, 0x86, 0x11, 0xED, 0x13, 0x18, 0xCC, 0xC9, 0x1D, 0x1C, 0xEE, 0x10,
    // FreeMono24_6
    0x2E, 0x2E, 0x12, 0x18, 0xC6, 0x24, 0x64, 0x9B, 0x6C, 0x88, 0xB3, 0x24, 0xC6, 0x33, 0x31, 0xCD, 0x1E, 0xD1, 0x00,
    // FreeMono24_7
    0x19, 0xD1, 0x24, 0xC6, 0x24, 0xC7, 0x24, 0xCC, 0x8C, 0xC6, 0x00,
    // FreeMono24_8
    0x1E, 0x39, 0x1D, 0x23, 0x32, 0x4C, 0x92, 0x4C, 0xD1, 0xD3, 0x4D, 0x34, 0xCD, 0x31, 0x88, 0x63, 0x24, 0x71, 0xC7, 0xB8,
    0x40,
    // FreeMono24_9
    0x1B, 0x87, 0x47, 0x4C, 0xC9, 0x18, 0x93, 0x24, 0xC6, 0x33, 0x48, 0xD3, 0x31, 0x8D, 0x23, 0x86, 0xD1, 0x00,
    // FreeMono24_colon
    0x34, 0xB3, 0x89, 0x2C, 0x78, 0x40,
    // FreeMono24_A
    0x21, 0xB4, 0x63, 0x32, 0x24, 0x93, 0x33, 0x18, 0x62, 0xCD, 0xD1, 0x86, 0x33, 0x32, 0x4B, 0x2C,
    // FreeMono24_B
    0x19, 0x1D, 0xB8, 0xC8, 0xCC, 0xCC, 0xC9, 0x3B, 0x4D, 0xB4, 0xCD, 0x33, 0x33, 0x31, 0xCC, 0x73, 0x80,
    // FreeMono24_C
    0x2E, 0x47, 0x91, 0xB9, 0x31, 0xD3, 0x49, 0x31, 0x86, 0x18, 0x61, 0x8C, 0x71, 0x8B, 0x1C, 0x7B, 0x84,
    // FreeMono24_D
    0x19, 0x19, 0xB2, 0x47, 0x24, 0x62, 0x4C, 0x92, 0x49, 0x24, 0x92, 0x49, 0x24, 0x92, 0x49, 0x32, 0x4D, 0x24, 0x78, 0xD0,
    // FreeMono24_E
    0x19, 0x1D, 0xCC, 0xCC, 0xCC, 0x4C, 0x93, 0xB4, 0xDD, 0x32, 0x4C, 0xC4, 0xC9, 0x32, 0x4D, 0x00,
    // FreeMono24_F
    0x18, 0x76, 0x4C, 0x93, 0x13, 0x32, 0x4E, 0xD3, 0x74, 0xC9, 0x33, 0x33, 0x30,
    // FreeMono24_G
    0x1B, 0x87, 0x91, 0xB4, 0xCD, 0x34, 0x4C, 0x61, 0x86, 0x18, 0x74, 0x62, 0x4C, 0x92, 0x24, 0xE2, 0x4B, 0xB8, 0x40,
    // FreeMono24_H
    0x19, 0x24, 0x74, 0x64, 0xC9, 0x32, 0x4C, 0x93, 0x24, 0xED, 0x36, 0x4C, 0x93, 0x24, 0xC9, 0x32, 0x4C, 0x92, 0xC7, 0x00,
    // FreeMono24_I
    0x19, 0x1B, 0x46, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0x63, 0x80,
    // FreeMono24_J
    0x1D, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0xCB, 0x31, 0xED, 0x10,
    // FreeMono24_K
    0x18, 0x64, 0x74, 0x74, 0xC7, 0x32, 0x32, 0x33, 0x8C, 0xD3, 0x4E, 0x33, 0x8C, 0xCC, 0x63, 0x33, 0x23, 0x4E, 0x00,
    // FreeMono24_L
    0x21, 0xE4, 0x92, 0x49, 0x24, 0x92, 0x49, 0x12, 0x4C, 0x93, 0x24, 0xC9, 0x31, 0xC0,
    // FreeMono24_M
    0x24, 0x92, 0xC7, 0x46, 0x4D, 0xC6, 0x31, 0x8C, 0x62, 0x4C, 0xC6, 0x1C, 0x73, 0x18, 0xC9, 0x31, 0x86, 0x33, 0x18, 0xE4,
    0xC6, 0x1C, 0xC6, 0x31, 0x8C, 0x63, 0x2C, 0x70,
    // FreeMono24_N
    0x24, 0x87, 0x47, 0x4B, 0x32, 0x63, 0x24, 0xCC, 0x91, 0xCC, 0x93, 0x4C, 0x93, 0x32, 0x48, 0xC9, 0x33, 0x24, 0x73, 0x24,
    0x9C, 0x93, 0x38, 0xB0,
    // FreeMono24_O
    0x2E, 0x47, 0x87, 0x8C, 0x8D, 0x34, 0x71, 0x89, 0x32, 0x4C, 0xCC, 0x93, 0x18, 0xCC, 0x88, 0xCE, 0x1D, 0x2E, 0xC4,
    // FreeMono24_P
    0x19, 0x1D, 0xB4, 0xCD, 0x33, 0x33, 0x31, 0xCC, 0xD3, 0xB4, 0xD3, 0x33, 0x33, 0x00,
    // FreeMono24_Q
    0x2E, 0x47, 0x87, 0x8C, 0x8D, 0x34, 0x71, 0x89, 0x32, 0x4C, 0xCC, 0x93, 0x18, 0xCC, 0x88, 0xCE, 0x1D, 0x2E, 0xCB, 0x4B,
    0x9C, 0x64, 0x60,
    // FreeMono24_R
    0x19, 0x1D, 0xB4, 0xCD, 0x33, 0x33, 0x32, 0x31, 0x8D, 0x33, 0x8C, 0xE3, 0x33, 0x1C, 0xC9, 0x34, 0xC0,
    // FreeMono24_S
    0x2E, 0x44, 0x79, 0x1E, 0x34, 0xE3, 0x18, 0xCE, 0x2E, 0x46, 0xD2, 0x32, 0x33, 0x4C, 0xD3, 0x48, 0xBB, 0x44,
    // FreeMono24_T
    0x24, 0x76, 0xD8, 0x61, 0x86, 0x21, 0x88, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0x61, 0xE0,
    // FreeMono24_U
    0x1E, 0x47, 0x49, 0x32, 0x4C, 0x93, 0x24, 0xC9, 0x32, 0x4C, 0x93, 0x24, 0xC6, 0x33, 0x22, 0x1C, 0xBB, 0x10,
    // FreeMono24_V
    0x19, 0x19, 0xB4, 0x6D, 0x32, 0x49, 0x33, 0x18, 0xCC, 0x63, 0x32, 0x49, 0x31, 0x86, 0x33, 0x23, 0x39, 0x30,
    // FreeMono24_W
    0x21, 0x92, 0x46, 0xD1, 0x8C, 0x61, 0x86, 0x33, 0x46, 0x33, 0x62, 0x4C, 0x63, 0x24, 0xC9, 0x33, 0x24, 0xC9, 0x32, 0x48,
    0x63, 0x19, 0x33, 0x1B, 0x36, 0x1C, 0xB8, 0xE1, 0xD0,
    // FreeMono24_X
    0x19, 0x19, 0x1D, 0x1B, 0x4D, 0x34, 0xC8, 0x71, 0xC8, 0xCD, 0x32, 0x71, 0xC8, 0xCD, 0x34, 0xC8, 0x73, 0x4D, 0x00,
    // FreeMono24_Y
    0x19, 0x19, 0x1B, 0x46, 0xD3, 0x4D, 0x31, 0x88, 0xCD, 0x34, 0xE2, 0xC6, 0x18, 0x61, 0x86, 0x1E, 0x00,
    // FreeMono24_Z
    0x23, 0x74, 0xC7, 0x33, 0x23, 0x46, 0x33, 0x48, 0x73, 0x33, 0x34, 0xC6, 0x32, 0xC0,
    // FreeMono24_a
    0x2E, 0xE1, 0x1C, 0xCC, 0x72, 0xD3, 0x33, 0x33, 0x31, 0xC7, 0xB8, 0xC4,
    // FreeMono24_b
    0x1D, 0x24, 0x92, 0x44, 0x92, 0xEE, 0x2D, 0x22, 0xD3, 0x48, 0x72, 0x32, 0x4C, 0x87, 0x2C, 0xD2, 0xD2, 0x1D, 0x3B, 0x84,
    // FreeMono24_c
    0x1E, 0xE2, 0x2D, 0x18, 0xD3, 0x44, 0xCC, 0xC6, 0x13, 0x87, 0x4B, 0xB1, 0x00,
    // FreeMono24_d
    0x1C, 0xCC, 0x4C, 0xED, 0x33, 0x4B, 0x34, 0xB1, 0xCC, 0x63, 0x18, 0xC7, 0x33, 0x4B, 0x34, 0xB3, 0xB4, 0xC4,
    // FreeMono24_e
    0x3B, 0x34, 0x73, 0x47, 0x1C, 0xC7, 0x46, 0x33, 0x4D, 0x1D, 0x2E, 0xD1, 0x00,
    // FreeMono24_f
    0x12, 0xE1, 0xC6, 0x18, 0xE1, 0x86, 0x18, 0x61, 0x86, 0x18, 0x61, 0xD0,
    // FreeMono24_g
    0x1E, 0xC7, 0x47, 0x38, 0xCE, 0x18, 0x86, 0x18, 0x62, 0x33, 0x88, 0xB8, 0xB4, 0x66, 0x19, 0x18, 0x62, 0x47, 0x1B, 0x10,
    // FreeMono24_h
    0x19, 0x1B, 0x33, 0x31, 0x32, 0xED, 0x34, 0x73, 0x49, 0x32, 0x4C, 0x93, 0x24, 0xC9, 0x32, 0x4C, 0x92, 0xE3, 0x00,
    // FreeMono24_i
    0x38, 0xE1, 0x2E, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x2C,
    // FreeMono24_j
    0x33, 0x23, 0x49, 0x24, 0x92, 0x49, 0x24, 0x92, 0x49, 0x24, 0xC7, 0x1B, 0x00,
    // FreeMono24_k
    0x18, 0x74, 0x92, 0x49, 0x24, 0x78, 0x93, 0x49, 0x1D, 0x27, 0x2E, 0x22, 0x24, 0x89, 0x22, 0x48, 0x74, 0x70,
    // FreeMono24_l
    0x19, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0xB0,
    // FreeMono24_m
    0x11, 0x2E, 0xEC, 0xBB, 0x1E, 0x2E, 0x18, 0x71, 0xCC, 0x62, 0x31, 0x88, 0xC6, 0x23, 0x18, 0x8C, 0x62, 0x31, 0x88, 0xCB,
    0x33, 0x00,
    // FreeMono24_n
    0x11, 0xCB, 0xB4, 0xD3, 0x34, 0x93, 0x18, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xC6, 0x2E, 0x2C,
    // FreeMono24_o
    0x2E, 0xD3, 0x87, 0x48, 0xCC, 0x93, 0x18, 0xC6, 0x32, 0x48, 0xCD, 0x34, 0xBB, 0x44,
    // FreeMono24_p
    0x1D, 0x3B, 0x8B, 0x4B, 0x2C, 0x92, 0x32, 0x4C, 0x8C, 0xB1, 0x8B, 0x8C, 0x9B, 0x46, 0xD2, 0x49, 0x24, 0x92, 0x4B, 0x84,
    // FreeMono24_q
    0x1E, 0xE3, 0x1D, 0x2C, 0xCB, 0x18, 0xC6, 0x31, 0x8C, 0xC7, 0x23, 0x2D, 0x1B, 0x31, 0x93, 0x33, 0x31, 0xB9, 0x10,
    // FreeMono24_r
    0x1C, 0xB4, 0xCE, 0x23, 0x4D, 0x33, 0x33, 0x33, 0x80,
    // FreeMono24_s
    0x2E, 0xE4, 0xE3, 0x4C, 0x92, 0x1E, 0x46, 0xC7, 0x24, 0xCB, 0x38, 0x6E, 0xD1, 0x00,
    // FreeMono24_t
    0x24, 0x92, 0x4C, 0x92, 0x49, 0x24, 0x92, 0x46, 0x1C, 0x62, 0xED, 0x10,
    // FreeMono24_u
    0x32, 0xE3, 0x18, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xC6, 0x32, 0x34, 0xE3, 0xB7, 0x10,
    // FreeMono24_v
    0x34, 0xE1, 0x8C, 0xC9, 0x23, 0x32, 0x49, 0x33, 0x18, 0x93, 0x1D, 0x8D, 0x00,
    // FreeMono24_w
    0x38, 0xE3, 0x24, 0xC4, 0xC9, 0x33, 0x18, 0xE4, 0xCC, 0x63, 0x18, 0xCD, 0x32, 0x49, 0xC6, 0xC7, 0x8C, 0x73, 0x80,
    // FreeMono24_x
    0x38, 0xD3, 0x8D, 0x38, 0xD2, 0x33, 0x1E, 0x1C, 0x87, 0x21, 0xC8, 0xB8, 0xC0,
    // FreeMono24_y
    0x2C, 0xB1, 0x8C, 0xC9, 0x18, 0xCC, 0x91, 0x8C, 0xC9, 0x18, 0xCE, 0x47, 0x18, 0xC6, 0x2E, 0x44,
    // FreeMono24_z
    0x34, 0xC7, 0x31, 0xC7, 0x33, 0x4D, 0x34, 0x88, 0x63, 0x80,
};


typedef struct{
    uint16_t bmp_index;
    uint16_t bpp_index;
}font_table_t;

static const font_table_t freemono24_table[] = {
    {0, 0},  // FreeMono24_0
    {47, 22},  // FreeMono24_1
    {78, 36},  // FreeMono24_2
    {109, 50},  // FreeMono24_3
    {144, 66},  // FreeMono24_4
    {177, 81},  // FreeMono24_5
    {209, 95},  // FreeMono24_6
    {250, 114},  // FreeMono24_7
    {275, 125},  // FreeMono24_8
    {320, 146},  // FreeMono24_9
    {359, 164},  // FreeMono24_colon
    {378, 170},  // FreeMono24_A
    {414, 186},  // FreeMono24_B
    {451, 203},  // FreeMono24_C
    {489, 220},  // FreeMono24_D
    {533, 240},  // FreeMono24_E
    {568, 256},  // FreeMono24_F
    {598, 269},  // FreeMono24_G
    {639, 288},  // FreeMono24_H
    {682, 308},  // FreeMono24_I
    {709, 320},  // FreeMono24_J
    {738, 332},  // FreeMono24_K
    {779, 351},  // FreeMono24_L
    {810, 365},  // FreeMono24_M
    {870, 393},  // FreeMono24_N
    {922, 417},  // FreeMono24_O
    {964, 436},  // FreeMono24_P
    {995, 450},  // FreeMono24_Q
    {1044, 473},  // FreeMono24_R
    {1081, 490},  // FreeMono24_S
    {1121, 508},  // FreeMono24_T
    {1155, 523},  // FreeMono24_U
    {1195, 541},  // FreeMono24_V
    {1235, 559},  // FreeMono24_W
    {1297, 588},  // FreeMono24_X
    {1338, 607},  // FreeMono24_Y
    {1375, 624},  // FreeMono24_Z
    {1406, 638},  // FreeMono24_a
    {1436, 650},  // FreeMono24_b
    {1480, 670},  // FreeMono24_c
    {1511, 683},  // FreeMono24_d
    {1552, 701},  // FreeMono24_e
    {1583, 714},  // FreeMono24_f
    {1611, 726},  // FreeMono24_g
    {1655, 746},  // FreeMono24_h
    {1695, 765},  // FreeMono24_i
    {1720, 775},  // FreeMono24_j
    {1748, 788},  // FreeMono24_k
    {1787, 806},  // FreeMono24_l
    {1814, 818},  // FreeMono24_m
    {1862, 840},  // FreeMono24_n
    {1898, 855},  // FreeMono24_o
    {1932, 869},  // FreeMono24_p
    {1976, 889},  // FreeMono24_q
    {2017, 908},  // FreeMono24_r
    {2040, 917},  // FreeMono24_s
    {2073, 931},  // FreeMono24_t
    {2101, 943},  // FreeMono24_u
    {2135, 957},  // FreeMono24_v
    {2166, 970},  // FreeMono24_w
    {2209, 989},  // FreeMono24_x
    {2240, 1002},  // FreeMono24_y
    {2276, 1018},  // FreeMono24_z
};

#define IS_LAST(e)  (((e) - freemono24_table) == (sizeof(freemono24_table) / sizeof(freemono24_table[0]) - 1)  ) 

static bool freemono24_lookup(utf8_t c, font_symbol_t *sym)
{
    const font_table_t *t = 0;
    
    if(c >= '0' && c<= '9')
    {
        t = &freemono24_table[(c-'0')];
    }
    else if(c == ':')
    {
        t = &freemono24_table[10];
    }
    else if(c >= 'A' && c <= 'Z')
    {
        t = &freemono24_table[((c-'A')+10+1)];
    }
    else if(c >= 'a' && c <= 'z')
    {
        t = &freemono24_table[((c-'a')+10+1+26)];
    }
    else
    {
        return false;
    }
    
    sym->bmp_index = t->bmp_index;
    sym->bpp_index = t->bpp_index;
    if(IS_LAST(t))
    {
        sym->size = sizeof(freemono24_bmp) - t->bmp_index;
    }
    else
    {
        sym->size = (t+1)->bmp_index - t->bmp_index;
    }

    return true;
}

font_t freemono24 = 
{
    .width = FREEMONO24_WIDTH,
    .height = FREEMONO24_HEIGHT,
    .bmp_base = freemono24_bmp,
    .bpp_base = freemono24_bpp,
    .lookup = freemono24_lookup
};
