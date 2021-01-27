/*
    <Generate from ./bmp.tpl>
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
    0xFF, 0xFF, 0xFF, 0x03, 0x92, 0x22, 0x81, 0x51, 0x61, 0x61, 0x61, 0x61, 0x61, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71,
    0x51, 0x71, 0x51, 0x71, 0x51, 0x61, 0x62, 0x51, 0x71, 0x42, 0x85, 0xFF, 0xF1,  // FreeMono24_0
    0xFF, 0xFF, 0xF1, 0x2B, 0x3A, 0x21, 0x19, 0x22, 0x19, 0x13, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x19,
    0x9F, 0xFF, 0xD0,  // FreeMono24_1
    0xFF, 0xFF, 0xF0, 0x49, 0x13, 0x27, 0x16, 0x15, 0x26, 0x1D, 0x1D, 0x1C, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x17,
    0x15, 0x9F, 0xFF, 0xE0,  // FreeMono24_2
    0xFF, 0xFF, 0xFE, 0x49, 0x14, 0x26, 0x16, 0x1D, 0x1D, 0x1D, 0x1A, 0x3B, 0x3E, 0x1E, 0x1D, 0x1D, 0x1D, 0x14, 0x26, 0x17,
    0x6F, 0xFF, 0x10,  // FreeMono24_3
    0xFF, 0xFF, 0xF3, 0x2B, 0x11, 0x1B, 0x11, 0x1A, 0x12, 0x1A, 0x12, 0x19, 0x13, 0x18, 0x23, 0x18, 0x14, 0x17, 0x15, 0x17,
    0x15, 0x17, 0x8C, 0x1D, 0x1D, 0x1B, 0x4F, 0xFF, 0xE0,  // FreeMono24_4
    0xFF, 0xFF, 0xE6, 0x81, 0x51, 0x71, 0xD1, 0xD1, 0xD1, 0xD6, 0xE1, 0xE1, 0xD1, 0xD1, 0xD1, 0xC2, 0x51, 0x61, 0x76, 0xFF,
    0xFF,  // FreeMono24_5
    0xFF, 0xFF, 0xFF, 0x24, 0x83, 0xA2, 0xB2, 0xC1, 0xD1, 0xC1, 0x32, 0x81, 0x12, 0x22, 0x61, 0x11, 0x51, 0x52, 0x61, 0x51,
    0x71, 0x61, 0x61, 0x61, 0x61, 0x71, 0x41, 0x95, 0xFF, 0xF0,  // FreeMono24_6
    0xFF, 0xFF, 0xD8, 0x61, 0x61, 0x61, 0x61, 0xD1, 0xD1, 0xC1, 0xD1, 0xD1, 0xC1, 0xD1, 0xD1, 0xC1, 0xD1, 0xD1, 0xD1, 0xFF,
    0xFF, 0x20,  // FreeMono24_7
    0xFF, 0xFF, 0xFF, 0x03, 0x92, 0x31, 0x71, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x71, 0x41, 0x94, 0x91, 0x42, 0x61,
    0x61, 0x61, 0x71, 0x51, 0x71, 0x51, 0x61, 0x62, 0x51, 0x76, 0xFF, 0xF1,  // FreeMono24_8
    0xFF, 0xFF, 0xFF, 0x03, 0x92, 0x31, 0x81, 0x51, 0x61, 0x71, 0x51, 0x71, 0x51, 0x71, 0x61, 0x52, 0x61, 0x43, 0x75, 0x11,
    0xD1, 0xD1, 0xC1, 0xC2, 0xB2, 0x76, 0xFF, 0xF2,  // FreeMono24_9
    0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xA4, 0xB3, 0xFF, 0xFF, 0x72, 0xB4, 0xB3, 0xFF, 0xFF, 0xF0,  // FreeMono24_colon
    0xFF, 0xFF, 0xFF, 0xFF, 0x97, 0xE1, 0xD1, 0xD1, 0x77, 0x52, 0x61, 0x51, 0x71, 0x51, 0x71, 0x51, 0x62, 0x66, 0x13, 0xFF,
    0xFF, 0xB0,  // FreeMono24_a
    0xFF, 0xFF, 0xB2, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0x26, 0x51, 0x11, 0x52, 0x42, 0x71, 0x42, 0x81, 0x31, 0x91, 0x31, 0x91,
    0x32, 0x81, 0x32, 0x71, 0x41, 0x11, 0x52, 0x32, 0x26, 0xFF, 0xFE,  // FreeMono24_b
    0xFF, 0xFF, 0xFF, 0xFF, 0xA8, 0x52, 0x52, 0x51, 0x71, 0x41, 0xD1, 0xD1, 0xD1, 0xE1, 0x81, 0x42, 0x61, 0x67, 0xFF, 0xFF,
    0xD0,  // FreeMono24_c
    0xFF, 0xFF, 0xF5, 0x2D, 0x1D, 0x1D, 0x1D, 0x16, 0x52, 0x15, 0x15, 0x34, 0x17, 0x24, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14,
    0x18, 0x14, 0x17, 0x25, 0x15, 0x36, 0x52, 0x3F, 0xFF, 0xB0,  // FreeMono24_d
    0xFF, 0xFF, 0xFF, 0xFF, 0xA6, 0x71, 0x61, 0x51, 0x81, 0x41, 0x81, 0x4A, 0x41, 0xD1, 0xD1, 0xE1, 0x71, 0x67, 0xFF, 0xFF,
    0xD0,  // FreeMono24_e
    0xFF, 0xFF, 0xFF, 0x07, 0x71, 0xD1, 0xD1, 0xA9, 0x81, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xA8, 0xFF, 0xFE,  // FreeMono24_f
    0xFF, 0xFF, 0xFF, 0xFF, 0xA5, 0x22, 0x41, 0x51, 0x11, 0x41, 0x72, 0x41, 0x72, 0x41, 0x81, 0x41, 0x72, 0x41, 0x72, 0x42,
    0x53, 0x52, 0x32, 0x11, 0x73, 0x31, 0xD1, 0xC1, 0xD1, 0x85, 0xF3,  // FreeMono24_g
    0xFF, 0xFF, 0xC2, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0x15, 0x72, 0x51, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61,
    0x61, 0x61, 0x61, 0x61, 0x61, 0x45, 0x34, 0xFF, 0xFC,  // FreeMono24_h
    0xFF, 0xFF, 0xF1, 0x2C, 0x2C, 0x2F, 0xF7, 0x5D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x18, 0xAF, 0xFF, 0xD0,  // FreeMono24_i
    0xFF, 0xFF, 0xFF, 0x21, 0xD1, 0xD1, 0xFF, 0x67, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1,
    0x40,  // FreeMono24_j
    0xFF, 0xFF, 0xC2, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0x35, 0x51, 0x41, 0x81, 0x31, 0x91, 0x21, 0xA4, 0xA2, 0x12, 0x91, 0x32,
    0x81, 0x42, 0x71, 0x52, 0x52, 0x54, 0xFF, 0xFC,  // FreeMono24_k
    0xFF, 0xFF, 0xE4, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0x8A, 0xFF, 0xFD,  // FreeMono24_l
    0xFF, 0xFF, 0xFF, 0xFF, 0x67, 0x14, 0x42, 0x32, 0x31, 0x31, 0x41, 0x41, 0x31, 0x41, 0x41, 0x31, 0x41, 0x41, 0x31, 0x41,
    0x41, 0x31, 0x41, 0x41, 0x31, 0x41, 0x41, 0x31, 0x41, 0x41, 0x14, 0x32, 0x32, 0xFF, 0xFF, 0xA0,  // FreeMono24_m
    0xFF, 0xFF, 0xFF, 0xFF, 0x82, 0x15, 0x72, 0x51, 0x61, 0x61, 0x61, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71,
    0x51, 0x71, 0x35, 0x34, 0xFF, 0xFF, 0xB0,  // FreeMono24_n
    0xFF, 0xFF, 0xFF, 0xFF, 0xA6, 0x72, 0x51, 0x52, 0x71, 0x41, 0x81, 0x41, 0x91, 0x31, 0x91, 0x31, 0x81, 0x41, 0x81, 0x51,
    0x61, 0x76, 0xFF, 0xFF, 0xE0,  // FreeMono24_o
    0xFF, 0xFF, 0xFF, 0xFF, 0x72, 0x26, 0x51, 0x11, 0x52, 0x42, 0x71, 0x42, 0x81, 0x31, 0x91, 0x32, 0x81, 0x32, 0x81, 0x33,
    0x61, 0x41, 0x12, 0x32, 0x51, 0x33, 0x71, 0xD1, 0xD1, 0xC5, 0xF7,  // FreeMono24_p
    0xFF, 0xFF, 0xFF, 0xFF, 0xA6, 0x13, 0x31, 0x53, 0x41, 0x72, 0x41, 0x81, 0x41, 0x81, 0x41, 0x81, 0x41, 0x81, 0x42, 0x62,
    0x52, 0x32, 0x11, 0x73, 0x31, 0xD1, 0xD1, 0xD1, 0xB4, 0xF0,  // FreeMono24_q
    0xFF, 0xFF, 0xFF, 0xFF, 0x93, 0x24, 0x71, 0x12, 0x31, 0x62, 0xC1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xA9, 0xFF, 0xFF, 0xD0,  // FreeMono24_r
    0xFF, 0xFF, 0xFF, 0xFF, 0xA7, 0x61, 0x61, 0x61, 0x61, 0x62, 0xE4, 0xE2, 0xE1, 0x41, 0x81, 0x42, 0x62, 0x41, 0x17, 0xFF,
    0xFF, 0xD0,  // FreeMono24_s
    0xFF, 0xFF, 0xFF, 0xB1, 0xD1, 0xD1, 0xB9, 0x71, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xE1, 0x61, 0x67, 0xFF, 0xFE,  // FreeMono24_t
    0xFF, 0xFF, 0xFF, 0xFF, 0x73, 0x44, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x62,
    0x51, 0x51, 0x11, 0x65, 0x22, 0xFF, 0xFF, 0xB0,  // FreeMono24_u
    0xFF, 0xFF, 0xFF, 0xFF, 0x75, 0x35, 0x31, 0x71, 0x51, 0x61, 0x62, 0x51, 0x71, 0x42, 0x71, 0x41, 0x91, 0x31, 0x91, 0x21,
    0xB1, 0x11, 0xB2, 0xFF, 0xFF, 0xF1,  // FreeMono24_v
    0xFF, 0xFF, 0xFF, 0xFF, 0x74, 0x54, 0x21, 0x81, 0x41, 0x81, 0x41, 0x32, 0x31, 0x51, 0x22, 0x31, 0x51, 0x21, 0x11, 0x21,
    0x51, 0x11, 0x21, 0x11, 0x61, 0x11, 0x32, 0x61, 0x11, 0x32, 0x71, 0x42, 0xFF, 0xFF, 0xD0,  // FreeMono24_w
    0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x34, 0x42, 0x51, 0x72, 0x31, 0x92, 0x11, 0xB2, 0xC3, 0xA1, 0x22, 0x81, 0x42, 0x61, 0x62,
    0x35, 0x34, 0xFF, 0xFF, 0xB0,  // FreeMono24_x
    0xFF, 0xFF, 0xFF, 0xFF, 0x74, 0x44, 0x41, 0x71, 0x51, 0x61, 0x71, 0x51, 0x71, 0x41, 0x91, 0x31, 0x91, 0x21, 0xB1, 0x11,
    0xB1, 0x11, 0xC1, 0xD1, 0xC1, 0xD1, 0x96, 0xF5,  // FreeMono24_y
    0xFF, 0xFF, 0xFF, 0xFF, 0x98, 0x61, 0x52, 0x61, 0x51, 0xC1, 0xC1, 0xC1, 0xC1, 0xC1, 0x61, 0x52, 0x61, 0x59, 0xFF, 0xFF,
    0xC0,  // FreeMono24_z
    0xFF, 0xFF, 0xFC, 0x5C, 0x2B, 0x12, 0x1A, 0x12, 0x1A, 0x12, 0x19, 0x14, 0x18, 0x14, 0x18, 0x15, 0x16, 0x86, 0x16, 0x16,
    0x17, 0x14, 0x18, 0x14, 0x18, 0x12, 0x54, 0x5F, 0xFF, 0xB0,  // FreeMono24_A
    0xFF, 0xFF, 0xFB, 0x69, 0x14, 0x36, 0x16, 0x25, 0x17, 0x15, 0x17, 0x15, 0x16, 0x25, 0x77, 0x14, 0x36, 0x17, 0x15, 0x18,
    0x14, 0x18, 0x14, 0x18, 0x14, 0x17, 0x13, 0xAF, 0xFF, 0xE0,  // FreeMono24_B
    0xFF, 0xFF, 0xFF, 0xD4, 0x92, 0x33, 0x51, 0x71, 0x41, 0x81, 0x41, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xE1, 0x81, 0x42,
    0x61, 0x76, 0xFF, 0xF0,  // FreeMono24_C
    0xFF, 0xFF, 0xFB, 0x59, 0x14, 0x36, 0x17, 0x15, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14,
    0x18, 0x14, 0x18, 0x14, 0x17, 0x15, 0x16, 0x24, 0x8F, 0xFF, 0xF1,  // FreeMono24_D
    0xFF, 0xFF, 0xFB, 0xA5, 0x17, 0x15, 0x17, 0x15, 0x17, 0x15, 0x1D, 0x13, 0x19, 0x59, 0x13, 0x19, 0x13, 0x19, 0x1D, 0x17,
    0x15, 0x17, 0x15, 0x17, 0x13, 0xBF, 0xFF, 0xD0,  // FreeMono24_E
    0xFF, 0xFF, 0xFB, 0xA5, 0x17, 0x15, 0x17, 0x15, 0x17, 0x15, 0x1D, 0x13, 0x19, 0x59, 0x13, 0x19, 0x13, 0x19, 0x1D, 0x1D,
    0x1D, 0x1B, 0x7F, 0xFF, 0xF2,  // FreeMono24_F
    0xFF, 0xFF, 0xFF, 0xE4, 0x82, 0x33, 0x51, 0x71, 0x41, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0x55, 0x31, 0x81, 0x41, 0x81, 0x42,
    0x71, 0x52, 0x61, 0x68, 0xFF, 0xE0,  // FreeMono24_G
    0xFF, 0xFF, 0xFB, 0x34, 0x35, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x86, 0x16, 0x16, 0x16, 0x16,
    0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x14, 0x53, 0x4F, 0xFF, 0xC0,  // FreeMono24_H
    0xFF, 0xFF, 0xFC, 0x8A, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x19, 0x9F, 0xFF, 0xD0,  // FreeMono24_I
    0xFF, 0xFF, 0xFF, 0x07, 0xB1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0xD1, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71, 0x51, 0x71, 0x52,
    0x51, 0x85, 0xFF, 0xFF, 0x10,  // FreeMono24_J
    0xFF, 0xFF, 0xFB, 0x43, 0x44, 0x17, 0x15, 0x16, 0x16, 0x14, 0x27, 0x13, 0x28, 0x12, 0x29, 0x11, 0x2A, 0x22, 0x28, 0x14,
    0x27, 0x15, 0x17, 0x16, 0x16, 0x16, 0x16, 0x16, 0x23, 0x55, 0x3F, 0xFF, 0xB0,  // FreeMono24_K
    0xFF, 0xFF, 0xFB, 0x6A, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x17, 0x15, 0x17, 0x15, 0x17, 0x15, 0x17, 0x13,
    0xBF, 0xFF, 0xC0,  // FreeMono24_L
    0xFF, 0xFF, 0xFA, 0x37, 0x23, 0x27, 0x32, 0x26, 0x11, 0x13, 0x11, 0x15, 0x11, 0x13, 0x11, 0x14, 0x12, 0x13, 0x12, 0x13,
    0x12, 0x13, 0x12, 0x12, 0x13, 0x13, 0x13, 0x11, 0x13, 0x13, 0x13, 0x24, 0x13, 0x14, 0x14, 0x13, 0x19, 0x13, 0x19, 0x13,
    0x19, 0x11, 0x54, 0x5F, 0xFF, 0xB0,  // FreeMono24_M
    0xFF, 0xFF, 0xFA, 0x35, 0x43, 0x27, 0x14, 0x11, 0x16, 0x14, 0x11, 0x25, 0x14, 0x12, 0x15, 0x14, 0x13, 0x14, 0x14, 0x13,
    0x14, 0x14, 0x14, 0x13, 0x14, 0x14, 0x22, 0x14, 0x15, 0x12, 0x14, 0x16, 0x11, 0x14, 0x16, 0x11, 0x14, 0x17, 0x23, 0x54,
    0x2F, 0xFF, 0xD0,  // FreeMono24_N
    0xFF, 0xFF, 0xFF, 0xD4, 0x92, 0x32, 0x61, 0x62, 0x41, 0x81, 0x41, 0x91, 0x21, 0xA1, 0x21, 0xA1, 0x21, 0xA1, 0x21, 0xA1,
    0x22, 0x91, 0x31, 0x82, 0x32, 0x71, 0x52, 0x51, 0x76, 0xFF, 0xF1,  // FreeMono24_O
    0xFF, 0xFF, 0xFB, 0x69, 0x14, 0x36, 0x16, 0x16, 0x17, 0x15, 0x17, 0x15, 0x17, 0x15, 0x16, 0x16, 0x77, 0x1D, 0x1D, 0x1D,
    0x1D, 0x1B, 0x7F, 0xFF, 0xF2,  // FreeMono24_P
    0xFF, 0xFF, 0xFE, 0x49, 0x23, 0x26, 0x16, 0x24, 0x18, 0x14, 0x19, 0x12, 0x1A, 0x12, 0x1A, 0x12, 0x1A, 0x12, 0x1A, 0x12,
    0x1A, 0x13, 0x18, 0x23, 0x27, 0x15, 0x25, 0x17, 0x6A, 0x1B, 0x62, 0x15, 0x14, 0x3F, 0x10,  // FreeMono24_Q
    0xFF, 0xFF, 0xFB, 0x69, 0x14, 0x36, 0x16, 0x16, 0x17, 0x15, 0x17, 0x15, 0x16, 0x25, 0x15, 0x26, 0x68, 0x14, 0x27, 0x15,
    0x26, 0x16, 0x16, 0x17, 0x15, 0x17, 0x13, 0x56, 0x2F, 0xFF, 0xB0,  // FreeMono24_R
    0xFF, 0xFF, 0xFF, 0xD4, 0x92, 0x33, 0x51, 0x62, 0x51, 0x71, 0x51, 0xD2, 0xD3, 0xE4, 0xD2, 0xD1, 0x41, 0x81, 0x41, 0x81,
    0x42, 0x62, 0x41, 0x16, 0xFF, 0xF1,  // FreeMono24_S
    0xFF, 0xFF, 0xFB, 0xB3, 0x14, 0x14, 0x13, 0x14, 0x14, 0x13, 0x14, 0x14, 0x18, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D,
    0x1D, 0x1A, 0x7F, 0xFF, 0xE0,  // FreeMono24_T
    0xFF, 0xFF, 0xFA, 0x44, 0x43, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14, 0x18, 0x14, 0x18,
    0x14, 0x18, 0x14, 0x27, 0x15, 0x16, 0x25, 0x25, 0x17, 0x6F, 0xFF, 0xF0,  // FreeMono24_U
    0xFF, 0xFF, 0xFA, 0x45, 0x42, 0x19, 0x13, 0x18, 0x14, 0x18, 0x15, 0x17, 0x15, 0x16, 0x17, 0x15, 0x17, 0x14, 0x18, 0x14,
    0x19, 0x13, 0x19, 0x12, 0x1A, 0x21, 0x1B, 0x2C, 0x2F, 0xFF, 0xF2,  // FreeMono24_V
    0xFF, 0xFF, 0xFA, 0x45, 0x32, 0x1A, 0x13, 0x19, 0x13, 0x13, 0x24, 0x13, 0x13, 0x24, 0x13, 0x13, 0x11, 0x12, 0x14, 0x13,
    0x11, 0x12, 0x14, 0x12, 0x12, 0x12, 0x14, 0x12, 0x12, 0x12, 0x14, 0x12, 0x13, 0x11, 0x15, 0x24, 0x11, 0x15, 0x24, 0x11,
    0x15, 0x24, 0x11, 0x15, 0x25, 0x2F, 0xFF, 0xD0,  // FreeMono24_W
    0xFF, 0xFF, 0xFB, 0x35, 0x33, 0x27, 0x15, 0x16, 0x17, 0x14, 0x28, 0x13, 0x19, 0x21, 0x1B, 0x2C, 0x2B, 0x21, 0x1A, 0x12,
    0x28, 0x14, 0x17, 0x16, 0x15, 0x27, 0x13, 0x44, 0x4F, 0xFF, 0xC0,  // FreeMono24_X
    0xFF, 0xFF, 0xFB, 0x35, 0x33, 0x27, 0x15, 0x16, 0x17, 0x14, 0x27, 0x23, 0x19, 0x12, 0x1B, 0x11, 0x1B, 0x2D, 0x1D, 0x1D,
    0x1D, 0x1D, 0x1A, 0x7F, 0xFF, 0xE0,  // FreeMono24_Y
    0xFF, 0xFF, 0xFC, 0x86, 0x16, 0x16, 0x16, 0x16, 0x15, 0x17, 0x14, 0x1D, 0x1C, 0x1C, 0x1C, 0x2C, 0x15, 0x16, 0x16, 0x15,
    0x17, 0x15, 0x17, 0x14, 0xAF, 0xFF, 0xD0,  // FreeMono24_Z
};
/*
    <Generate from ./font_table_index.tpl>
    generate font_table_t struct: [index]
    font: FreeMono
    size: 24
    calc_margin: False
    encoding method: rle

    width: 14
    height: 24
*/

