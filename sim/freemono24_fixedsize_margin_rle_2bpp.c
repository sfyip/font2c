/*
    <Generate from ./bmp.tpl>
    generate font bitmap
    font: FreeMono
    size: 24
    calc_margin: True
    encoding method: rle

    width: 14
    height: 24
*/

#include "font.h"

#define FREEMONO24_WIDTH     14
#define FREEMONO24_HEIGHT    24

static const uint8_t freemono24_bmp[] = {
    0x31, 0x11, 0x15, 0x11, 0x11, 0x11, 0x31, 0x14, 0x11, 0x21, 0x15, 0x12, 0x16, 0x11, 0x11, 0x61, 0x11, 0x16, 0x11, 0x11,
    0x61, 0x11, 0x16, 0x11, 0x11, 0x61, 0x11, 0x16, 0x11, 0x11, 0x61, 0x11, 0x25, 0x13, 0x11, 0x31, 0x14, 0x12, 0x11, 0x62,  // FreeMono24_0
    0x31, 0x16, 0x11, 0x15, 0x11, 0x11, 0x41, 0x11, 0x11, 0x41, 0x21, 0x17, 0x11, 0x71, 0x17, 0x11, 0x71, 0x17, 0x11, 0x71,
    0x17, 0x11, 0x71, 0x17, 0x11, 0x48, 0x10,  // FreeMono24_1
    0x31, 0x21, 0x41, 0x11, 0x11, 0x11, 0x31, 0x51, 0x11, 0x11, 0x61, 0x18, 0x11, 0x81, 0x82, 0x72, 0x72, 0x72, 0x72, 0x72,
    0x71, 0x17, 0x11, 0x61, 0x19, 0x10,  // FreeMono24_2
    0x31, 0x21, 0x13, 0x11, 0x12, 0x11, 0x12, 0x16, 0x19, 0x11, 0x81, 0x18, 0x15, 0x12, 0x16, 0x11, 0x11, 0x91, 0x19, 0x11,
    0x91, 0x91, 0x81, 0x35, 0x11, 0x21, 0x22, 0x11, 0x62,  // FreeMono24_3
    0x62, 0x72, 0x17, 0x11, 0x16, 0x11, 0x11, 0x51, 0x12, 0x15, 0x13, 0x14, 0x11, 0x31, 0x41, 0x41, 0x31, 0x14, 0x12, 0x11,
    0x51, 0x21, 0x81, 0x71, 0x91, 0x91, 0x61, 0x41,  // FreeMono24_4
    0x11, 0x16, 0x21, 0x18, 0x11, 0x81, 0x18, 0x11, 0x13, 0x41, 0x23, 0x11, 0x31, 0x51, 0x91, 0x19, 0x19, 0x19, 0x18, 0x12,
    0x11, 0x41, 0x13, 0x22, 0x11, 0x62,  // FreeMono24_5
    0x51, 0x21, 0x31, 0x11, 0x21, 0x22, 0x61, 0x17, 0x17, 0x11, 0x71, 0x11, 0x12, 0x12, 0x11, 0x11, 0x21, 0x11, 0x34, 0x31,
    0x61, 0x11, 0x61, 0x11, 0x61, 0x11, 0x61, 0x11, 0x14, 0x11, 0x21, 0x12, 0x11, 0x52,  // FreeMono24_6
    0x01, 0x16, 0x13, 0x61, 0x18, 0x18, 0x11, 0x81, 0x18, 0x18, 0x11, 0x81, 0x18, 0x19, 0x18, 0x28, 0x19, 0x18, 0x11,  // FreeMono24_7
    0x21, 0x21, 0x41, 0x11, 0x11, 0x11, 0x12, 0x51, 0x11, 0x61, 0x11, 0x61, 0x11, 0x15, 0x12, 0x11, 0x21, 0x11, 0x34, 0x13,
    0x11, 0x31, 0x11, 0x16, 0x11, 0x16, 0x12, 0x61, 0x11, 0x61, 0x21, 0x41, 0x12, 0x11, 0x21, 0x15, 0x20,  // FreeMono24_8
    0x21, 0x11, 0x14, 0x11, 0x11, 0x11, 0x12, 0x15, 0x11, 0x11, 0x51, 0x21, 0x61, 0x11, 0x61, 0x11, 0x52, 0x11, 0x13, 0x32,
    0x41, 0x11, 0x81, 0x71, 0x17, 0x11, 0x62, 0x61, 0x12, 0x12, 0x21, 0x51,  // FreeMono24_9
    0x12, 0x11, 0x31, 0x21, 0xF2, 0x21, 0x13, 0x12, 0x12, 0x10,  // FreeMono24_colon
    0x11, 0x22, 0x11, 0x41, 0x51, 0x1A, 0x1A, 0x13, 0x17, 0x21, 0x11, 0x51, 0x21, 0x71, 0x21, 0x71, 0x21, 0x51, 0x22, 0x11,
    0x31, 0x11, 0x32, 0x30,  // FreeMono24_a
    0x11, 0x11, 0xB1, 0x1B, 0x11, 0xB1, 0x13, 0x26, 0x11, 0x11, 0x12, 0x11, 0x42, 0x11, 0x42, 0x31, 0x11, 0x61, 0x12, 0x27,
    0x11, 0x22, 0x81, 0x21, 0x18, 0x12, 0x27, 0x11, 0x21, 0x17, 0x11, 0x22, 0x11, 0x42, 0x11, 0x21, 0x12, 0x21, 0x19, 0x20,  // FreeMono24_b
    0x21, 0x12, 0x22, 0x22, 0x51, 0x12, 0x17, 0x11, 0x11, 0x71, 0x11, 0xA1, 0xA1, 0xA1, 0x18, 0x11, 0x11, 0x51, 0x11, 0x21,
    0x13, 0x26, 0x30,  // FreeMono24_c
    0x82, 0x1C, 0x1C, 0x17, 0x14, 0x15, 0x22, 0x11, 0x11, 0x41, 0x14, 0x21, 0x31, 0x16, 0x11, 0x21, 0x18, 0x12, 0x11, 0x81,
    0x21, 0x18, 0x12, 0x11, 0x81, 0x31, 0x16, 0x11, 0x41, 0x14, 0x21, 0x52, 0x21, 0x11, 0x35, 0x20,  // FreeMono24_d
    0x32, 0x22, 0x51, 0x14, 0x11, 0x31, 0x16, 0x11, 0x11, 0x18, 0x11, 0x1A, 0x21, 0xB1, 0xB1, 0x1B, 0x11, 0x51, 0x11, 0x31,
    0x13, 0x21, 0x63,  // FreeMono24_e
    0x64, 0x51, 0x15, 0x31, 0x19, 0x11, 0x91, 0x17, 0x81, 0x41, 0x19, 0x11, 0x91, 0x19, 0x11, 0x91, 0x19, 0x11, 0x91, 0x19,
    0x11, 0x61, 0x81,  // FreeMono24_f
    0x21, 0x21, 0x21, 0x12, 0x11, 0x11, 0x51, 0x23, 0x17, 0x11, 0x21, 0x17, 0x22, 0x11, 0x71, 0x12, 0x11, 0x72, 0x31, 0x71,
    0x13, 0x25, 0x11, 0x14, 0x11, 0x11, 0x12, 0x11, 0x51, 0x31, 0x11, 0x1B, 0x11, 0xB1, 0x1A, 0x11, 0x61, 0x41, 0x75,  // FreeMono24_g
    0x01, 0x11, 0x91, 0x11, 0xB1, 0xB1, 0xB1, 0x31, 0x71, 0x11, 0x11, 0x21, 0x42, 0x13, 0x11, 0x41, 0x15, 0x11, 0x31, 0x61,
    0x13, 0x16, 0x11, 0x31, 0x61, 0x13, 0x16, 0x11, 0x31, 0x61, 0x13, 0x16, 0x11, 0x11, 0x31, 0x30,  // FreeMono24_h
    0x41, 0x18, 0x11, 0x82, 0xFA, 0x13, 0x18, 0x11, 0x81, 0x18, 0x11, 0x81, 0x18, 0x11, 0x81, 0x18, 0x11, 0x81, 0x14, 0x19,  // FreeMono24_i
    0x51, 0x71, 0x71, 0xF3, 0x71, 0x61, 0x16, 0x11, 0x61, 0x16, 0x11, 0x61, 0x16, 0x11, 0x61, 0x16, 0x11, 0x61, 0x16, 0x11,
    0x61, 0x61, 0x11, 0x14, 0x10,  // FreeMono24_j
    0x11, 0x1A, 0x11, 0x1A, 0x11, 0xA1, 0x1A, 0x11, 0xA1, 0x12, 0x13, 0x13, 0x11, 0x31, 0x15, 0x11, 0x11, 0x11, 0x61, 0x21,
    0x81, 0x21, 0x82, 0x12, 0x71, 0x12, 0x26, 0x11, 0x32, 0x51, 0x14, 0x22, 0x12, 0x13, 0x10,  // FreeMono24_k
    0x11, 0x31, 0x53, 0x28, 0x11, 0x81, 0x18, 0x11, 0x81, 0x18, 0x11, 0x81, 0x18, 0x11, 0x81, 0x18, 0x11, 0x81, 0x18, 0x11,
    0x81, 0x14, 0x19,  // FreeMono24_l
    0x51, 0x41, 0x31, 0x12, 0x11, 0x11, 0x11, 0x11, 0x31, 0x11, 0x21, 0x11, 0x21, 0x12, 0x11, 0x31, 0x14, 0x12, 0x11, 0x41,
    0x41, 0x21, 0x14, 0x14, 0x12, 0x11, 0x41, 0x41, 0x21, 0x14, 0x14, 0x12, 0x11, 0x41, 0x41, 0x21, 0x14, 0x14, 0x11, 0x13,
    0x32, 0x32,  // FreeMono24_m
    0x61, 0x51, 0x21, 0x11, 0x12, 0x14, 0x21, 0x41, 0x41, 0x15, 0x11, 0x31, 0x61, 0x13, 0x16, 0x11, 0x31, 0x61, 0x13, 0x16,
    0x11, 0x31, 0x61, 0x13, 0x16, 0x11, 0x11, 0x31, 0x31,  // FreeMono24_n
    0x21, 0x12, 0x21, 0x31, 0x14, 0x11, 0x11, 0x27, 0x11, 0x18, 0x11, 0x18, 0x11, 0x18, 0x11, 0x18, 0x11, 0x27, 0x12, 0x11,
    0x51, 0x13, 0x11, 0x22, 0x16, 0x20,  // FreeMono24_o
    0x01, 0x21, 0x12, 0x21, 0x14, 0x21, 0x14, 0x11, 0x31, 0x17, 0x11, 0x22, 0x81, 0x21, 0x18, 0x12, 0x28, 0x12, 0x11, 0x71,
    0x12, 0x11, 0x16, 0x13, 0x11, 0x11, 0x11, 0x11, 0x11, 0x31, 0x12, 0x31, 0x51, 0x1B, 0x11, 0xB1, 0x1A, 0x11, 0x38, 0x50,  // FreeMono24_p
    0x21, 0x22, 0x11, 0x13, 0x11, 0x11, 0x42, 0x13, 0x17, 0x11, 0x21, 0x18, 0x12, 0x11, 0x81, 0x21, 0x18, 0x13, 0x17, 0x11,
    0x32, 0x62, 0x41, 0x11, 0x11, 0x11, 0x11, 0x51, 0x31, 0x21, 0xC1, 0xC1, 0xC1, 0x91, 0x21, 0x11, 0x76,  // FreeMono24_q
    0x01, 0x32, 0x13, 0x13, 0x11, 0x11, 0x31, 0x32, 0x18, 0x11, 0x91, 0xA1, 0xA1, 0xA1, 0xA1, 0x78, 0x10,  // FreeMono24_r
    0x21, 0x12, 0x21, 0x11, 0x11, 0x51, 0x11, 0x16, 0x11, 0x12, 0x91, 0x31, 0x18, 0x11, 0x19, 0x11, 0x11, 0x71, 0x11, 0x61,
    0x11, 0x12, 0x22, 0x15, 0x20,  // FreeMono24_s
    0x21, 0x19, 0x11, 0x91, 0x17, 0x94, 0x11, 0x91, 0x19, 0x11, 0x91, 0x19, 0x11, 0x91, 0x19, 0x11, 0x91, 0x15, 0x11, 0x31,
    0x13, 0x21, 0x53,  // FreeMono24_t
    0x03, 0x41, 0x21, 0x31, 0x61, 0x13, 0x16, 0x11, 0x31, 0x61, 0x13, 0x16, 0x11, 0x31, 0x61, 0x13, 0x16, 0x11, 0x31, 0x62,
    0x31, 0x14, 0x21, 0x41, 0x22, 0x22, 0x42,  // FreeMono24_u
    0x04, 0x13, 0x41, 0x11, 0x17, 0x14, 0x16, 0x11, 0x42, 0x51, 0x61, 0x41, 0x16, 0x11, 0x31, 0x81, 0x21, 0x18, 0x11, 0x11,
    0x91, 0x11, 0x1A, 0x21,  // FreeMono24_v
    0x03, 0x15, 0x31, 0x11, 0x81, 0x12, 0x14, 0x13, 0x13, 0x11, 0x22, 0x31, 0x31, 0x12, 0x11, 0x12, 0x14, 0x11, 0x11, 0x11,
    0x11, 0x14, 0x11, 0x11, 0x11, 0x11, 0x14, 0x11, 0x12, 0x11, 0x15, 0x11, 0x13, 0x25, 0x11, 0x41, 0x10,  // FreeMono24_w
    0x13, 0x13, 0x31, 0x21, 0x15, 0x11, 0x41, 0x13, 0x11, 0x62, 0x11, 0x92, 0x91, 0x12, 0x71, 0x12, 0x25, 0x11, 0x42, 0x31,
    0x16, 0x21, 0x13, 0x13,  // FreeMono24_x
    0x01, 0x34, 0x13, 0x11, 0x17, 0x13, 0x16, 0x11, 0x31, 0x15, 0x15, 0x14, 0x11, 0x51, 0x13, 0x17, 0x12, 0x11, 0x71, 0x11,
    0x19, 0x11, 0x19, 0x11, 0xA1, 0x1A, 0x1A, 0x11, 0x73, 0x11, 0x16, 0x60,  // FreeMono24_y
    0x08, 0x11, 0x51, 0x11, 0x14, 0x11, 0x61, 0x17, 0x17, 0x11, 0x61, 0x16, 0x11, 0x53, 0x51, 0x18, 0x10,  // FreeMono24_z
    0x35, 0x92, 0x12, 0x1A, 0x31, 0xA1, 0x21, 0xA1, 0x21, 0x18, 0x11, 0x31, 0x81, 0x41, 0x71, 0x14, 0x11, 0x67, 0x16, 0x16,
    0x11, 0x41, 0x16, 0x11, 0x41, 0x81, 0x41, 0x81, 0x11, 0x14, 0x41,  // FreeMono24_A
    0x01, 0x61, 0x42, 0x14, 0x11, 0x14, 0x16, 0x23, 0x17, 0x13, 0x17, 0x13, 0x16, 0x11, 0x31, 0x51, 0x14, 0x14, 0x21, 0x13,
    0x17, 0x11, 0x21, 0x81, 0x21, 0x81, 0x21, 0x71, 0x12, 0x16, 0x11, 0x19, 0x10,  // FreeMono24_B
    0x42, 0x11, 0x15, 0x11, 0x11, 0x11, 0x11, 0x11, 0x21, 0x61, 0x11, 0x11, 0x17, 0x11, 0x11, 0xA1, 0x1A, 0x11, 0xA1, 0x1A,
    0x11, 0xA1, 0x1B, 0x1B, 0x11, 0x71, 0x12, 0x11, 0x51, 0x14, 0x12, 0x21, 0x18, 0x20,  // FreeMono24_C
    0x01, 0x52, 0x41, 0x23, 0x12, 0x41, 0x15, 0x11, 0x31, 0x16, 0x11, 0x21, 0x17, 0x12, 0x11, 0x71, 0x11, 0x11, 0x71, 0x11,
    0x11, 0x71, 0x11, 0x11, 0x71, 0x11, 0x11, 0x71, 0x11, 0x11, 0x71, 0x21, 0x16, 0x11, 0x21, 0x14, 0x11, 0x12, 0x81,  // FreeMono24_D
    0x01, 0x91, 0x12, 0x17, 0x13, 0x17, 0x13, 0x17, 0x13, 0x17, 0x13, 0x13, 0x11, 0x61, 0x31, 0x16, 0x13, 0x11, 0x61, 0x31,
    0x16, 0x1B, 0x17, 0x22, 0x17, 0x11, 0x21, 0x71, 0x1B,  // FreeMono24_E
    0x01, 0xA1, 0x21, 0x71, 0x12, 0x17, 0x11, 0x21, 0x72, 0x21, 0xB1, 0x31, 0x16, 0x13, 0x11, 0x61, 0x31, 0x16, 0x13, 0x11,
    0x61, 0xB1, 0xB1, 0xB1, 0x97,  // FreeMono24_F
    0x41, 0x11, 0x26, 0x11, 0x11, 0x11, 0x12, 0x13, 0x17, 0x11, 0x21, 0x17, 0x22, 0x1B, 0x11, 0xB1, 0x1B, 0x11, 0xB1, 0x14,
    0x15, 0x21, 0x81, 0x12, 0x18, 0x11, 0x22, 0x71, 0x13, 0x11, 0x61, 0x14, 0x12, 0x22, 0x18, 0x20,  // FreeMono24_G
    0x11, 0x21, 0x33, 0x11, 0x11, 0x23, 0x12, 0x12, 0x16, 0x11, 0x31, 0x61, 0x13, 0x16, 0x11, 0x31, 0x61, 0x13, 0x16, 0x11,
    0x31, 0x61, 0x13, 0x16, 0x11, 0x31, 0x61, 0x13, 0x16, 0x11, 0x31, 0x61, 0x13, 0x16, 0x11, 0x11, 0x42, 0x10,  // FreeMono24_H
    0x01, 0x74, 0x11, 0x34, 0x11, 0x71, 0x17, 0x11, 0x71, 0x17, 0x11, 0x71, 0x17, 0x11, 0x71, 0x17, 0x11, 0x71, 0x17, 0x11,
    0x48, 0x10,  // FreeMono24_I
    0x44, 0x13, 0x81, 0xB1, 0xB1, 0xB1, 0xB1, 0xB1, 0x31, 0x71, 0x31, 0x71, 0x31, 0x71, 0x31, 0x61, 0x13, 0x11, 0x51, 0x51,
    0x21, 0x21, 0x73,  // FreeMono24_J
    0x01, 0x43, 0x12, 0x11, 0x21, 0x23, 0x12, 0x13, 0x15, 0x11, 0x51, 0x42, 0x61, 0x32, 0x71, 0x21, 0x18, 0x11, 0x21, 0x82,
    0x11, 0x11, 0x71, 0x41, 0x16, 0x15, 0x16, 0x15, 0x11, 0x51, 0x61, 0x51, 0x62, 0x25, 0x14, 0x21,  // FreeMono24_K
    0x16, 0x62, 0x11, 0x28, 0x11, 0xA1, 0x1A, 0x11, 0xA1, 0x1A, 0x11, 0xA1, 0x1A, 0x11, 0x61, 0x31, 0x16, 0x13, 0x11, 0x61,
    0x31, 0x16, 0x13, 0x11, 0x61, 0x10,  // FreeMono24_L
    0x12, 0x17, 0x21, 0x11, 0x26, 0x12, 0x11, 0x12, 0x15, 0x11, 0x12, 0x11, 0x11, 0x41, 0x11, 0x12, 0x11, 0x11, 0x13, 0x12,
    0x12, 0x11, 0x11, 0x12, 0x11, 0x21, 0x21, 0x12, 0x12, 0x11, 0x21, 0x21, 0x12, 0x11, 0x11, 0x31, 0x21, 0x13, 0x11, 0x13,
    0x12, 0x11, 0x31, 0x14, 0x12, 0x11, 0x91, 0x21, 0x19, 0x12, 0x11, 0x91, 0x11, 0x44, 0x10,  // FreeMono24_M
    0x02, 0x15, 0x41, 0x21, 0x42, 0x11, 0x12, 0x16, 0x12, 0x11, 0x25, 0x12, 0x11, 0x11, 0x51, 0x21, 0x11, 0x11, 0x41, 0x21,
    0x12, 0x11, 0x31, 0x21, 0x13, 0x13, 0x12, 0x11, 0x32, 0x21, 0x21, 0x14, 0x12, 0x12, 0x11, 0x41, 0x11, 0x12, 0x11, 0x51,
    0x11, 0x21, 0x16, 0x21, 0x41, 0x41, 0x10,  // FreeMono24_N
    0x41, 0x21, 0x15, 0x11, 0x12, 0x11, 0x14, 0x16, 0x22, 0x11, 0x71, 0x21, 0x81, 0x21, 0x91, 0x11, 0x92, 0xA1, 0x11, 0x91,
    0x11, 0x91, 0x11, 0x82, 0x12, 0x71, 0x31, 0x14, 0x11, 0x14, 0x11, 0x22, 0x82,  // FreeMono24_O
    0x01, 0x61, 0x32, 0x14, 0x11, 0x13, 0x16, 0x11, 0x21, 0x71, 0x21, 0x71, 0x21, 0x61, 0x12, 0x16, 0x11, 0x21, 0x42, 0x13,
    0x15, 0x51, 0xA1, 0xA1, 0xA1, 0x87,  // FreeMono24_P
    0x41, 0x21, 0x15, 0x11, 0x12, 0x11, 0x14, 0x16, 0x22, 0x11, 0x71, 0x21, 0x81, 0x21, 0x91, 0x11, 0x92, 0xA1, 0x11, 0x91,
    0x11, 0x91, 0x11, 0x82, 0x12, 0x71, 0x31, 0x14, 0x11, 0x14, 0x11, 0x22, 0x71, 0x11, 0x81, 0x41, 0x21, 0x21, 0x11, 0x21,
    0x30,  // FreeMono24_Q
    0x01, 0x61, 0x52, 0x14, 0x11, 0x15, 0x16, 0x11, 0x41, 0x71, 0x41, 0x71, 0x41, 0x62, 0x41, 0x41, 0x25, 0x61, 0x61, 0x41,
    0x16, 0x15, 0x11, 0x51, 0x61, 0x51, 0x61, 0x14, 0x17, 0x11, 0x15, 0x15, 0x20,  // FreeMono24_R
    0x31, 0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 0x21, 0x11, 0x15, 0x11, 0x11, 0x61, 0x11, 0x19, 0x11, 0x91, 0x11, 0x18, 0x11,
    0x21, 0x92, 0x91, 0x18, 0x21, 0x73, 0x15, 0x11, 0x11, 0x11, 0x22, 0x15, 0x30,  // FreeMono24_S
    0x1A, 0x21, 0x31, 0x13, 0x21, 0x13, 0x11, 0x31, 0x11, 0x13, 0x11, 0x41, 0x51, 0x1A, 0x11, 0xA1, 0x1A, 0x11, 0xA1, 0x1A,
    0x11, 0xA1, 0x1A, 0x11, 0xA1, 0x17, 0x16, 0x10,  // FreeMono24_T
    0x01, 0x11, 0x23, 0x21, 0x11, 0x11, 0x71, 0x21, 0x17, 0x12, 0x11, 0x71, 0x21, 0x17, 0x12, 0x11, 0x71, 0x21, 0x17, 0x12,
    0x11, 0x71, 0x21, 0x17, 0x12, 0x11, 0x71, 0x31, 0x62, 0x32, 0x41, 0x15, 0x11, 0x22, 0x82,  // FreeMono24_U
    0x01, 0x31, 0x41, 0x32, 0x11, 0x24, 0x21, 0x11, 0x21, 0x81, 0x13, 0x11, 0x71, 0x51, 0x61, 0x15, 0x16, 0x16, 0x11, 0x51,
    0x71, 0x41, 0x17, 0x11, 0x31, 0x81, 0x12, 0x11, 0x91, 0x21, 0xA2, 0x11, 0xB1, 0x11, 0xB2,  // FreeMono24_V
    0x04, 0x41, 0x31, 0x22, 0x42, 0x11, 0x21, 0x91, 0x11, 0x13, 0x11, 0x31, 0x12, 0x13, 0x21, 0x21, 0x12, 0x13, 0x11, 0x12,
    0x11, 0x21, 0x21, 0x11, 0x12, 0x11, 0x21, 0x21, 0x11, 0x12, 0x13, 0x11, 0x11, 0x21, 0x11, 0x13, 0x11, 0x11, 0x21, 0x11,
    0x13, 0x12, 0x13, 0x11, 0x13, 0x11, 0x14, 0x11, 0x13, 0x12, 0x41, 0x11, 0x41, 0x14, 0x11, 0x10,  // FreeMono24_W
    0x01, 0x21, 0x41, 0x21, 0x11, 0x21, 0x41, 0x11, 0x13, 0x11, 0x51, 0x15, 0x14, 0x26, 0x11, 0x21, 0x18, 0x21, 0x1A, 0x21,
    0xA2, 0xA2, 0x11, 0x81, 0x12, 0x27, 0x14, 0x11, 0x51, 0x15, 0x14, 0x26, 0x11, 0x24, 0x13, 0x41,  // FreeMono24_X
    0x01, 0x21, 0x41, 0x22, 0x11, 0x14, 0x11, 0x11, 0x21, 0x15, 0x11, 0x41, 0x41, 0x15, 0x23, 0x17, 0x11, 0x11, 0x18, 0x12,
    0x91, 0x1A, 0x11, 0xA1, 0x1A, 0x11, 0xA1, 0x1A, 0x11, 0x71, 0x61,  // FreeMono24_Y
    0x18, 0x21, 0x61, 0x11, 0x15, 0x11, 0x21, 0x51, 0x31, 0x41, 0x17, 0x11, 0x81, 0x81, 0x17, 0x27, 0x11, 0x51, 0x21, 0x61,
    0x11, 0x16, 0x11, 0x17, 0x11,  // FreeMono24_Z
};
/*
    <Generate from ./bpp.tpl>
    generate font bpp
    font: FreeMono
    size: 24
    calc_margin: True
    encoding method: rle

    width: 14
    height: 24
*/

