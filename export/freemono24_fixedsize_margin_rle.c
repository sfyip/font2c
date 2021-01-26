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
    0x33, 0x42, 0x22, 0x31, 0x51, 0x11, 0x61, 0x11, 0x61, 0x11, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x61, 0x12, 0x51, 0x21,
    0x42, 0x35, 0x30,  // FreeMono24_0
    0x32, 0x63, 0x52, 0x11, 0x42, 0x21, 0x41, 0x31, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x49, 0x10,  // FreeMono24_1
    0x34, 0x41, 0x32, 0x21, 0x63, 0x61, 0x81, 0x81, 0x72, 0x62, 0x62, 0x62, 0x62, 0x62, 0x62, 0x61, 0x7A, 0x10,  // FreeMono24_2
    0x34, 0x51, 0x42, 0x21, 0x61, 0x91, 0x91, 0x91, 0x63, 0x73, 0xA1, 0xA1, 0x91, 0x91, 0x93, 0x61, 0x36, 0x40,  // FreeMono24_3
    0x52, 0x51, 0x11, 0x51, 0x11, 0x41, 0x21, 0x41, 0x21, 0x31, 0x31, 0x22, 0x31, 0x21, 0x41, 0x11, 0x51, 0x11, 0x51, 0x18,
    0x61, 0x71, 0x71, 0x54,  // FreeMono24_4
    0x16, 0x31, 0x51, 0x21, 0x81, 0x81, 0x81, 0x86, 0x91, 0x91, 0x81, 0x81, 0x81, 0x73, 0x61, 0x26, 0x30,  // FreeMono24_5
    0x54, 0x33, 0x52, 0x62, 0x71, 0x81, 0x71, 0x32, 0x31, 0x12, 0x22, 0x11, 0x11, 0x53, 0x62, 0x71, 0x11, 0x61, 0x11, 0x61,
    0x21, 0x41, 0x45, 0x20,  // FreeMono24_6
    0x09, 0x62, 0x61, 0x71, 0x71, 0x61, 0x71, 0x71, 0x61, 0x71, 0x71, 0x61, 0x71, 0x71, 0x71, 0x30,  // FreeMono24_7
    0x33, 0x42, 0x31, 0x21, 0x61, 0x11, 0x61, 0x11, 0x61, 0x11, 0x61, 0x21, 0x41, 0x44, 0x41, 0x42, 0x11, 0x61, 0x11, 0x72,
    0x72, 0x61, 0x12, 0x51, 0x26, 0x30,  // FreeMono24_8
    0x33, 0x42, 0x31, 0x31, 0x51, 0x11, 0x72, 0x72, 0x71, 0x11, 0x52, 0x11, 0x43, 0x25, 0x11, 0x81, 0x81, 0x71, 0x72, 0x62,
    0x26, 0x40,  // FreeMono24_9
    0x17, 0x13, 0xF2, 0x21, 0x41, 0x30,  // FreeMono24_colon
    0x17, 0xB1, 0xA1, 0xA1, 0x47, 0x22, 0x61, 0x21, 0x71, 0x21, 0x71, 0x21, 0x62, 0x36, 0x13, 0x20,  // FreeMono24_a
    0x02, 0xB1, 0xB1, 0xB1, 0xB1, 0xB1, 0x26, 0x31, 0x11, 0x52, 0x22, 0x71, 0x22, 0x81, 0x11, 0x91, 0x11, 0x91, 0x12, 0x81,
    0x12, 0x71, 0x21, 0x11, 0x52, 0x12, 0x26, 0x60,  // FreeMono24_b
    0x28, 0x22, 0x52, 0x21, 0x71, 0x11, 0xA1, 0xA1, 0xA1, 0xB1, 0x81, 0x12, 0x61, 0x37, 0x40,  // FreeMono24_c
    0x82, 0xB1, 0xB1, 0xB1, 0xB1, 0x45, 0x21, 0x31, 0x53, 0x21, 0x72, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81, 0x21,
    0x72, 0x31, 0x53, 0x45, 0x23, 0x40,  // FreeMono24_d
    0x26, 0x31, 0x61, 0x11, 0x82, 0x8C, 0x91, 0x91, 0xA1, 0x71, 0x27, 0x50,  // FreeMono24_e
    0x37, 0x31, 0x91, 0x91, 0x69, 0x41, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x68, 0x60,  // FreeMono24_f
    0x25, 0x22, 0x11, 0x51, 0x11, 0x11, 0x72, 0x11, 0x72, 0x11, 0x81, 0x11, 0x72, 0x11, 0x72, 0x12, 0x53, 0x22, 0x32, 0x11,
    0x43, 0x31, 0xA1, 0x91, 0xA1, 0x55, 0x90,  // FreeMono24_g
    0x12, 0xB1, 0xB1, 0xB1, 0xB1, 0xB1, 0x15, 0x52, 0x51, 0x41, 0x61, 0x41, 0x61, 0x41, 0x61, 0x41, 0x61, 0x41, 0x61, 0x41,
    0x61, 0x41, 0x61, 0x25, 0x34, 0x40,  // FreeMono24_h
    0x42, 0x82, 0x82, 0xFA, 0x59, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x14, 0xA2,  // FreeMono24_i
    0x51, 0x61, 0x61, 0xF0, 0x76, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x12,  // FreeMono24_j
    0x02, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0x35, 0x21, 0x41, 0x51, 0x31, 0x61, 0x21, 0x74, 0x72, 0x12, 0x61, 0x32, 0x51, 0x42,
    0x41, 0x52, 0x22, 0x54, 0x30,  // FreeMono24_k
    0x24, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x4A, 0x20,  // FreeMono24_l
    0x07, 0x14, 0x42, 0x32, 0x31, 0x31, 0x41, 0x41, 0x31, 0x41, 0x41, 0x31, 0x41, 0x41, 0x31, 0x41, 0x41, 0x31, 0x41, 0x41,
    0x31, 0x41, 0x41, 0x31, 0x41, 0x41, 0x14, 0x32, 0x32, 0x40,  // FreeMono24_m
    0x12, 0x15, 0x52, 0x51, 0x41, 0x61, 0x41, 0x71, 0x31, 0x71, 0x31, 0x71, 0x31, 0x71, 0x31, 0x71, 0x31, 0x71, 0x15, 0x34,  // FreeMono24_n
    0x26, 0x42, 0x51, 0x22, 0x71, 0x11, 0x81, 0x11, 0x92, 0x92, 0x81, 0x11, 0x81, 0x21, 0x61, 0x46, 0x50,  // FreeMono24_o
    0x02, 0x26, 0x31, 0x11, 0x52, 0x22, 0x71, 0x22, 0x81, 0x11, 0x91, 0x12, 0x81, 0x12, 0x81, 0x13, 0x61, 0x21, 0x12, 0x32,
    0x31, 0x33, 0x51, 0xB1, 0xB1, 0xA5, 0x70,  // FreeMono24_p
    0x26, 0x13, 0x11, 0x53, 0x21, 0x72, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81, 0x22, 0x62, 0x32, 0x32, 0x11, 0x53,
    0x31, 0xB1, 0xB1, 0xB1, 0x94, 0x10,  // FreeMono24_q
    0x13, 0x24, 0x41, 0x12, 0x31, 0x32, 0x91, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0x79, 0x40,  // FreeMono24_r
    0x27, 0x21, 0x61, 0x21, 0x61, 0x22, 0xA4, 0xA2, 0xA2, 0x83, 0x63, 0x17, 0x50,  // FreeMono24_s
    0x21, 0xA1, 0xA1, 0x89, 0x41, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xB1, 0x61, 0x37, 0x20,  // FreeMono24_t
    0x03, 0x44, 0x31, 0x71, 0x31, 0x71, 0x31, 0x71, 0x31, 0x71, 0x31, 0x71, 0x31, 0x71, 0x31, 0x62, 0x31, 0x51, 0x11, 0x45,
    0x22,  // FreeMono24_u
    0x05, 0x35, 0x21, 0x71, 0x41, 0x61, 0x52, 0x51, 0x61, 0x42, 0x61, 0x41, 0x81, 0x31, 0x81, 0x21, 0xA1, 0x11, 0xA2, 0xC0,  // FreeMono24_v
    0x04, 0x54, 0x11, 0x81, 0x31, 0x81, 0x31, 0x32, 0x31, 0x41, 0x22, 0x31, 0x41, 0x21, 0x11, 0x21, 0x41, 0x11, 0x21, 0x11,
    0x51, 0x11, 0x32, 0x51, 0x11, 0x32, 0x61, 0x42, 0x90,  // FreeMono24_w
    0x14, 0x34, 0x22, 0x51, 0x52, 0x31, 0x72, 0x11, 0x92, 0xA3, 0x81, 0x22, 0x61, 0x42, 0x41, 0x62, 0x15, 0x34,  // FreeMono24_x
    0x04, 0x44, 0x21, 0x71, 0x31, 0x61, 0x51, 0x51, 0x51, 0x41, 0x71, 0x31, 0x71, 0x21, 0x91, 0x11, 0x91, 0x11, 0xA1, 0xB1,
    0xA1, 0xB1, 0x76, 0x50,  // FreeMono24_y
    0x08, 0x11, 0x52, 0x11, 0x51, 0x71, 0x71, 0x71, 0x71, 0x71, 0x63, 0x6A, 0x60,  // FreeMono24_z
    0x35, 0xC2, 0xB1, 0x21, 0xA1, 0x21, 0xA1, 0x21, 0x91, 0x41, 0x81, 0x41, 0x81, 0x51, 0x68, 0x61, 0x61, 0x61, 0x71, 0x41,
    0x81, 0x41, 0x81, 0x25, 0x45, 0x40,  // FreeMono24_A
    0x16, 0x71, 0x43, 0x41, 0x62, 0x31, 0x71, 0x31, 0x71, 0x31, 0x62, 0x37, 0x51, 0x43, 0x41, 0x71, 0x31, 0x81, 0x21, 0x81,
    0x21, 0x81, 0x21, 0x71, 0x1A, 0x20,  // FreeMono24_B
    0x34, 0x62, 0x33, 0x21, 0x71, 0x11, 0x81, 0x11, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xB1, 0x81, 0x12, 0x61, 0x46, 0x80,  // FreeMono24_C
    0x15, 0x61, 0x43, 0x31, 0x71, 0x21, 0x81, 0x11, 0x81, 0x11, 0x81, 0x11, 0x81, 0x11, 0x81, 0x11, 0x81, 0x11, 0x81, 0x11,
    0x81, 0x11, 0x71, 0x21, 0x62, 0x18, 0x90,  // FreeMono24_D
    0x1A, 0x21, 0x71, 0x21, 0x71, 0x21, 0x71, 0x21, 0xA1, 0x31, 0x65, 0x61, 0x31, 0x61, 0x31, 0x61, 0xA1, 0x71, 0x21, 0x71,
    0x21, 0x7C, 0x60,  // FreeMono24_E
    0x1A, 0x21, 0x71, 0x21, 0x71, 0x21, 0x71, 0x21, 0xA1, 0x31, 0x65, 0x61, 0x31, 0x61, 0x31, 0x61, 0xA1, 0xA1, 0xA1, 0x87,
    0xA0,  // FreeMono24_F
    0x44, 0x52, 0x33, 0x21, 0x71, 0x11, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0x56, 0x81, 0x11, 0x81, 0x12, 0x71, 0x22, 0x61, 0x38,
    0x70,  // FreeMono24_G
    0x13, 0x43, 0x31, 0x61, 0x41, 0x61, 0x41, 0x61, 0x41, 0x61, 0x41, 0x61, 0x48, 0x41, 0x61, 0x41, 0x61, 0x41, 0x61, 0x41,
    0x61, 0x41, 0x61, 0x41, 0x61, 0x25, 0x34,  // FreeMono24_H
    0x08, 0x51, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x49, 0x20,  // FreeMono24_I
    0x47, 0x81, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0x21, 0x71, 0x21, 0x71, 0x21, 0x71, 0x21, 0x71, 0x22, 0x51, 0x55, 0xA0,  // FreeMono24_J
    0x14, 0x34, 0x31, 0x71, 0x41, 0x61, 0x51, 0x42, 0x61, 0x32, 0x71, 0x22, 0x81, 0x12, 0x92, 0x22, 0x71, 0x42, 0x61, 0x51,
    0x61, 0x61, 0x51, 0x61, 0x51, 0x62, 0x25, 0x53, 0x20,  // FreeMono24_K
    0x06, 0x71, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0x71, 0x21, 0x71, 0x21, 0x71, 0x21, 0x7C, 0x60,  // FreeMono24_L
    0x13, 0x72, 0x32, 0x73, 0x22, 0x61, 0x11, 0x31, 0x11, 0x51, 0x11, 0x31, 0x11, 0x41, 0x21, 0x31, 0x21, 0x31, 0x21, 0x31,
    0x21, 0x21, 0x31, 0x31, 0x31, 0x11, 0x31, 0x31, 0x32, 0x41, 0x31, 0x41, 0x41, 0x31, 0x91, 0x31, 0x91, 0x31, 0x91, 0x15,
    0x45, 0x40,  // FreeMono24_M
    0x03, 0x54, 0x12, 0x71, 0x21, 0x11, 0x61, 0x21, 0x12, 0x51, 0x21, 0x21, 0x51, 0x21, 0x31, 0x41, 0x21, 0x31, 0x41, 0x21,
    0x41, 0x31, 0x21, 0x42, 0x21, 0x21, 0x51, 0x21, 0x21, 0x61, 0x11, 0x21, 0x61, 0x11, 0x21, 0x72, 0x15, 0x42, 0x10,  // FreeMono24_N
    0x44, 0x72, 0x32, 0x41, 0x62, 0x21, 0x81, 0x21, 0x92, 0xA2, 0xA2, 0xA2, 0xA3, 0x91, 0x11, 0x82, 0x12, 0x71, 0x32, 0x51,
    0x56, 0x30,  // FreeMono24_O
    0x16, 0x61, 0x43, 0x31, 0x61, 0x31, 0x71, 0x21, 0x71, 0x21, 0x71, 0x21, 0x61, 0x37, 0x41, 0xA1, 0xA1, 0xA1, 0xA1, 0x87,
    0xA0,  // FreeMono24_P
    0x44, 0x72, 0x32, 0x41, 0x62, 0x21, 0x81, 0x21, 0x92, 0xA2, 0xA2, 0xA2, 0xA2, 0xA1, 0x11, 0x82, 0x12, 0x71, 0x32, 0x51,
    0x56, 0x81, 0x96, 0x21, 0x31, 0x43, 0x50,  // FreeMono24_Q
    0x16, 0x81, 0x43, 0x51, 0x61, 0x51, 0x71, 0x41, 0x71, 0x41, 0x62, 0x41, 0x52, 0x56, 0x71, 0x42, 0x61, 0x52, 0x51, 0x61,
    0x51, 0x71, 0x41, 0x71, 0x25, 0x62, 0x20,  // FreeMono24_R
    0x34, 0x52, 0x33, 0x11, 0x62, 0x11, 0x71, 0x11, 0x92, 0x93, 0xA4, 0x92, 0x92, 0x82, 0x83, 0x63, 0x16, 0x60,  // FreeMono24_S
    0x0C, 0x41, 0x42, 0x41, 0x42, 0x41, 0x41, 0x51, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0x77, 0x80,  // FreeMono24_T
    0x04, 0x44, 0x11, 0x81, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81, 0x21, 0x81,
    0x22, 0x71, 0x31, 0x62, 0x32, 0x51, 0x56, 0x30,  // FreeMono24_U
    0x04, 0x54, 0x11, 0x91, 0x21, 0x81, 0x31, 0x81, 0x41, 0x71, 0x41, 0x61, 0x61, 0x51, 0x61, 0x41, 0x71, 0x41, 0x81, 0x31,
    0x81, 0x21, 0x92, 0x11, 0xA2, 0xB2, 0x80,  // FreeMono24_V
    0x04, 0x54, 0xA1, 0x11, 0x91, 0x11, 0x32, 0x41, 0x11, 0x32, 0x41, 0x11, 0x31, 0x11, 0x21, 0x21, 0x31, 0x11, 0x21, 0x21,
    0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x31, 0x11, 0x32, 0x41, 0x11, 0x32, 0x41, 0x11, 0x32, 0x41, 0x11,
    0x32, 0x52, 0x10,  // FreeMono24_W
    0x13, 0x53, 0x12, 0x71, 0x31, 0x61, 0x51, 0x42, 0x61, 0x31, 0x72, 0x11, 0x92, 0xA2, 0x92, 0x11, 0x81, 0x22, 0x61, 0x41,
    0x51, 0x61, 0x32, 0x71, 0x14, 0x44,  // FreeMono24_X
    0x03, 0x55, 0x71, 0x21, 0x61, 0x41, 0x42, 0x42, 0x31, 0x61, 0x21, 0x81, 0x11, 0x82, 0xA1, 0xA1, 0xA1, 0xA1, 0xA1, 0x77,
    0x80,  // FreeMono24_Y
    0x18, 0x21, 0x61, 0x21, 0x61, 0x21, 0x51, 0x31, 0x41, 0x91, 0x81, 0x81, 0x82, 0x81, 0x51, 0x21, 0x61, 0x11, 0x71, 0x11,
    0x7B, 0x40,  // FreeMono24_Z
};
/*
    <Generate from ./font_table_margin_index.tpl>
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
    uint16_t index;
}font_table_t;

static const font_table_t freemono24_table[] = {
    {6, 3, 3, 2, 0},  // FreeMono24_0
    {5, 4, 3, 2, 23},  // FreeMono24_1
    {5, 4, 2, 3, 42},  // FreeMono24_2
    {6, 3, 2, 2, 60},  // FreeMono24_3
    {5, 4, 3, 3, 78},  // FreeMono24_4
    {5, 4, 3, 2, 102},  // FreeMono24_5
    {6, 3, 3, 2, 119},  // FreeMono24_6
    {5, 4, 3, 3, 143},  // FreeMono24_7
    {6, 3, 3, 2, 159},  // FreeMono24_8
    {6, 3, 3, 2, 185},  // FreeMono24_9
    {9, 5, 5, 5, 207},  // FreeMono24_colon
    {9, 5, 2, 1, 213},  // FreeMono24_a
    {5, 4, 1, 1, 229},  // FreeMono24_b
    {9, 5, 2, 1, 257},  // FreeMono24_c
    {5, 4, 2, 0, 272},  // FreeMono24_d
    {9, 5, 2, 2, 298},  // FreeMono24_e
    {6, 4, 3, 1, 310},  // FreeMono24_f
    {9, 1, 2, 1, 325},  // FreeMono24_g
    {5, 4, 1, 1, 352},  // FreeMono24_h
    {5, 4, 2, 2, 378},  // FreeMono24_i
    {6, 0, 3, 4, 392},  // FreeMono24_j
    {5, 4, 2, 1, 409},  // FreeMono24_k
    {5, 4, 2, 2, 434},  // FreeMono24_l
    {9, 5, 0, 0, 450},  // FreeMono24_m
    {9, 5, 1, 1, 480},  // FreeMono24_n
    {9, 5, 2, 1, 500},  // FreeMono24_o
    {9, 1, 1, 1, 517},  // FreeMono24_p
    {9, 1, 2, 0, 544},  // FreeMono24_q
    {9, 5, 2, 1, 570},  // FreeMono24_r
    {9, 5, 2, 2, 584},  // FreeMono24_s
    {7, 4, 1, 2, 597},  // FreeMono24_t
    {9, 5, 1, 1, 612},  // FreeMono24_u
    {9, 5, 1, 0, 633},  // FreeMono24_v
    {9, 5, 1, 0, 653},  // FreeMono24_w
    {9, 5, 1, 1, 682},  // FreeMono24_x
    {9, 1, 1, 1, 700},  // FreeMono24_y
    {9, 5, 3, 2, 724},  // FreeMono24_z
    {6, 4, 0, 0, 737},  // FreeMono24_A
    {6, 4, 1, 1, 763},  // FreeMono24_B
    {7, 3, 2, 1, 789},  // FreeMono24_C
    {6, 4, 1, 2, 809},  // FreeMono24_D
    {6, 4, 1, 2, 836},  // FreeMono24_E
    {6, 4, 1, 2, 859},  // FreeMono24_F
    {7, 3, 2, 1, 880},  // FreeMono24_G
    {6, 4, 1, 1, 901},  // FreeMono24_H
    {6, 4, 3, 2, 928},  // FreeMono24_I
    {6, 4, 2, 1, 943},  // FreeMono24_J
    {6, 4, 1, 0, 963},  // FreeMono24_K
    {6, 4, 2, 1, 992},  // FreeMono24_L
    {6, 4, 0, 0, 1010},  // FreeMono24_M
    {6, 4, 1, 1, 1052},  // FreeMono24_N
    {7, 3, 1, 1, 1091},  // FreeMono24_O
    {6, 4, 1, 2, 1113},  // FreeMono24_P
    {6, 1, 1, 1, 1134},  // FreeMono24_Q
    {6, 4, 1, 0, 1161},  // FreeMono24_R
    {7, 3, 2, 2, 1188},  // FreeMono24_S
    {6, 4, 2, 1, 1206},  // FreeMono24_T
    {6, 4, 1, 1, 1224},  // FreeMono24_U
    {6, 4, 1, 0, 1252},  // FreeMono24_V
    {6, 4, 1, 1, 1279},  // FreeMono24_W
    {6, 4, 1, 1, 1322},  // FreeMono24_X
    {6, 4, 2, 1, 1348},  // FreeMono24_Y
    {6, 4, 2, 2, 1369},  // FreeMono24_Z
};