typedef struct{
    uint16_t bmp_index;
}font_table_t;

static const font_table_t freemono24_table[] = {
    {0},  // FreeMono24_0
    {33},  // FreeMono24_1
    {56},  // FreeMono24_2
    {80},  // FreeMono24_3
    {103},  // FreeMono24_4
    {132},  // FreeMono24_5
    {153},  // FreeMono24_6
    {183},  // FreeMono24_7
    {205},  // FreeMono24_8
    {237},  // FreeMono24_9
    {265},  // FreeMono24_colon
    {280},  // FreeMono24_a
    {302},  // FreeMono24_b
    {333},  // FreeMono24_c
    {354},  // FreeMono24_d
    {384},  // FreeMono24_e
    {405},  // FreeMono24_f
    {424},  // FreeMono24_g
    {455},  // FreeMono24_h
    {484},  // FreeMono24_i
    {503},  // FreeMono24_j
    {524},  // FreeMono24_k
    {552},  // FreeMono24_l
    {571},  // FreeMono24_m
    {607},  // FreeMono24_n
    {634},  // FreeMono24_o
    {659},  // FreeMono24_p
    {690},  // FreeMono24_q
    {720},  // FreeMono24_r
    {740},  // FreeMono24_s
    {762},  // FreeMono24_t
    {781},  // FreeMono24_u
    {809},  // FreeMono24_v
    {835},  // FreeMono24_w
    {870},  // FreeMono24_x
    {895},  // FreeMono24_y
    {923},  // FreeMono24_z
    {944},  // FreeMono24_A
    {974},  // FreeMono24_B
    {1004},  // FreeMono24_C
    {1028},  // FreeMono24_D
    {1059},  // FreeMono24_E
    {1087},  // FreeMono24_F
    {1112},  // FreeMono24_G
    {1138},  // FreeMono24_H
    {1170},  // FreeMono24_I
    {1189},  // FreeMono24_J
    {1214},  // FreeMono24_K
    {1247},  // FreeMono24_L
    {1270},  // FreeMono24_M
    {1316},  // FreeMono24_N
    {1359},  // FreeMono24_O
    {1390},  // FreeMono24_P
    {1415},  // FreeMono24_Q
    {1450},  // FreeMono24_R
    {1481},  // FreeMono24_S
    {1507},  // FreeMono24_T
    {1532},  // FreeMono24_U
    {1564},  // FreeMono24_V
    {1595},  // FreeMono24_W
    {1643},  // FreeMono24_X
    {1674},  // FreeMono24_Y
    {1700},  // FreeMono24_Z
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
    else if(c >= 'a' && c <= 'z')
    {
        t = &freemono24_table[((c-'a')+10+1)];
    }
    else if(c >= 'A' && c <= 'Z')
    {
        t = &freemono24_table[((c-'A')+10+1+26)];
    }
    else
    {
        return false;
    }
    
    sym->bmp_index = t->bmp_index;
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
    .lookup =freemono24_lookup
};
