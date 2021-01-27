/*
    <Generate from ./bmp.tpl>
    generate font bitmap
    font: FreeSans
    size: 32
    calc_margin: True
    encoding method: raw

    width: Adaptive
    height: Adaptive
*/

#include "font.h"

//#define FREESANS32_WIDTH     Adaptive
//#define FREESANS32_HEIGHT    Adaptive

static const uint8_t freesans32_bmp[] = {
    0xC0, 0x03, 0xF8, 0x07, 0xFE, 0x87, 0x87, 0xC3, 0x81, 0x73, 0xC0, 0x39, 0xC0, 0x1D, 0xE0, 0x06, 0xF0, 0x03, 0xF8, 0x01,
    0xFC, 0x00, 0x7E, 0x00, 0x3F, 0x80, 0x1F, 0xC0, 0x0D, 0xE0, 0x0E, 0x70, 0x07, 0xB8, 0x03, 0x8E, 0x03, 0xC7, 0xC1, 0xC1,
    0xFF, 0xC0, 0x3F, 0x80, 0x07,  // FreeSans32_0
    0xC0, 0xC0, 0xE0, 0xE0, 0xFC, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0,
    0xE0, 0xE0, 0xE0,  // FreeSans32_1
    0xC0, 0x01, 0xF8, 0x07, 0xFF, 0x8F, 0x03, 0xE7, 0x00, 0x77, 0x80, 0x3B, 0xC0, 0x0D, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00,
    0x0E, 0xC0, 0x07, 0xF0, 0x01, 0x3E, 0xC0, 0x07, 0xF0, 0x00, 0x3C, 0x00, 0x0F, 0x80, 0x03, 0xC0, 0x00, 0xF0, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x01,  // FreeSans32_2
    0xC0, 0x01, 0xFC, 0x07, 0xFF, 0xC7, 0x83, 0xE7, 0x80, 0x73, 0xC0, 0x19, 0xC0, 0x0F, 0x60, 0x00, 0x38, 0x00, 0x1E, 0xF0,
    0x07, 0xF8, 0x01, 0xFC, 0x03, 0xC0, 0x01, 0xC0, 0x01, 0xE0, 0x07, 0xF0, 0x03, 0xF8, 0x01, 0xDC, 0x01, 0xEE, 0xC1, 0xE3,
    0xFF, 0xE0, 0x3F, 0x80, 0x03,  // FreeSans32_3
    0x00, 0x0C, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0F, 0x80, 0x0F, 0xC0, 0x0F, 0xC0, 0x0E, 0xE0, 0x0E, 0x70, 0x0E, 0x30, 0x0E,
    0x38, 0x0E, 0x1C, 0x0E, 0x0E, 0x0E, 0x06, 0x0E, 0x07, 0x0E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x0E, 0x00, 0x0E,
    0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0E,  // FreeSans32_4
    0xFC, 0x3F, 0xFE, 0x1F, 0xFF, 0x8F, 0x03, 0xC0, 0x01, 0x60, 0x00, 0x30, 0x00, 0x18, 0x00, 0xCE, 0x07, 0xFF, 0x8F, 0xFF,
    0xCF, 0x03, 0xE7, 0x00, 0x07, 0x80, 0x03, 0xC0, 0x01, 0xC0, 0x00, 0xF0, 0x03, 0xF8, 0x01, 0xDC, 0x01, 0xEF, 0xC1, 0xE3,
    0xFF, 0xE0, 0x3F, 0x80, 0x07,  // FreeSans32_5
    0x80, 0x03, 0xF8, 0x07, 0xFE, 0x87, 0x87, 0xC7, 0x81, 0x73, 0x80, 0x3B, 0x00, 0x1C, 0x00, 0x06, 0x00, 0xE3, 0xC3, 0xFD,
    0xE7, 0xDF, 0xF7, 0x81, 0x7F, 0x80, 0x3F, 0xC0, 0x0D, 0xE0, 0x06, 0x60, 0x07, 0xB8, 0x03, 0xDC, 0x03, 0xCE, 0xC3, 0xC3,
    0xFF, 0xC0, 0x3F, 0x80, 0x07,  // FreeSans32_6
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x70, 0x00, 0x30, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x06,
    0x00, 0x07, 0x80, 0x03, 0x80, 0x03, 0x80, 0x01, 0xC0, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x60, 0x00, 0x70, 0x00,
    0x70, 0x00, 0x70, 0x00, 0x70, 0x00,  // FreeSans32_7
    0x80, 0x01, 0xF8, 0x07, 0xFF, 0x87, 0x83, 0xE7, 0x80, 0x73, 0x80, 0x3B, 0xC0, 0x1D, 0xE0, 0x1E, 0x38, 0x1E, 0x1E, 0xFE,
    0x03, 0xFF, 0xC1, 0xE7, 0x73, 0xC0, 0x39, 0xC0, 0x0F, 0xE0, 0x07, 0xE0, 0x03, 0xF8, 0x01, 0xDC, 0x01, 0xEE, 0x81, 0xE3,
    0xFF, 0xE1, 0x3F, 0x80, 0x07,  // FreeSans32_8
    0xC0, 0x01, 0xFC, 0x07, 0xFF, 0xC7, 0x83, 0xE7, 0x80, 0x73, 0x80, 0x1F, 0xC0, 0x0F, 0xE0, 0x07, 0xF0, 0x03, 0xB8, 0x03,
    0xDE, 0x01, 0xCF, 0xF7, 0xC7, 0xFF, 0xC3, 0xCF, 0x01, 0xE0, 0x00, 0x70, 0x00, 0xB8, 0x03, 0xCE, 0x01, 0xC7, 0xC1, 0xE1,
    0x7F, 0xE0, 0x1F, 0x80, 0x03,  // FreeSans32_9
    0xFF, 0x0F, 0x00, 0x00, 0x00, 0xFC, 0x07,  // FreeSans32_colon
    0xFC, 0x1F, 0x1E, 0x1E, 0x0E, 0x38, 0x0E, 0x38, 0x00, 0x38, 0x00, 0x38, 0x80, 0x3F, 0xFC, 0x3F, 0xFE, 0x38, 0x0F, 0x38,
    0x07, 0x38, 0x07, 0x38, 0x07, 0x3C, 0x07, 0x3E, 0xFE, 0xFF, 0xFC, 0xF3, 0x70, 0x60,  // FreeSans32_a
    0x07, 0x80, 0x03, 0xC0, 0x01, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x9C, 0x1F, 0xFE, 0x1F, 0x3F, 0x9F, 0x07, 0xDE, 0x03,
    0xEE, 0x00, 0x7E, 0x00, 0x3F, 0x80, 0x1F, 0xC0, 0x0F, 0xE0, 0x07, 0xF0, 0x03, 0xF8, 0x01, 0xEE, 0x01, 0xF7, 0xC1, 0xD9,
    0xFF, 0xCC, 0x3F, 0x80, 0x03,  // FreeSans32_b
    0xF8, 0x0F, 0x8F, 0xE7, 0xC0, 0x3B, 0xE0, 0x07, 0xF8, 0x01, 0x70, 0x00, 0x1C, 0x00, 0x07, 0xC0, 0x01, 0x70, 0x80, 0x1F,
    0xE0, 0x0E, 0xB8, 0x07, 0xC7, 0xFF, 0xE1, 0x3F, 0xE0, 0x01,  // FreeSans32_c
    0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x80, 0xC3, 0xCF, 0xF1, 0xFF, 0x3C, 0x7E, 0x0F, 0xBC, 0x03,
    0xFE, 0x00, 0x7E, 0x00, 0x3F, 0x80, 0x1F, 0xC0, 0x0F, 0xE0, 0x07, 0xF0, 0x03, 0xF8, 0x03, 0xDC, 0x01, 0xEF, 0xC1, 0xE7,
    0x7F, 0xE3, 0x9F, 0xC1, 0x03,  // FreeSans32_d
    0xF8, 0x1F, 0x1E, 0x8F, 0x03, 0xCE, 0x01, 0x76, 0x00, 0x3F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0xC0, 0x01,
    0xE0, 0x00, 0xEE, 0x80, 0xF3, 0xE0, 0xF1, 0x7F, 0xF0, 0x1F, 0xC0, 0x01,  // FreeSans32_e
    0x78, 0x3E, 0x87, 0xC3, 0xE1, 0xFC, 0xFF, 0x1C, 0x0E, 0x87, 0xC3, 0xE1, 0x70, 0x38, 0x1C, 0x0E, 0x87, 0xC3, 0xE1, 0x70,
    0x00,  // FreeSans32_f
    0xF0, 0x73, 0xFC, 0x3B, 0x8F, 0xDF, 0x81, 0xEF, 0x80, 0x3F, 0xC0, 0x1F, 0xC0, 0x0F, 0xE0, 0x07, 0xF0, 0x03, 0xF8, 0x01,
    0xFC, 0x00, 0x7E, 0x80, 0x77, 0xC0, 0x7B, 0xF0, 0xF9, 0xEF, 0xF8, 0x73, 0x70, 0x38, 0x00, 0xCC, 0x00, 0xE7, 0x80, 0xF3,
    0xF1, 0xF0, 0x3F, 0xE0, 0x07,  // FreeSans32_g
    0x07, 0xE0, 0x00, 0x1C, 0x80, 0x03, 0x70, 0x00, 0x0E, 0xC0, 0xF9, 0xF9, 0x7F, 0x1F, 0xFE, 0x81, 0x1F, 0xF0, 0x03, 0x7C,
    0x80, 0x0F, 0xF0, 0x01, 0x3E, 0xC0, 0x07, 0xF8, 0x00, 0x1F, 0xE0, 0x03, 0x7C, 0x80, 0x0F, 0xF0, 0x01, 0x06,  // FreeSans32_h
    0xFF, 0x01, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F,  // FreeSans32_i
    0x18, 0x63, 0x00, 0x00, 0xC6, 0x18, 0x63, 0x8C, 0x31, 0xC6, 0x18, 0x63, 0x8C, 0x31, 0xC6, 0x18, 0x63, 0xFF, 0x1F,  // FreeSans32_j
    0x07, 0xC0, 0x01, 0x70, 0x00, 0x1C, 0x00, 0x07, 0xC0, 0x01, 0x70, 0xE0, 0x1D, 0x3C, 0x87, 0xC7, 0xF1, 0x70, 0x1E, 0xDC,
    0x03, 0xFF, 0xC0, 0x3F, 0xF0, 0x1D, 0x3C, 0x07, 0x87, 0xC3, 0xE1, 0x71, 0x70, 0x1C, 0x38, 0x07, 0xDE, 0x01, 0x77, 0x80,
    0x03,  // FreeSans32_k
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F,  // FreeSans32_l
    0xE3, 0xC3, 0xCF, 0xFE, 0xF9, 0xF7, 0xF1, 0xC7, 0x3F, 0x78, 0xE0, 0x07, 0x1C, 0xF8, 0x01, 0x03, 0x7E, 0xC0, 0x80, 0x1F,
    0x30, 0xE0, 0x07, 0x0C, 0xF8, 0x01, 0x03, 0x7E, 0xC0, 0x80, 0x1F, 0x30, 0xE0, 0x07, 0x0C, 0xF8, 0x01, 0x03, 0x7E, 0xC0,
    0x80, 0x1F, 0x30, 0xE0, 0x07, 0x0C, 0x38,  // FreeSans32_m
    0xE3, 0x67, 0xFE, 0x6D, 0xF8, 0x07, 0x7E, 0x80, 0x0F, 0xF0, 0x01, 0x3E, 0xC0, 0x07, 0xF8, 0x00, 0x1F, 0xE0, 0x03, 0x7C,
    0x80, 0x0F, 0xF0, 0x01, 0x3E, 0xC0, 0x07, 0x18,  // FreeSans32_n
    0xF8, 0x1F, 0x1E, 0x8F, 0x03, 0xCE, 0x01, 0x77, 0x00, 0x3F, 0x80, 0x1F, 0xC0, 0x0F, 0xE0, 0x07, 0xF0, 0x03, 0xF8, 0x01,
    0xFC, 0x00, 0xEE, 0x80, 0xF3, 0xE0, 0xF1, 0x7F, 0xF0, 0x1F, 0xC0, 0x01,  // FreeSans32_o
    0xE3, 0x87, 0xFD, 0xC7, 0xCE, 0xE7, 0x81, 0xF7, 0x80, 0x3B, 0x80, 0x1F, 0xC0, 0x0F, 0xE0, 0x07, 0xF0, 0x03, 0xF8, 0x01,
    0xFC, 0x00, 0x7E, 0x80, 0x7B, 0xC0, 0x7D, 0xF0, 0xFE, 0x3F, 0xF7, 0x8F, 0xE3, 0xC1, 0x01, 0xE0, 0x00, 0x70, 0x00, 0x38,
    0x00, 0x1C, 0x00, 0x0E, 0x00,  // FreeSans32_p
    0xF0, 0x63, 0xFC, 0x37, 0x9F, 0xDF, 0x03, 0xEF, 0x80, 0x3F, 0x80, 0x1F, 0xC0, 0x0F, 0xE0, 0x07, 0xF0, 0x03, 0xF8, 0x01,
    0xFC, 0x00, 0xFE, 0x00, 0x77, 0xC0, 0x7B, 0xF0, 0xF9, 0xFF, 0xF8, 0x77, 0xF0, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07,
    0x80, 0x03, 0xC0, 0x01, 0xE0,  // FreeSans32_q
    0xE3, 0xF3, 0xFB, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,  // FreeSans32_r
    0xFC, 0x8F, 0x87, 0xE3, 0xC0, 0x1D, 0x70, 0x06, 0x80, 0x07, 0xE0, 0x0F, 0xF0, 0x1F, 0xE0, 0x1F, 0x80, 0x07, 0x80, 0x1F,
    0xE0, 0x07, 0xB8, 0x03, 0xE7, 0xFF, 0xF1, 0x3F, 0xE0, 0x01,  // FreeSans32_s
    0x1C, 0x0E, 0x87, 0xF3, 0xFF, 0x73, 0x38, 0x1C, 0x0E, 0x87, 0xC3, 0xE1, 0x70, 0x38, 0x1C, 0x0E, 0x87, 0xCF, 0x87, 0x03,  // FreeSans32_t
    0x07, 0xF8, 0x00, 0x1F, 0xE0, 0x03, 0x7C, 0x80, 0x0F, 0xF0, 0x01, 0x3E, 0xC0, 0x07, 0xF8, 0x00, 0x1F, 0xE0, 0x03, 0x7E,
    0xC0, 0x0F, 0xF8, 0x81, 0xF7, 0xDF, 0xFE, 0x19, 0x0E, 0x00,  // FreeSans32_u
    0x07, 0x70, 0x07, 0xB8, 0x03, 0xDC, 0x01, 0xC7, 0x81, 0xE3, 0xC0, 0x61, 0x70, 0x70, 0x38, 0x38, 0x0C, 0x18, 0x07, 0x9C,
    0x03, 0xCE, 0x00, 0x76, 0x00, 0x1F, 0x80, 0x0F, 0x80, 0x07, 0xC0, 0x01,  // FreeSans32_v
    0x07, 0x1C, 0x70, 0x07, 0x0E, 0x9C, 0x83, 0x0F, 0xCE, 0xC1, 0x07, 0xC7, 0x60, 0x83, 0xE3, 0xB0, 0xE1, 0x70, 0xDC, 0x71,
    0x38, 0xEE, 0x38, 0x18, 0x63, 0x0C, 0x9C, 0x31, 0x07, 0xEE, 0xB8, 0x03, 0x76, 0xDC, 0x00, 0x1B, 0x6C, 0x80, 0x0F, 0x3E,
    0xC0, 0x07, 0x1F, 0xC0, 0x83, 0x07, 0xE0, 0x80, 0x03,  // FreeSans32_w
    0x07, 0xF8, 0x03, 0xE7, 0xE0, 0x70, 0x18, 0x38, 0x07, 0xEE, 0x00, 0x1F, 0x80, 0x07, 0xE0, 0x00, 0x7C, 0x00, 0x3F, 0xE0,
    0x0E, 0x1C, 0x07, 0x87, 0xE3, 0xE0, 0x1C, 0x70, 0x07, 0x3C,  // FreeSans32_x
    0x07, 0x70, 0x07, 0xB8, 0x03, 0xCE, 0x01, 0xC7, 0x81, 0xE1, 0xE0, 0x70, 0x70, 0x70, 0x1C, 0x38, 0x0E, 0x1C, 0x07, 0xDC,
    0x01, 0xEE, 0x00, 0x37, 0x00, 0x1F, 0x80, 0x0F, 0xC0, 0x03, 0xC0, 0x01, 0xE0, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0xF0,
    0x03, 0xF8, 0x00, 0x3C, 0x00,  // FreeSans32_y
    0xFE, 0x9F, 0xFF, 0xE7, 0xFF, 0x01, 0x38, 0x00, 0x0F, 0xC0, 0x01, 0x38, 0x00, 0x07, 0xE0, 0x00, 0x1C, 0x80, 0x07, 0xE0,
    0x00, 0x1C, 0x80, 0x03, 0x70, 0x00, 0xFC, 0xFF, 0xFF, 0x3F,  // FreeSans32_z
    0x80, 0x0F, 0x00, 0xF8, 0x00, 0x80, 0x1F, 0x00, 0xDC, 0x01, 0xC0, 0x1D, 0x00, 0x9C, 0x03, 0xE0, 0x38, 0x00, 0x8E, 0x03,
    0xE0, 0x70, 0x00, 0x07, 0x07, 0x70, 0x70, 0x00, 0x07, 0x0E, 0x38, 0xE0, 0x80, 0x03, 0x1E, 0xFC, 0xFF, 0xC1, 0xFF, 0x1F,
    0x1C, 0xC0, 0xE3, 0x01, 0x38, 0x0E, 0x80, 0xE3, 0x00, 0x78, 0x0F, 0x00, 0x77, 0x00, 0x70, 0x07, 0x00, 0x0F,  // FreeSans32_A
    0xFF, 0x1F, 0xFE, 0x7F, 0x1C, 0xF0, 0x39, 0x80, 0x77, 0x00, 0xEE, 0x00, 0xDC, 0x01, 0xB8, 0x03, 0x70, 0x07, 0x70, 0x0E,
    0x78, 0xFC, 0x7F, 0xF8, 0xFF, 0x71, 0x80, 0xEF, 0x00, 0xDC, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x80,
    0x3F, 0x00, 0xF7, 0xFF, 0xEF, 0xFF, 0xCF, 0xFF, 0x07,  // FreeSans32_B
    0x00, 0x1E, 0x00, 0xFC, 0x0F, 0xF0, 0xFF, 0x81, 0x0F, 0x3C, 0x3C, 0x80, 0xC7, 0x01, 0x70, 0x1E, 0x00, 0xEF, 0x00, 0xE0,
    0x0E, 0x00, 0xE0, 0x00, 0x00, 0x07, 0x00, 0x70, 0x00, 0x00, 0x07, 0x00, 0x70, 0x00, 0x00, 0x07, 0x00, 0xE0, 0x00, 0xE0,
    0x0E, 0x00, 0xEE, 0x00, 0xE0, 0x1E, 0x00, 0xCE, 0x01, 0x70, 0x3C, 0x80, 0x87, 0x0F, 0x3C, 0xF0, 0xFF, 0x01, 0xFC, 0x0F,
    0x00, 0x1F, 0x00,  // FreeSans32_C
    0xFF, 0x1F, 0xFC, 0xFF, 0x70, 0xC0, 0xC7, 0x01, 0x3C, 0x07, 0xE0, 0x1D, 0x00, 0x77, 0x00, 0xDC, 0x01, 0xE0, 0x07, 0x80,
    0x1F, 0x00, 0x7E, 0x00, 0xF8, 0x01, 0xE0, 0x07, 0x80, 0x1F, 0x00, 0x7E, 0x00, 0xF8, 0x01, 0xE0, 0x07, 0xC0, 0x1D, 0x00,
    0x77, 0x00, 0xCE, 0x01, 0x3C, 0xFF, 0x7F, 0xFC, 0xFF, 0xF0, 0xFF, 0x00,  // FreeSans32_D
    0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00,
    0xFF, 0x7F, 0xFF, 0x7F, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,  // FreeSans32_E
    0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x03, 0xC0, 0xFF,
    0xEF, 0xFF, 0x77, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x03, 0xC0, 0x01, 0xE0, 0x00, 0x70, 0x00, 0x38,
    0x00, 0x1C, 0x00, 0x00,  // FreeSans32_F
    0x00, 0x1E, 0x00, 0xF0, 0x7F, 0x00, 0xFF, 0x3F, 0xE0, 0x03, 0x1E, 0x78, 0x00, 0x0F, 0x0F, 0x80, 0xC7, 0x01, 0xC0, 0x39,
    0x00, 0x70, 0x0E, 0x00, 0x80, 0x03, 0x00, 0x70, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x07, 0xF0, 0xFF, 0x01, 0xFC, 0x7F, 0x00,
    0x80, 0x3B, 0x00, 0xE0, 0x0E, 0x00, 0xB8, 0x03, 0x00, 0xEE, 0x01, 0xC0, 0xF3, 0x00, 0xF8, 0x78, 0x00, 0x3F, 0x3E, 0xE0,
    0x0E, 0xFF, 0x9F, 0x03, 0xFF, 0xC3, 0x00, 0x1E, 0x00,  // FreeSans32_G
    0x07, 0x80, 0x1F, 0x00, 0x7E, 0x00, 0xF8, 0x01, 0xE0, 0x07, 0x80, 0x1F, 0x00, 0x7E, 0x00, 0xF8, 0x01, 0xE0, 0x07, 0x80,
    0x1F, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x80, 0x1F, 0x00, 0x7E, 0x00, 0xF8, 0x01, 0xE0, 0x07, 0x80, 0x1F, 0x00,
    0x7E, 0x00, 0xF8, 0x01, 0xE0, 0x07, 0x80, 0x1F, 0x00, 0x7E, 0x00, 0x38,  // FreeSans32_H
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F,  // FreeSans32_I
    0x00, 0x1C, 0x80, 0x03, 0x70, 0x00, 0x0E, 0xC0, 0x01, 0x38, 0x00, 0x07, 0xE0, 0x00, 0x1C, 0x80, 0x03, 0x70, 0x00, 0x0E,
    0xC0, 0x01, 0x38, 0x00, 0x07, 0xE0, 0x07, 0xFC, 0x80, 0x1F, 0xF0, 0x07, 0xEE, 0xE0, 0xFC, 0x1F, 0xFF, 0x01, 0x07,  // FreeSans32_J
    0x07, 0xE0, 0x1D, 0xC0, 0x73, 0x80, 0xC7, 0x01, 0x0F, 0x07, 0x1E, 0x1C, 0x3C, 0x70, 0x78, 0xC0, 0xF1, 0x00, 0xE7, 0x01,
    0xDC, 0x07, 0xF0, 0x1F, 0xC0, 0xEF, 0x00, 0x9F, 0x07, 0x3C, 0x1C, 0x70, 0xE0, 0xC0, 0x81, 0x07, 0x07, 0x3C, 0x1C, 0xE0,
    0x70, 0x80, 0xC7, 0x01, 0x3C, 0x07, 0xE0, 0x1C, 0x00, 0x77, 0x00, 0x3C,  // FreeSans32_K
    0x07, 0xC0, 0x01, 0x70, 0x00, 0x1C, 0x00, 0x07, 0xC0, 0x01, 0x70, 0x00, 0x1C, 0x00, 0x07, 0xC0, 0x01, 0x70, 0x00, 0x1C,
    0x00, 0x07, 0xC0, 0x01, 0x70, 0x00, 0x1C, 0x00, 0x07, 0xC0, 0x01, 0x70, 0x00, 0x1C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x03,  // FreeSans32_L
    0x0F, 0x00, 0xFE, 0x03, 0x80, 0xFF, 0x01, 0xF0, 0x7F, 0x00, 0xFC, 0x1B, 0x00, 0xFB, 0x0E, 0xE0, 0xBE, 0x03, 0xB8, 0xCF,
    0x00, 0xE6, 0x73, 0xC0, 0xF9, 0x1C, 0x70, 0x3E, 0x06, 0x8C, 0x8F, 0x83, 0xE3, 0xE3, 0xE0, 0xF8, 0x30, 0x18, 0x3E, 0x1C,
    0x87, 0x0F, 0xC7, 0xE1, 0x83, 0x31, 0xF8, 0xE0, 0x0E, 0x3E, 0xB8, 0x83, 0x0F, 0x6C, 0xE0, 0x03, 0x1F, 0xF8, 0xC0, 0x07,
    0x3E, 0xE0, 0x80, 0x03,  // FreeSans32_M
    0x07, 0x80, 0x3F, 0x00, 0xFE, 0x01, 0xF8, 0x07, 0xE0, 0x3B, 0x80, 0xEF, 0x01, 0x3E, 0x07, 0xF8, 0x38, 0xE0, 0xE3, 0x80,
    0x0F, 0x07, 0x3E, 0x3C, 0xF8, 0xE0, 0xE0, 0x03, 0x87, 0x0F, 0x3C, 0x3E, 0xE0, 0xF8, 0x00, 0xE7, 0x03, 0xBC, 0x0F, 0xE0,
    0x3E, 0x00, 0xFF, 0x00, 0xFC, 0x03, 0xE0, 0x0F, 0x80, 0x3F, 0x00, 0x3C,  // FreeSans32_N
    0x00, 0x3E, 0x00, 0xE0, 0xFF, 0x00, 0xF8, 0xFF, 0x00, 0x1E, 0xF0, 0x81, 0x07, 0xF0, 0xE0, 0x01, 0xF0, 0x78, 0x00, 0xF0,
    0x1C, 0x00, 0x70, 0x0E, 0x00, 0x38, 0x07, 0x00, 0xFC, 0x01, 0x00, 0xFC, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x3F, 0x00, 0x80,
    0x1F, 0x00, 0xC0, 0x1D, 0x00, 0xF0, 0x0E, 0x00, 0x38, 0x07, 0x00, 0x9C, 0x07, 0x00, 0x8F, 0x07, 0x80, 0x83, 0x07, 0xF0,
    0xC0, 0x07, 0x7C, 0x80, 0xFF, 0x0F, 0x80, 0xFF, 0x03, 0x00, 0x3E, 0x00,  // FreeSans32_O
    0xFF, 0x1F, 0xFF, 0x7F, 0x07, 0x7C, 0x07, 0xF0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xF0,
    0xFF, 0x7F, 0xFF, 0x3F, 0xFF, 0x1F, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00,
    0x07, 0x00, 0x07, 0x00, 0x07, 0x00,  // FreeSans32_P
    0x00, 0x3E, 0x00, 0xE0, 0xFF, 0x00, 0xF8, 0xFF, 0x00, 0x1E, 0xF0, 0x81, 0x07, 0xF0, 0xE0, 0x01, 0xF0, 0x78, 0x00, 0xF0,
    0x1C, 0x00, 0x70, 0x0E, 0x00, 0x38, 0x07, 0x00, 0xFC, 0x01, 0x00, 0xFC, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x3F, 0x00, 0x80,
    0x1F, 0x00, 0xC0, 0x1D, 0x00, 0xF0, 0x0E, 0x00, 0x38, 0x07, 0x20, 0x9C, 0x07, 0x30, 0x8F, 0x07, 0xBC, 0x83, 0x07, 0xFC,
    0xC0, 0x07, 0x7C, 0x80, 0xFF, 0x7F, 0x80, 0xFF, 0x7B, 0x00, 0x1E, 0x38,  // FreeSans32_Q
    0xFF, 0x3F, 0xFC, 0xFF, 0x73, 0x00, 0xDF, 0x01, 0x78, 0x07, 0xC0, 0x1D, 0x00, 0x77, 0x00, 0xDC, 0x01, 0x70, 0x07, 0xC0,
    0x1D, 0x80, 0xF3, 0xFF, 0xC7, 0xFF, 0x0F, 0xFF, 0x7F, 0x1C, 0x80, 0x73, 0x00, 0xDC, 0x01, 0x70, 0x07, 0xC0, 0x1D, 0x00,
    0x77, 0x00, 0xDC, 0x01, 0x70, 0x07, 0xC0, 0x1D, 0x00, 0x7F, 0x00, 0x3C,  // FreeSans32_R
    0x80, 0x03, 0xE0, 0xFF, 0xC0, 0xFF, 0x87, 0x07, 0x3C, 0x0E, 0xE0, 0x1C, 0x00, 0x77, 0x00, 0xDC, 0x01, 0x70, 0x0F, 0x00,
    0x78, 0x00, 0xE0, 0x0F, 0x00, 0xFF, 0x03, 0xE0, 0x7F, 0x00, 0xFC, 0x03, 0x00, 0x1F, 0x00, 0xF0, 0x00, 0x80, 0x0F, 0x00,
    0x7E, 0x00, 0xF8, 0x01, 0xE0, 0x0F, 0xC0, 0x79, 0xC0, 0xC7, 0xFF, 0x0F, 0xFE, 0x0F, 0xC0, 0x07, 0x00,  // FreeSans32_S
    0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x70, 0x00, 0xC0, 0x01, 0x00, 0x07, 0x00, 0x1C, 0x00, 0x70, 0x00, 0xC0, 0x01, 0x00, 0x07,
    0x00, 0x1C, 0x00, 0x70, 0x00, 0xC0, 0x01, 0x00, 0x07, 0x00, 0x1C, 0x00, 0x70, 0x00, 0xC0, 0x01, 0x00, 0x07, 0x00, 0x1C,
    0x00, 0x70, 0x00, 0xC0, 0x01, 0x00, 0x07, 0x00, 0x1C, 0x00, 0x70, 0x00,  // FreeSans32_T
    0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3F, 0x00, 0x7E, 0x00, 0xFC, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F,
    0x80, 0x1F, 0x00, 0x3F, 0x00, 0x7E, 0x00, 0xFC, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00,
    0x7F, 0x00, 0xEF, 0x01, 0x8F, 0xFF, 0x0F, 0xFE, 0x0F, 0xE0, 0x03,  // FreeSans32_U
    0x07, 0x00, 0x3F, 0x00, 0xBC, 0x03, 0xE0, 0x1C, 0x00, 0xE7, 0x00, 0x3C, 0x0E, 0xE0, 0x70, 0x00, 0x87, 0x03, 0x1C, 0x38,
    0xE0, 0xC0, 0x01, 0x07, 0x0E, 0x1C, 0xE0, 0xE0, 0x00, 0x07, 0x07, 0x38, 0x1C, 0x80, 0xE3, 0x00, 0x1C, 0x07, 0xC0, 0x1D,
    0x00, 0xEE, 0x00, 0x70, 0x07, 0x00, 0x1F, 0x00, 0xF8, 0x00, 0xC0, 0x07, 0x00, 0x1C, 0x00,  // FreeSans32_V
    0x07, 0xF0, 0x00, 0x7E, 0x00, 0x0F, 0xE0, 0x07, 0xF0, 0x00, 0xFE, 0x80, 0x1F, 0xF0, 0x0E, 0xF8, 0x01, 0xE7, 0x80, 0x1D,
    0x70, 0x0E, 0x9C, 0x01, 0xE7, 0xC1, 0x39, 0x78, 0x1C, 0x9C, 0x83, 0xC3, 0xC1, 0x30, 0x38, 0x1C, 0x0E, 0x87, 0x83, 0xE3,
    0x70, 0x3C, 0x38, 0x0E, 0xC7, 0x81, 0x63, 0x60, 0x1C, 0x38, 0x07, 0xCE, 0x01, 0x73, 0xE0, 0x1C, 0x70, 0x07, 0xEE, 0x00,
    0x3F, 0xC0, 0x0F, 0xF0, 0x03, 0xFC, 0x00, 0x3E, 0xC0, 0x07, 0xE0, 0x01, 0x78, 0x00, 0x1E, 0x80, 0x07, 0xE0, 0x01, 0x78,
    0x00,  // FreeSans32_W
    0x0F, 0x80, 0xF7, 0x00, 0x1E, 0x07, 0x70, 0x70, 0xC0, 0x83, 0x07, 0x0F, 0x38, 0x38, 0x80, 0xE3, 0x00, 0xBC, 0x07, 0xC0,
    0x1D, 0x00, 0x7C, 0x00, 0xE0, 0x03, 0x00, 0x1F, 0x00, 0xF8, 0x00, 0xE0, 0x0E, 0x80, 0xF7, 0x00, 0x1C, 0x07, 0x70, 0x70,
    0xC0, 0x83, 0x07, 0x0E, 0x38, 0x38, 0x80, 0xE3, 0x01, 0x3C, 0x07, 0xC0, 0x1F, 0x00, 0x1C,  // FreeSans32_X
    0x0F, 0x00, 0xEF, 0x00, 0x70, 0x1E, 0x80, 0xC3, 0x01, 0x3C, 0x38, 0xC0, 0x81, 0x07, 0x1E, 0x70, 0xE0, 0x00, 0x0F, 0x07,
    0xE0, 0x78, 0x00, 0x9C, 0x03, 0xC0, 0x3F, 0x00, 0xF8, 0x01, 0x00, 0x0F, 0x00, 0xF0, 0x00, 0x00, 0x07, 0x00, 0x70, 0x00,
    0x00, 0x07, 0x00, 0x70, 0x00, 0x00, 0x07, 0x00, 0x70, 0x00, 0x00, 0x07, 0x00, 0x70, 0x00, 0x00, 0x07, 0x00,  // FreeSans32_Y
    0xFE, 0xFF, 0xFB, 0xFF, 0x0F, 0x00, 0x3C, 0x00, 0x78, 0x00, 0xF0, 0x00, 0xE0, 0x01, 0x80, 0x03, 0x00, 0x0F, 0x00, 0x1E,
    0x00, 0x3C, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0F, 0x00, 0x1C, 0x00, 0x78, 0x00, 0xF0, 0x00,
    0xE0, 0x01, 0x80, 0x03, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F,  // FreeSans32_Z
};
/*
    <Generate from ./font_table_width_height_margin_index.tpl>
    generate font_table_t struct: [width, height, margin, index]
    font: FreeSans
    size: 32
    calc_margin: True
    encoding method: raw

    width: Adaptive
    height: Adaptive
*/

