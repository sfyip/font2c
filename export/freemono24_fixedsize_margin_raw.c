/*
    <Generate from bmp.tpl>
    generate font bitmap
    font: FreeMono
    size: 24
    calc_margin: True
    encoding method: raw

    width: 14
    height: 24
*/

#include "font.h"

#define FREEMONO24_WIDTH     14
#define FREEMONO24_HEIGHT    24

static const uint8_t freemono24_bmp[] = {
    // FreeMono24_0
    0x38, 0xCC, 0x08, 0x0A, 0x14, 0x28, 0x60, 0xC0, 0x80, 0x01, 0x03, 0x06, 0x0C, 0x34, 0x48, 0x18, 0x1F,
    // FreeMono24_1
    0x18, 0x38, 0x58, 0x98, 0x10, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x01, 0xC2, 0x7F,
    // FreeMono24_2
    0x78, 0x88, 0x09, 0x1C, 0x08, 0x10, 0x20, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x20, 0xE0, 0x7F,
    // FreeMono24_3
    0x78, 0x10, 0x26, 0x10, 0x40, 0x00, 0x01, 0x04, 0x0E, 0x38, 0x00, 0x01, 0x08, 0x20, 0x80, 0x00, 0x0E, 0xC4, 0x0F,
    // FreeMono24_4
    0x60, 0x50, 0x50, 0x48, 0x48, 0x44, 0x46, 0x42, 0x41, 0x41, 0xFF, 0x40, 0x40, 0x40, 0xF0,
    // FreeMono24_5
    0x7E, 0x04, 0x09, 0x10, 0x20, 0x40, 0x80, 0x1F, 0x40, 0x00, 0x01, 0x02, 0x04, 0x08, 0x38, 0x90, 0x1F,
    // FreeMono24_6
    0xE0, 0x71, 0x30, 0x30, 0x20, 0x40, 0x40, 0x8C, 0x66, 0x05, 0x07, 0x06, 0x14, 0x28, 0x90, 0x10, 0x3E,
    // FreeMono24_7
    0xFF, 0x81, 0x81, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x10,
    // FreeMono24_8
    0x38, 0x8C, 0x04, 0x0A, 0x14, 0x28, 0x90, 0x10, 0x1E, 0xC2, 0x02, 0x05, 0x0C, 0x18, 0x68, 0x90, 0x1F,
    // FreeMono24_9
    0x38, 0x8C, 0x08, 0x0A, 0x18, 0x30, 0xA0, 0x60, 0xE1, 0x7C, 0x01, 0x02, 0x04, 0x04, 0x0C, 0xCC, 0x0F,
    // FreeMono24_colon
    0xFE, 0x0E, 0x00, 0x60, 0xEF,
    // FreeMono24_a
    0xFE, 0x00, 0x08, 0x40, 0x00, 0xC2, 0x9F, 0x81, 0x04, 0x24, 0x20, 0x81, 0xF1, 0x3B,
    // FreeMono24_b
    0x03, 0x20, 0x00, 0x02, 0x20, 0x00, 0x02, 0x20, 0x3F, 0x0A, 0x66, 0x40, 0x06, 0x28, 0x80, 0x02, 0x68, 0x80, 0x06, 0xA4,
    0x60, 0xF3, 0x03,
    // FreeMono24_c
    0xFC, 0x33, 0x98, 0x80, 0x02, 0x10, 0x80, 0x00, 0x04, 0x40, 0x80, 0x06, 0xE2, 0x0F,
    // FreeMono24_d
    0x00, 0x03, 0x20, 0x00, 0x02, 0x20, 0x00, 0xC2, 0x27, 0x82, 0x13, 0x30, 0x01, 0x12, 0x20, 0x01, 0x12, 0x20, 0x01, 0x23,
    0x38, 0x7C, 0x0E,
    // FreeMono24_e
    0xFC, 0x08, 0x14, 0x60, 0x80, 0xFF, 0x07, 0x10, 0x40, 0x00, 0x02, 0xF2, 0x07,
    // FreeMono24_f
    0xF8, 0x23, 0x80, 0x00, 0x02, 0xFF, 0x21, 0x80, 0x00, 0x02, 0x08, 0x20, 0x80, 0x00, 0x02, 0x08, 0xFC, 0x03,
    // FreeMono24_g
    0x7C, 0x16, 0x54, 0xC0, 0x02, 0x16, 0xA0, 0x80, 0x05, 0x6C, 0x70, 0xC6, 0xC2, 0x11, 0x80, 0x00, 0x02, 0x10, 0x7C, 0x00,
    // FreeMono24_h
    0x06, 0x40, 0x00, 0x04, 0x40, 0x00, 0x04, 0x40, 0x1F, 0x0C, 0x42, 0x20, 0x04, 0x42, 0x20, 0x04, 0x42, 0x20, 0x04, 0x42,
    0x20, 0x1F, 0x0F,
    // FreeMono24_i
    0x30, 0xC0, 0x00, 0x03, 0x00, 0x00, 0xF8, 0x00, 0x02, 0x08, 0x20, 0x80, 0x00, 0x02, 0x08, 0x20, 0x80, 0xF0, 0x3F,
    // FreeMono24_j
    0x20, 0x10, 0x08, 0x00, 0xF8, 0x03, 0x81, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x81, 0x40, 0x20,
    // FreeMono24_k
    0x03, 0x10, 0x80, 0x00, 0x04, 0x20, 0x00, 0xF1, 0x09, 0x41, 0x04, 0x12, 0xF0, 0x80, 0x0D, 0xC4, 0x20, 0x0C, 0xC1, 0x0C,
    0x1E,
    // FreeMono24_l
    0x3C, 0x80, 0x00, 0x02, 0x08, 0x20, 0x80, 0x00, 0x02, 0x08, 0x20, 0x80, 0x00, 0x02, 0x08, 0x20, 0x80, 0xF0, 0x3F,
    // FreeMono24_m
    0x7F, 0x0F, 0x63, 0x44, 0x08, 0x11, 0x42, 0x84, 0x10, 0x21, 0x44, 0x08, 0x11, 0x42, 0x84, 0xD0, 0x63, 0x0C,
    // FreeMono24_n
    0xF6, 0xC1, 0x20, 0x04, 0x42, 0x40, 0x04, 0x44, 0x40, 0x04, 0x44, 0x40, 0x04, 0xF4, 0xF1,
    // FreeMono24_o
    0xFC, 0x30, 0xC8, 0x80, 0x02, 0x14, 0xC0, 0x00, 0x06, 0x28, 0x40, 0x02, 0xE1, 0x07,
    // FreeMono24_p
    0xF3, 0xA3, 0x60, 0x06, 0x64, 0x80, 0x02, 0x68, 0x80, 0x06, 0xE8, 0x40, 0x1A, 0x23, 0x0E, 0x02, 0x20, 0x00, 0x02, 0xF0,
    0x01,
    // FreeMono24_q
    0xFC, 0x2E, 0x38, 0x01, 0x13, 0x20, 0x01, 0x12, 0x20, 0x01, 0x32, 0x30, 0xC6, 0x82, 0x23, 0x00, 0x02, 0x20, 0x00, 0x02,
    0x78,
    // FreeMono24_r
    0xCE, 0x43, 0x23, 0x06, 0x10, 0x80, 0x00, 0x04, 0x20, 0x00, 0x01, 0x08, 0xF8, 0x0F,
    // FreeMono24_s
    0xFC, 0x09, 0x24, 0x90, 0x01, 0x78, 0x00, 0x06, 0x60, 0x80, 0x03, 0xF7, 0x07,
    // FreeMono24_t
    0x04, 0x20, 0x00, 0x01, 0xFE, 0x43, 0x00, 0x02, 0x10, 0x80, 0x00, 0x04, 0x20, 0x00, 0x01, 0x10, 0x88, 0x3F,
    // FreeMono24_u
    0x87, 0x47, 0x40, 0x04, 0x44, 0x40, 0x04, 0x44, 0x40, 0x04, 0x44, 0x60, 0x04, 0x85, 0xCF,
    // FreeMono24_v
    0x1F, 0x9F, 0x80, 0x10, 0x08, 0x06, 0x81, 0x30, 0x10, 0x02, 0x44, 0x80, 0x04, 0xA0, 0x00, 0x0C, 0x00,
    // FreeMono24_w
    0x0F, 0x5E, 0x80, 0x08, 0x10, 0x31, 0x42, 0x46, 0x48, 0x09, 0xA5, 0xA0, 0x18, 0x14, 0x03, 0x61, 0x00,
    // FreeMono24_x
    0x1E, 0xCF, 0x20, 0x18, 0x01, 0x0B, 0x60, 0x00, 0x0E, 0x90, 0x81, 0x30, 0x04, 0xF6, 0xF1,
    // FreeMono24_y
    0x0F, 0x4F, 0x40, 0x04, 0x82, 0x20, 0x08, 0x01, 0x11, 0x90, 0x00, 0x0A, 0xA0, 0x00, 0x04, 0x40, 0x00, 0x02, 0x20, 0xE0,
    0x07,
    // FreeMono24_z
    0xFF, 0x82, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0x03, 0xFF, 0x03,
    // FreeMono24_A
    0xF8, 0x00, 0x30, 0x00, 0x12, 0x80, 0x04, 0x20, 0x01, 0x84, 0x00, 0x21, 0x40, 0x10, 0xF8, 0x07, 0x02, 0x81, 0x80, 0x10,
    0x20, 0x04, 0xC8, 0x87, 0x0F,
    // FreeMono24_B
    0x7E, 0x40, 0x38, 0x04, 0x46, 0x40, 0x04, 0x44, 0x60, 0xFC, 0x41, 0x38, 0x04, 0x44, 0x80, 0x04, 0x48, 0x80, 0x04, 0xF4,
    0x3F,
    // FreeMono24_C
    0x78, 0x60, 0x9C, 0x80, 0x02, 0x14, 0x80, 0x00, 0x04, 0x20, 0x00, 0x01, 0x08, 0x40, 0x00, 0x04, 0x68, 0x20, 0xFC, 0x00,
    // FreeMono24_D
    0x3E, 0x10, 0x8E, 0x80, 0x04, 0x28, 0x40, 0x01, 0x0A, 0x50, 0x80, 0x02, 0x14, 0xA0, 0x00, 0x05, 0x24, 0xB0, 0x7F, 0x00,
    // FreeMono24_E
    0xFE, 0x27, 0x20, 0x01, 0x09, 0x48, 0x00, 0x22, 0xF0, 0x81, 0x08, 0x44, 0x20, 0x00, 0x01, 0x09, 0x48, 0xC0, 0xFF, 0x03,
    // FreeMono24_F
    0xFE, 0x27, 0x20, 0x01, 0x09, 0x48, 0x00, 0x22, 0xF0, 0x81, 0x08, 0x44, 0x20, 0x00, 0x01, 0x08, 0x40, 0x80, 0x3F, 0x00,
    // FreeMono24_G
    0xF0, 0x60, 0x9C, 0x80, 0x02, 0x10, 0x80, 0x00, 0x04, 0x20, 0x00, 0xC1, 0x0F, 0x50, 0x80, 0x06, 0x64, 0x20, 0xFE, 0x01,
    // FreeMono24_H
    0x0E, 0x47, 0x20, 0x04, 0x42, 0x20, 0x04, 0x42, 0x20, 0xFC, 0x43, 0x20, 0x04, 0x42, 0x20, 0x04, 0x42, 0x20, 0x04, 0xF2,
    0xF1,
    // FreeMono24_I
    0xFF, 0x20, 0x40, 0x80, 0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0xE1, 0x3F,
    // FreeMono24_J
    0xF0, 0x07, 0x08, 0x40, 0x00, 0x02, 0x10, 0x80, 0x00, 0x04, 0x20, 0x01, 0x09, 0x48, 0x40, 0x02, 0x32, 0x08, 0x3E, 0x00,
    // FreeMono24_K
    0x1E, 0x8F, 0x80, 0x10, 0x08, 0xC2, 0x40, 0x0C, 0xC8, 0x00, 0x0D, 0x60, 0x06, 0x84, 0x81, 0x20, 0x10, 0x08, 0x02, 0x41,
    0x60, 0x3E, 0x38,
    // FreeMono24_L
    0x3F, 0x20, 0x00, 0x01, 0x08, 0x40, 0x00, 0x02, 0x10, 0x80, 0x00, 0x04, 0x20, 0x20, 0x01, 0x09, 0x48, 0xC0, 0xFF, 0x03,
    // FreeMono24_M
    0x0E, 0x18, 0x03, 0xCE, 0x40, 0x51, 0x50, 0x14, 0x12, 0x89, 0x44, 0x12, 0x11, 0x45, 0xC4, 0x10, 0x21, 0x44, 0x00, 0x11,
    0x40, 0x04, 0xD0, 0x87, 0x0F,
    // FreeMono24_N
    0x07, 0x6F, 0x40, 0x0A, 0xA4, 0x41, 0x12, 0x24, 0x42, 0x22, 0x24, 0x44, 0xC2, 0x24, 0x48, 0x02, 0x25, 0x50, 0x02, 0xF6,
    0x61,
    // FreeMono24_O
    0xF0, 0x80, 0x31, 0x04, 0x26, 0x40, 0x02, 0x18, 0x80, 0x01, 0x18, 0x80, 0x01, 0x38, 0x80, 0x02, 0x6C, 0x40, 0x0C, 0x82,
    0x1F,
    // FreeMono24_P
    0x7E, 0x20, 0x1C, 0x81, 0x08, 0x48, 0x40, 0x02, 0x12, 0x88, 0x3F, 0x04, 0x20, 0x00, 0x01, 0x08, 0x40, 0x80, 0x3F, 0x00,
    // FreeMono24_Q
    0xF0, 0x80, 0x31, 0x04, 0x26, 0x40, 0x02, 0x18, 0x80, 0x01, 0x18, 0x80, 0x01, 0x18, 0x80, 0x02, 0x6C, 0x40, 0x0C, 0x82,
    0x1F, 0x20, 0x80, 0x9F, 0x08, 0x07,
    // FreeMono24_R
    0x7E, 0x80, 0x70, 0x10, 0x08, 0x02, 0x42, 0x40, 0x08, 0x0C, 0xC1, 0xE0, 0x07, 0x84, 0x81, 0x60, 0x10, 0x08, 0x02, 0x42,
    0x40, 0x3E, 0x30,
    // FreeMono24_S
    0x78, 0x30, 0x2E, 0xB0, 0x80, 0x02, 0x18, 0xC0, 0x01, 0x78, 0x00, 0x03, 0x18, 0x60, 0x80, 0x03, 0xF7, 0x03,
    // FreeMono24_T
    0xFF, 0x0F, 0x61, 0x08, 0x43, 0x08, 0x02, 0x10, 0x80, 0x00, 0x04, 0x20, 0x00, 0x01, 0x08, 0x40, 0x00, 0x02, 0xFE, 0x00,
    // FreeMono24_U
    0x0F, 0x2F, 0x40, 0x02, 0x24, 0x40, 0x02, 0x24, 0x40, 0x02, 0x24, 0x40, 0x02, 0x24, 0x40, 0x06, 0x44, 0x60, 0x0C, 0x82,
    0x1F,
    // FreeMono24_V
    0x0F, 0x5E, 0x00, 0x09, 0x10, 0x01, 0x42, 0x40, 0x08, 0x04, 0x82, 0x40, 0x08, 0x08, 0x01, 0x22, 0x40, 0x02, 0x58, 0x00,
    0x06, 0xC0, 0x00,
    // FreeMono24_W
    0x0F, 0x1E, 0x80, 0x02, 0x28, 0x86, 0x62, 0x28, 0x4A, 0xA2, 0x24, 0x49, 0x92, 0x24, 0x51, 0x0C, 0xC5, 0x50, 0x0C, 0xC5,
    0x60,
    // FreeMono24_X
    0x0E, 0x6E, 0x40, 0x04, 0x82, 0x30, 0x10, 0x01, 0x0B, 0x60, 0x00, 0x06, 0xB0, 0x00, 0x19, 0x08, 0x41, 0x20, 0x06, 0xF4,
    0xF0,
    // FreeMono24_Y
    0x07, 0x1F, 0x90, 0x40, 0x08, 0xC3, 0x08, 0x24, 0x40, 0x01, 0x06, 0x20, 0x00, 0x01, 0x08, 0x40, 0x00, 0x02, 0xFE, 0x00,
    // FreeMono24_Z
    0xFE, 0x09, 0x24, 0x90, 0x20, 0x42, 0x00, 0x01, 0x02, 0x04, 0x18, 0x20, 0x48, 0xA0, 0x80, 0x02, 0xFE, 0x0F,
};
/*
    <Generate from font_table_margin_index.tpl>
    generate font_table_t struct: [margin, index]
    font: FreeMono
    size: 24
    calc_margin: True
    encoding method: raw

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
}font_table_t;

static const font_table_t freemono24_table[] = {
    {6, 3, 3, 2, 0},  // FreeMono24_0
    {5, 4, 3, 2, 17},  // FreeMono24_1
    {5, 4, 2, 3, 34},  // FreeMono24_2
    {6, 3, 2, 2, 51},  // FreeMono24_3
    {5, 4, 3, 3, 70},  // FreeMono24_4
    {5, 4, 3, 2, 85},  // FreeMono24_5
    {6, 3, 3, 2, 102},  // FreeMono24_6
    {5, 4, 3, 3, 119},  // FreeMono24_7
    {6, 3, 3, 2, 134},  // FreeMono24_8
    {6, 3, 3, 2, 151},  // FreeMono24_9
    {9, 5, 5, 5, 168},  // FreeMono24_colon
    {9, 5, 2, 1, 173},  // FreeMono24_a
    {5, 4, 1, 1, 187},  // FreeMono24_b
    {9, 5, 2, 1, 210},  // FreeMono24_c
    {5, 4, 2, 0, 224},  // FreeMono24_d
    {9, 5, 2, 2, 247},  // FreeMono24_e
    {6, 4, 3, 1, 260},  // FreeMono24_f
    {9, 1, 2, 1, 278},  // FreeMono24_g
    {5, 4, 1, 1, 298},  // FreeMono24_h
    {5, 4, 2, 2, 321},  // FreeMono24_i
    {6, 0, 3, 4, 340},  // FreeMono24_j
    {5, 4, 2, 1, 356},  // FreeMono24_k
    {5, 4, 2, 2, 377},  // FreeMono24_l
    {9, 5, 0, 0, 396},  // FreeMono24_m
    {9, 5, 1, 1, 414},  // FreeMono24_n
    {9, 5, 2, 1, 429},  // FreeMono24_o
    {9, 1, 1, 1, 443},  // FreeMono24_p
    {9, 1, 2, 0, 464},  // FreeMono24_q
    {9, 5, 2, 1, 485},  // FreeMono24_r
    {9, 5, 2, 2, 499},  // FreeMono24_s
    {7, 4, 1, 2, 512},  // FreeMono24_t
    {9, 5, 1, 1, 530},  // FreeMono24_u
    {9, 5, 1, 0, 545},  // FreeMono24_v
    {9, 5, 1, 0, 562},  // FreeMono24_w
    {9, 5, 1, 1, 579},  // FreeMono24_x
    {9, 1, 1, 1, 594},  // FreeMono24_y
    {9, 5, 3, 2, 615},  // FreeMono24_z
    {6, 4, 0, 0, 627},  // FreeMono24_A
    {6, 4, 1, 1, 652},  // FreeMono24_B
    {7, 3, 2, 1, 673},  // FreeMono24_C
    {6, 4, 1, 2, 693},  // FreeMono24_D
    {6, 4, 1, 2, 713},  // FreeMono24_E
    {6, 4, 1, 2, 733},  // FreeMono24_F
    {7, 3, 2, 1, 753},  // FreeMono24_G
    {6, 4, 1, 1, 773},  // FreeMono24_H
    {6, 4, 3, 2, 794},  // FreeMono24_I
    {6, 4, 2, 1, 810},  // FreeMono24_J
    {6, 4, 1, 0, 830},  // FreeMono24_K
    {6, 4, 2, 1, 853},  // FreeMono24_L
    {6, 4, 0, 0, 873},  // FreeMono24_M
    {6, 4, 1, 1, 898},  // FreeMono24_N
    {7, 3, 1, 1, 919},  // FreeMono24_O
    {6, 4, 1, 2, 940},  // FreeMono24_P
    {6, 1, 1, 1, 960},  // FreeMono24_Q
    {6, 4, 1, 0, 986},  // FreeMono24_R
    {7, 3, 2, 2, 1009},  // FreeMono24_S
    {6, 4, 2, 1, 1027},  // FreeMono24_T
    {6, 4, 1, 1, 1047},  // FreeMono24_U
    {6, 4, 1, 0, 1068},  // FreeMono24_V
    {6, 4, 1, 1, 1091},  // FreeMono24_W
    {6, 4, 1, 1, 1112},  // FreeMono24_X
    {6, 4, 2, 1, 1133},  // FreeMono24_Y
    {6, 4, 2, 2, 1153},  // FreeMono24_Z
};