static const uint8_t freemono24_bpp[] = {
    0x1B, 0x8B, 0x4B, 0x1C, 0x63, 0x4C, 0xC9, 0x31, 0x98, 0x66, 0x19, 0x86, 0x71, 0x8C, 0x63, 0x34, 0x8C, 0xD3, 0x4E, 0xE1,  // FreeMono24_0
    0x24, 0xB8, 0xB6, 0x2C, 0x61, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0x63, 0x80,  // FreeMono24_1
    0x2E, 0x1D, 0x1B, 0x31, 0xC6, 0x24, 0x93, 0x22, 0x22, 0x22, 0x38, 0xD2, 0x74,  // FreeMono24_2
    0x2E, 0x47, 0x47, 0x48, 0xC9, 0x24, 0xC6, 0xC6, 0xE1, 0xC6, 0x33, 0x18, 0x71, 0xEE, 0x10,  // FreeMono24_3
    0x22, 0xCC, 0xCD, 0x31, 0x8C, 0xCC, 0x93, 0x33, 0x24, 0xC6, 0x31, 0xD3, 0x33, 0x1D,  // FreeMono24_4
    0x1D, 0x18, 0x61, 0x86, 0x11, 0xED, 0x13, 0x18, 0xCC, 0xC9, 0xD1, 0xCE, 0xE1,  // FreeMono24_5
    0x2E, 0x2E, 0x12, 0x18, 0xC6, 0x24, 0x64, 0x9B, 0x6C, 0x8B, 0x39, 0x36, 0x33, 0x31, 0xCD, 0x1E, 0xD1,  // FreeMono24_6
    0x19, 0xD2, 0x4C, 0x62, 0x4C, 0x72, 0x4C, 0xC8, 0xCC, 0x60,  // FreeMono24_7
    0x1E, 0x39, 0x1D, 0x23, 0x32, 0x72, 0x64, 0xCD, 0x1D, 0x34, 0xD3, 0x4C, 0xDC, 0x61, 0xB2, 0x71, 0xC7, 0xB8, 0x40,  // FreeMono24_8
    0x1B, 0x87, 0x47, 0x4C, 0xC9, 0x19, 0x39, 0x36, 0x33, 0x48, 0xD3, 0x31, 0x8D, 0x23, 0x86, 0xD1,  // FreeMono24_9
    0x36, 0xCE, 0x26, 0xDE, 0x10,  // FreeMono24_colon
    0x2E, 0xE1, 0x1C, 0xCC, 0x72, 0xD3, 0x33, 0x33, 0x31, 0xC7, 0xB8, 0xC4,  // FreeMono24_a
    0x1D, 0x24, 0x92, 0x44, 0x92, 0xEE, 0x2D, 0x22, 0xD3, 0x48, 0x72, 0x32, 0x4C, 0x87, 0x2C, 0xD2, 0xD2, 0x1D, 0x3B, 0x84,  // FreeMono24_b
    0x1E, 0xE2, 0x2D, 0x8D, 0xD1, 0x33, 0x31, 0x84, 0xE1, 0xD2, 0xEC, 0x40,  // FreeMono24_c
    0x1C, 0xCC, 0x4C, 0xED, 0x33, 0x4B, 0x34, 0xB1, 0xCC, 0x63, 0x18, 0xC7, 0x33, 0x4B, 0x34, 0xB3, 0xB4, 0xC4,  // FreeMono24_d
    0x3B, 0x34, 0x73, 0x47, 0x1C, 0xC7, 0x63, 0x34, 0xD1, 0xD2, 0xED, 0x10,  // FreeMono24_e
    0x12, 0xE1, 0xC6, 0x18, 0xE1, 0x86, 0x18, 0x61, 0x86, 0x18, 0x61, 0xD0,  // FreeMono24_f
    0x1E, 0xC7, 0x47, 0x38, 0xCE, 0x18, 0x86, 0x18, 0x62, 0x33, 0x88, 0xB8, 0xB4, 0x66, 0x19, 0x18, 0x62, 0x47, 0x1B, 0x10,  // FreeMono24_g
    0x19, 0x1B, 0x33, 0x31, 0x32, 0xED, 0x34, 0x73, 0x49, 0x32, 0x4C, 0x93, 0x24, 0xC9, 0x32, 0x4C, 0x92, 0xE0,  // FreeMono24_h
    0x38, 0xE1, 0x2E, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x2C,  // FreeMono24_i
    0x33, 0x23, 0x49, 0x24, 0x92, 0x49, 0x24, 0x92, 0x49, 0x24, 0xC7, 0x1B,  // FreeMono24_j
    0x18, 0x74, 0x92, 0x49, 0x24, 0x78, 0x93, 0x49, 0x1D, 0x27, 0x2E, 0x22, 0x24, 0x89, 0x22, 0x48, 0x74, 0x40,  // FreeMono24_k
    0x19, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0xB0,  // FreeMono24_l
    0x11, 0x2E, 0xEC, 0xBB, 0x1E, 0x2E, 0x18, 0x71, 0xCC, 0x62, 0x31, 0x88, 0xC6, 0x23, 0x18, 0x8C, 0x62, 0x31, 0x88, 0xCB,
    0x33,  // FreeMono24_m
    0x11, 0xCB, 0xB4, 0xD3, 0x34, 0x93, 0x18, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xC6, 0x2E, 0x20,  // FreeMono24_n
    0x2E, 0xD3, 0x87, 0x48, 0xCC, 0x9C, 0x6C, 0x6C, 0x98, 0xCD, 0x34, 0xBB, 0x44,  // FreeMono24_o
    0x1D, 0x3B, 0x8B, 0x4B, 0x2C, 0x92, 0x32, 0x4C, 0x8C, 0xB1, 0x8B, 0x8C, 0x9B, 0x46, 0xD2, 0x49, 0x24, 0x92, 0x4B, 0x84,  // FreeMono24_p
    0x1E, 0xE3, 0x1D, 0x2C, 0xCB, 0x18, 0xC6, 0x31, 0x8C, 0xC7, 0x23, 0x2D, 0x1B, 0x31, 0x93, 0x33, 0x31, 0xB9, 0x10,  // FreeMono24_q
    0x1C, 0xB4, 0xCE, 0x23, 0x4D, 0x33, 0x33, 0x33, 0x80,  // FreeMono24_r
    0x2E, 0xE4, 0xE3, 0x4C, 0x92, 0x1E, 0x46, 0xC7, 0x93, 0xB3, 0x9B, 0xB4, 0x40,  // FreeMono24_s
    0x24, 0x92, 0x4C, 0x92, 0x49, 0x24, 0x92, 0x46, 0x1C, 0x62, 0xED, 0x10,  // FreeMono24_t
    0x32, 0xE3, 0x18, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xC6, 0x32, 0x34, 0xE3, 0xB7, 0x10,  // FreeMono24_u
    0x34, 0xE1, 0x8C, 0xC9, 0x23, 0x32, 0x49, 0x33, 0x18, 0x93, 0x1D, 0x8D,  // FreeMono24_v
    0x38, 0xE3, 0x24, 0xC4, 0xC9, 0x33, 0x18, 0xE4, 0xCC, 0x63, 0x18, 0xCD, 0x32, 0x49, 0xC6, 0xC7, 0x8C, 0x73, 0x80,  // FreeMono24_w
    0x38, 0xD3, 0x8D, 0x38, 0xD2, 0x33, 0x1E, 0x1C, 0x87, 0x21, 0xC8, 0xB8,  // FreeMono24_x
    0x2C, 0xB1, 0x8C, 0xC9, 0x18, 0xCC, 0x91, 0x8C, 0xC9, 0x18, 0xCE, 0x47, 0x18, 0xC6, 0x2E, 0x44,  // FreeMono24_y
    0x37, 0x1C, 0xC7, 0x1C, 0xCD, 0x34, 0xD2, 0x1B, 0x80,  // FreeMono24_z
    0x21, 0xB4, 0x63, 0x32, 0x24, 0x93, 0x33, 0x18, 0x62, 0xCD, 0xD1, 0x86, 0x33, 0x32, 0x4B, 0x20,  // FreeMono24_A
    0x19, 0x1D, 0xB8, 0xC8, 0xCC, 0xCC, 0xC9, 0x3B, 0x4D, 0xB4, 0xCD, 0x33, 0x33, 0x31, 0xCC, 0x73, 0x80,  // FreeMono24_B
    0x2E, 0x47, 0x91, 0xB9, 0x31, 0xD3, 0x49, 0x31, 0x86, 0x18, 0x61, 0x8C, 0x71, 0x8B, 0x1C, 0x7B, 0x84,  // FreeMono24_C
    0x19, 0x19, 0xB2, 0x47, 0x24, 0x62, 0x4C, 0x92, 0x49, 0x24, 0x92, 0x49, 0x24, 0x92, 0x49, 0x32, 0x4D, 0x24, 0x78, 0xD0,  // FreeMono24_D
    0x19, 0x1D, 0xCC, 0xCC, 0xCC, 0x4C, 0x93, 0xB4, 0xDD, 0x32, 0x4C, 0xC4, 0xC9, 0x32, 0x70,  // FreeMono24_E
    0x18, 0x76, 0x4C, 0x93, 0x13, 0x32, 0x4E, 0xD3, 0x74, 0xC9, 0x33, 0x33, 0x30,  // FreeMono24_F
    0x1B, 0x87, 0x91, 0xB4, 0xCD, 0x34, 0x4C, 0x61, 0x86, 0x18, 0x76, 0x24, 0xC9, 0x22, 0x4E, 0x24, 0xBB, 0x84,  // FreeMono24_G
    0x19, 0x24, 0x74, 0x64, 0xC9, 0x32, 0x4C, 0x93, 0x24, 0xED, 0x36, 0x4C, 0x93, 0x24, 0xC9, 0x32, 0x4C, 0x92, 0xC4,  // FreeMono24_H
    0x19, 0xB4, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x38,  // FreeMono24_I
    0x1D, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x31, 0xCB, 0x31, 0xED, 0x10,  // FreeMono24_J
    0x18, 0x64, 0x74, 0x74, 0xC7, 0x32, 0x32, 0x33, 0x8C, 0xD3, 0x4E, 0x33, 0x8C, 0xCC, 0x63, 0x33, 0x23, 0x4E,  // FreeMono24_K
    0x21, 0xE4, 0x92, 0x49, 0x24, 0x92, 0x49, 0x12, 0x4C, 0x93, 0x24, 0xC9, 0x34,  // FreeMono24_L
    0x24, 0x92, 0xC7, 0x46, 0x4D, 0xC6, 0x31, 0x8C, 0x62, 0x4C, 0xC6, 0x1C, 0x73, 0x18, 0xC9, 0x31, 0x86, 0x33, 0x18, 0xE4,
    0xC6, 0x1C, 0xC6, 0x31, 0x8C, 0x63, 0x2C, 0x40,  // FreeMono24_M
    0x24, 0x9D, 0x1D, 0x2C, 0xC9, 0x8C, 0x93, 0x32, 0x47, 0x32, 0x4D, 0x32, 0x4C, 0xC9, 0x23, 0x24, 0xCC, 0x91, 0xCC, 0x92,
    0x72, 0x4C, 0xE2, 0xC0,  // FreeMono24_N
    0x2E, 0x47, 0x87, 0x8C, 0x8D, 0x37, 0x19, 0x39, 0x33, 0x93, 0x63, 0x32, 0x23, 0x38, 0x74, 0xBB, 0x10,  // FreeMono24_O
    0x19, 0x1D, 0xB4, 0xCD, 0x33, 0x33, 0x31, 0xCC, 0xD3, 0xB4, 0xD3, 0x33, 0x33,  // FreeMono24_P
    0x2E, 0x47, 0x87, 0x8C, 0x8D, 0x37, 0x19, 0x39, 0x33, 0x93, 0x63, 0x32, 0x23, 0x38, 0x74, 0xBB, 0x2D, 0x2E, 0x71, 0x91,
    0x80,  // FreeMono24_Q
    0x19, 0x1D, 0xB4, 0xCD, 0x33, 0x33, 0x32, 0x31, 0x8D, 0x33, 0x8C, 0xE3, 0x33, 0x1C, 0xC9, 0x34, 0xC0,  // FreeMono24_R
    0x2E, 0x44, 0x79, 0x1E, 0x34, 0xE3, 0x18, 0xCE, 0x2E, 0x46, 0xD2, 0x38, 0xD3, 0x4D, 0x8B, 0xB4, 0x40,  // FreeMono24_S
    0x27, 0x6D, 0x98, 0x61, 0x88, 0x62, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x18, 0x78,  // FreeMono24_T
    0x1E, 0x47, 0x49, 0x32, 0x4C, 0x93, 0x24, 0xC9, 0x32, 0x4C, 0x93, 0x24, 0xC6, 0x33, 0x22, 0x1C, 0xBB, 0x10,  // FreeMono24_U
    0x19, 0x19, 0xB4, 0x6D, 0x32, 0x49, 0x33, 0x18, 0xCC, 0x63, 0x32, 0x49, 0x31, 0x86, 0x33, 0x23, 0x39, 0x30,  // FreeMono24_V
    0x21, 0x99, 0x1B, 0x63, 0x18, 0x61, 0x8C, 0xD1, 0x8C, 0xD8, 0x93, 0x18, 0xC9, 0x32, 0x4C, 0xC9, 0x32, 0x4C, 0x92, 0x18,
    0xC6, 0x4C, 0xC6, 0xCD, 0x87, 0x2E, 0x38, 0x74,  // FreeMono24_W
    0x19, 0x19, 0x1D, 0x1B, 0x4D, 0x34, 0xC8, 0x71, 0xC8, 0xCD, 0x32, 0x71, 0xC8, 0xCD, 0x34, 0xC8, 0x73, 0x4D,  // FreeMono24_X
    0x19, 0x19, 0xB4, 0x6D, 0x34, 0xD3, 0x18, 0x8C, 0xD3, 0x4E, 0x2C, 0x61, 0x86, 0x18, 0x61, 0xE0,  // FreeMono24_Y
    0x23, 0x74, 0xC7, 0x33, 0x23, 0x46, 0x33, 0x48, 0x73, 0x33, 0x34, 0xD8, 0xE0,  // FreeMono24_Z
};
/*
    <Generate from ./font_table_margin_index_2bpp.tpl>
    generate font_table_t struct: [margin, index]
    font: FreeMono
    size: 24
    calc_margin: True
    encoding method: rle

    width: 14
    height: 24
*/