typedef struct
{
    uint8_t width;
    uint8_t height;
    uint8_t margin_top      :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_bottom   :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_left     :FONT_MARGIN_DATABIT_SIZE;
    uint8_t margin_right    :FONT_MARGIN_DATABIT_SIZE;
    uint16_t bmp_index;
}font_table_t;

static const font_table_t freesans32_table[] = {
    {18, 32, 3, 5, 1, 2, 0},  // FreeSans32_0
    {18, 32, 3, 6, 3, 7, 45},  // FreeSans32_1
    {18, 32, 3, 6, 1, 2, 68},  // FreeSans32_2
    {18, 32, 3, 5, 1, 2, 112},  // FreeSans32_3
    {18, 32, 3, 6, 1, 1, 157},  // FreeSans32_4
    {18, 32, 3, 5, 1, 2, 203},  // FreeSans32_5
    {18, 32, 3, 5, 1, 2, 248},  // FreeSans32_6
    {18, 32, 3, 6, 1, 1, 293},  // FreeSans32_7
    {18, 32, 3, 5, 1, 2, 339},  // FreeSans32_8
    {18, 32, 3, 5, 1, 2, 384},  // FreeSans32_9
    {8, 32, 9, 6, 3, 2, 429},  // FreeSans32_colon
    {18, 32, 8, 7, 1, 1, 436},  // FreeSans32_a
    {18, 32, 2, 6, 2, 1, 470},  // FreeSans32_b
    {17, 32, 8, 7, 1, 2, 515},  // FreeSans32_c
    {18, 32, 2, 6, 1, 2, 545},  // FreeSans32_d
    {18, 32, 8, 7, 1, 2, 590},  // FreeSans32_e
    {9, 32, 2, 7, 1, 1, 622},  // FreeSans32_f
    {18, 33, 8, 1, 1, 2, 643},  // FreeSans32_g
    {18, 32, 2, 7, 2, 3, 688},  // FreeSans32_h
    {8, 32, 2, 7, 2, 3, 726},  // FreeSans32_i
    {8, 33, 2, 1, 0, 3, 735},  // FreeSans32_j
    {17, 32, 2, 7, 2, 1, 754},  // FreeSans32_k
    {7, 32, 2, 7, 2, 2, 795},  // FreeSans32_l
    {26, 32, 8, 7, 2, 2, 804},  // FreeSans32_m
    {18, 32, 8, 7, 2, 3, 851},  // FreeSans32_n
    {18, 32, 8, 7, 1, 2, 879},  // FreeSans32_o
    {18, 33, 8, 1, 2, 1, 911},  // FreeSans32_p
    {18, 33, 8, 1, 1, 2, 956},  // FreeSans32_q
    {11, 32, 8, 7, 2, 1, 1001},  // FreeSans32_r
    {16, 32, 8, 7, 1, 1, 1018},  // FreeSans32_s
    {9, 32, 4, 6, 1, 1, 1048},  // FreeSans32_t
    {18, 32, 9, 5, 2, 3, 1068},  // FreeSans32_u
    {16, 32, 9, 6, 0, 1, 1098},  // FreeSans32_v
    {24, 32, 9, 6, 0, 1, 1130},  // FreeSans32_w
    {16, 32, 9, 6, 1, 1, 1179},  // FreeSans32_x
    {16, 33, 9, 0, 0, 1, 1209},  // FreeSans32_y
    {16, 32, 9, 6, 1, 1, 1254},  // FreeSans32_z
    {22, 32, 2, 7, 1, 1, 1284},  // FreeSans32_A
    {22, 32, 2, 7, 3, 2, 1342},  // FreeSans32_B
    {23, 32, 2, 5, 1, 2, 1391},  // FreeSans32_C
    {23, 32, 2, 7, 3, 2, 1454},  // FreeSans32_D
    {21, 32, 2, 7, 3, 2, 1506},  // FreeSans32_E
    {20, 32, 2, 7, 3, 2, 1552},  // FreeSans32_F
    {25, 32, 2, 5, 1, 2, 1596},  // FreeSans32_G
    {24, 32, 2, 7, 3, 3, 1665},  // FreeSans32_H
    {9, 32, 2, 7, 3, 3, 1717},  // FreeSans32_I
    {17, 32, 2, 6, 1, 3, 1726},  // FreeSans32_J
    {22, 32, 2, 7, 3, 1, 1765},  // FreeSans32_K
    {19, 32, 2, 7, 3, 2, 1817},  // FreeSans32_L
    {28, 32, 2, 7, 3, 3, 1858},  // FreeSans32_M
    {24, 32, 2, 7, 3, 3, 1922},  // FreeSans32_N
    {26, 32, 2, 5, 1, 2, 1974},  // FreeSans32_O
    {21, 32, 2, 7, 3, 2, 2046},  // FreeSans32_P
    {26, 32, 2, 5, 1, 2, 2092},  // FreeSans32_Q
    {23, 32, 2, 7, 3, 2, 2164},  // FreeSans32_R
    {22, 32, 2, 5, 2, 2, 2216},  // FreeSans32_S
    {21, 32, 2, 7, 1, 2, 2273},  // FreeSans32_T
    {24, 32, 2, 6, 3, 4, 2325},  // FreeSans32_U
    {21, 32, 2, 7, 1, 1, 2376},  // FreeSans32_V
    {30, 32, 2, 7, 1, 1, 2431},  // FreeSans32_W
    {22, 32, 2, 7, 1, 2, 2512},  // FreeSans32_X
    {22, 32, 2, 7, 1, 1, 2567},  // FreeSans32_Y
    {20, 32, 2, 7, 1, 1, 2625},  // FreeSans32_Z
};

#define IS_LAST(e)  (((e) - freesans32_table) == (sizeof(freesans32_table) / sizeof(freesans32_table[0]) - 1)  ) 

static bool freesans32_lookup(utf8_t c, font_symbol_t *sym)
{
    const font_table_t *t = 0;

    if(c >= '0' && c<= '9')
    {
        t = &freesans32_table[(c-'0')];
    }
    else if(c == ':')
    {
        t = &freesans32_table[10];
    }
    else if(c >= 'a' && c <= 'z')
    {
        t = &freesans32_table[((c-'a')+10+1)];
    }
    else if(c >= 'A' && c <= 'Z')
    {
        t = &freesans32_table[((c-'A')+10+1+26)];
    }
    else
    {
        return false;
    }

    sym->width = t->width;
    sym->height = t->height;
    sym->margin_top = t->margin_top;
    sym->margin_bottom = t->margin_bottom;
    sym->margin_left = t->margin_left;
    sym->margin_right = t->margin_right;
    sym->bmp_index = t->bmp_index;
    if(IS_LAST(t))
    {
        sym->size = sizeof(freesans32_table) - t->bmp_index;
    }
    else
    {
        sym->size = (t+1)->bmp_index - t->bmp_index;
    }
    return true;
}

#define FREESANS32_DEFAULT_WIDTH    24
#define FREESANS32_DEFAULT_HEIGHT   32

font_t freesans32 = 
{
    .default_width = FREESANS32_DEFAULT_WIDTH,
    .default_height = FREESANS32_DEFAULT_HEIGHT,
    .bmp_base = freesans32_bmp,
    .lookup = freesans32_lookup
};