typedef struct
{
    uint8_t margin_top      :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_bottom   :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_left     :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_right    :FONT_MARGIN_DATABIT_SIZE;
    uint16_t bmp_index;
    uint16_t bpp_index;
}font_table_t;

static const font_table_t freemono24_table[] = {
    {5, 3, 2, 2, 0, 0},  // FreeMono24_0
    {5, 4, 3, 2, 40, 20},  // FreeMono24_1
    {5, 4, 2, 2, 67, 34},  // FreeMono24_2
    {5, 3, 2, 2, 93, 47},  // FreeMono24_3
    {5, 4, 2, 2, 122, 62},  // FreeMono24_4
    {5, 4, 2, 2, 150, 76},  // FreeMono24_5
    {5, 3, 3, 2, 176, 89},  // FreeMono24_6
    {5, 5, 2, 2, 210, 106},  // FreeMono24_7
    {5, 3, 3, 2, 229, 116},  // FreeMono24_8
    {5, 3, 3, 2, 266, 135},  // FreeMono24_9
    {9, 4, 5, 5, 298, 151},  // FreeMono24_colon
    {9, 4, 2, 1, 308, 156},  // FreeMono24_a
    {5, 4, 0, 1, 332, 168},  // FreeMono24_b
    {9, 4, 2, 1, 372, 188},  // FreeMono24_c
    {5, 4, 1, 0, 395, 200},  // FreeMono24_d
    {9, 4, 1, 1, 431, 218},  // FreeMono24_e
    {5, 4, 2, 1, 454, 230},  // FreeMono24_f
    {9, 0, 1, 0, 477, 242},  // FreeMono24_g
    {5, 4, 1, 1, 516, 262},  // FreeMono24_h
    {5, 4, 2, 2, 552, 280},  // FreeMono24_i
    {5, 0, 3, 3, 572, 290},  // FreeMono24_j
    {5, 4, 1, 1, 597, 302},  // FreeMono24_k
    {5, 4, 2, 2, 632, 320},  // FreeMono24_l
    {9, 4, 0, 0, 655, 332},  // FreeMono24_m
    {9, 4, 1, 1, 697, 353},  // FreeMono24_n
    {9, 4, 2, 1, 726, 368},  // FreeMono24_o
    {9, 0, 0, 1, 752, 381},  // FreeMono24_p
    {9, 0, 1, 0, 792, 401},  // FreeMono24_q
    {10, 4, 2, 1, 829, 420},  // FreeMono24_r
    {9, 4, 2, 2, 846, 429},  // FreeMono24_s
    {6, 4, 1, 2, 871, 442},  // FreeMono24_t
    {9, 4, 1, 1, 894, 454},  // FreeMono24_u
    {10, 4, 1, 0, 921, 468},  // FreeMono24_v
    {10, 4, 1, 0, 945, 480},  // FreeMono24_w
    {10, 4, 1, 1, 982, 499},  // FreeMono24_x
    {9, 0, 1, 1, 1006, 511},  // FreeMono24_y
    {10, 4, 3, 2, 1038, 527},  // FreeMono24_z
    {6, 4, 0, 0, 1055, 536},  // FreeMono24_A
    {6, 4, 1, 1, 1086, 552},  // FreeMono24_B
    {6, 3, 1, 1, 1119, 569},  // FreeMono24_C
    {6, 4, 1, 1, 1153, 586},  // FreeMono24_D
    {6, 4, 1, 1, 1192, 606},  // FreeMono24_E
    {6, 4, 1, 1, 1221, 621},  // FreeMono24_F
    {6, 3, 1, 0, 1246, 634},  // FreeMono24_G
    {6, 4, 1, 1, 1282, 652},  // FreeMono24_H
    {6, 4, 3, 2, 1320, 671},  // FreeMono24_I
    {6, 4, 2, 0, 1342, 682},  // FreeMono24_J
    {6, 4, 1, 0, 1365, 694},  // FreeMono24_K
    {6, 4, 1, 1, 1401, 712},  // FreeMono24_L
    {6, 4, 0, 0, 1427, 725},  // FreeMono24_M
    {6, 4, 1, 1, 1482, 753},  // FreeMono24_N
    {6, 3, 1, 1, 1529, 777},  // FreeMono24_O
    {6, 4, 1, 2, 1562, 794},  // FreeMono24_P
    {6, 1, 1, 1, 1588, 807},  // FreeMono24_Q
    {6, 4, 1, 0, 1629, 828},  // FreeMono24_R
    {6, 3, 2, 2, 1662, 845},  // FreeMono24_S
    {6, 4, 1, 1, 1695, 862},  // FreeMono24_T
    {6, 4, 1, 1, 1723, 876},  // FreeMono24_U
    {6, 4, 0, 0, 1758, 894},  // FreeMono24_V
    {6, 4, 1, 0, 1793, 912},  // FreeMono24_W
    {6, 4, 1, 0, 1849, 940},  // FreeMono24_X
    {6, 4, 1, 1, 1885, 958},  // FreeMono24_Y
    {6, 4, 2, 2, 1916, 974},  // FreeMono24_Z
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

    sym->margin_top = t->margin_top;
    sym->margin_bottom = t->margin_bottom;
    sym->margin_left = t->margin_left;
    sym->margin_right = t->margin_right;
    sym->bmp_index = t->bmp_index;
    sym->bpp_index = t->bpp_index;
    if(IS_LAST(t))
    {
        sym->size = sizeof(freemono24_table) - t->bmp_index;
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
