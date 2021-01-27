/*
    <Generate from ./bmp.tpl>
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
    0x40, 0x2E, 0x00, 0x1E, 0x0E, 0x34, 0x40, 0xC2, 0x01, 0x30, 0x0C, 0x00, 0xC6, 0x00, 0x90, 0x09, 0x00, 0x99, 0x00, 0x90,
    0x09, 0x00, 0xD9, 0x00, 0x90, 0x0C, 0x00, 0xC9, 0x00, 0x70, 0x28, 0x00, 0x03, 0x07, 0x1C, 0xC0, 0xBA, 0x00, 0x50, 0x00,  // FreeMono24_0
    0x80, 0x01, 0x80, 0x0B, 0x80, 0x27, 0x80, 0x93, 0x00, 0x41, 0x02, 0x00, 0x09, 0x00, 0x24, 0x00, 0x90, 0x00, 0x40, 0x02,
    0x00, 0x09, 0x00, 0x24, 0x00, 0x90, 0x00, 0x40, 0x02, 0x00, 0x09, 0xF0, 0xFF, 0x2F,  // FreeMono24_1
    0x80, 0x2F, 0x40, 0x47, 0x0E, 0x0C, 0x40, 0x93, 0x00, 0x60, 0x00, 0x00, 0x06, 0x00, 0x30, 0x00, 0x80, 0x02, 0x00, 0x0A,
    0x00, 0x28, 0x00, 0xA0, 0x00, 0x80, 0x02, 0x00, 0x0A, 0x00, 0x2C, 0x00, 0x70, 0x00, 0x60, 0xFF, 0xFF, 0x07,  // FreeMono24_2
    0x80, 0x6F, 0x40, 0x07, 0x1D, 0x08, 0x00, 0x03, 0x00, 0x60, 0x00, 0x00, 0x06, 0x00, 0x30, 0x00, 0xE9, 0x00, 0x90, 0x0B,
    0x00, 0x40, 0x03, 0x00, 0x90, 0x00, 0x00, 0x0C, 0x00, 0xC0, 0x00, 0x00, 0xA9, 0x00, 0x34, 0xF4, 0xBA, 0x00, 0x50, 0x00,  // FreeMono24_3
    0x00, 0xA0, 0x00, 0x80, 0x0E, 0x00, 0xCC, 0x00, 0x70, 0x0C, 0x40, 0xC2, 0x00, 0x0C, 0x0C, 0x60, 0xC0, 0x00, 0x03, 0x0C,
    0x18, 0xC0, 0x90, 0x00, 0x0C, 0xFD, 0xFF, 0x07, 0x00, 0x0C, 0x00, 0xC0, 0x00, 0x00, 0x0C, 0x00, 0xFD, 0x07,  // FreeMono24_4
    0x74, 0x55, 0x41, 0x02, 0x00, 0x24, 0x00, 0x40, 0x02, 0x00, 0x24, 0x15, 0x40, 0xAF, 0x1E, 0x10, 0x00, 0x03, 0x00, 0x90,
    0x00, 0x00, 0x0C, 0x00, 0xC0, 0x00, 0x00, 0x0C, 0x00, 0x60, 0x1D, 0x40, 0x03, 0xAF, 0x0B, 0x00, 0x05, 0x00,  // FreeMono24_5
    0x00, 0xF8, 0x02, 0x2E, 0x04, 0x0A, 0x00, 0x09, 0x00, 0x0C, 0x00, 0x24, 0x00, 0x60, 0xA4, 0x81, 0x79, 0x39, 0x2A, 0x80,
    0x3A, 0x00, 0x6C, 0x00, 0x70, 0x02, 0xC0, 0x0C, 0x00, 0xD3, 0x00, 0x07, 0xAD, 0x07, 0x40, 0x01,  // FreeMono24_6
    0x59, 0x55, 0x57, 0x00, 0x60, 0x00, 0x00, 0x03, 0x00, 0x24, 0x00, 0x80, 0x01, 0x00, 0x0C, 0x00, 0xD0, 0x00, 0x00, 0x06,
    0x00, 0x30, 0x00, 0x00, 0x03, 0x00, 0x28, 0x00, 0xC0, 0x00, 0x00, 0x0C, 0x00, 0x90, 0x00,  // FreeMono24_7
    0xD0, 0x0B, 0xB0, 0xD1, 0xA1, 0x00, 0xCC, 0x00, 0x60, 0x03, 0x80, 0x19, 0x00, 0xC3, 0x41, 0x07, 0xFC, 0x07, 0x1C, 0x70,
    0x0C, 0x00, 0x37, 0x00, 0xA4, 0x00, 0x90, 0x03, 0x80, 0x35, 0x40, 0x43, 0xEB, 0x02, 0x50, 0x00,  // FreeMono24_8
    0x90, 0x0B, 0xD0, 0xD1, 0xC1, 0x00, 0x8C, 0x01, 0x90, 0x06, 0x00, 0x1B, 0x00, 0x9C, 0x00, 0x3C, 0x07, 0xA8, 0xF0, 0x1F,
    0x03, 0x00, 0x0C, 0x00, 0x24, 0x00, 0x70, 0x00, 0xA0, 0x00, 0xB0, 0x90, 0x7E, 0x00, 0x04, 0x00,  // FreeMono24_9
    0x7C, 0xFE, 0xBC, 0x00, 0x00, 0x00, 0x00, 0x68, 0xFE, 0xBD, 0x10,  // FreeMono24_colon
    0xF8, 0xBA, 0x00, 0x01, 0xD0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0C, 0xF4, 0xFF, 0x83, 0x07, 0xC0, 0x30, 0x00, 0x30, 0x0C,
    0x00, 0x0C, 0x03, 0xD0, 0x43, 0xAB, 0xCB, 0x0F, 0x15, 0x00, 0x00,  // FreeMono24_a
    0x74, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x18, 0x50, 0x00, 0x60, 0xB8, 0x2E, 0x80, 0x1E, 0x80, 0x02,
    0x1E, 0x00, 0x1C, 0x28, 0x00, 0xD0, 0xA0, 0x00, 0x00, 0x83, 0x01, 0x00, 0x0C, 0x0A, 0x00, 0x34, 0x38, 0x00, 0x70, 0xA0,
    0x07, 0xA0, 0xF4, 0xF1, 0xBA, 0x00, 0x00, 0x14, 0x00,  // FreeMono24_b
    0xD0, 0xFA, 0x0A, 0x0A, 0x80, 0x97, 0x00, 0xC0, 0x1D, 0x00, 0x10, 0x03, 0x00, 0xC0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x24,
    0x00, 0x40, 0x2C, 0x00, 0x1D, 0xB8, 0xFA, 0x00, 0x50, 0x01, 0x00,  // FreeMono24_c
    0x00, 0x00, 0x35, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x0C, 0xC0, 0xEB, 0x31, 0xC0, 0x01, 0xE8, 0xC0,
    0x01, 0x80, 0x43, 0x03, 0x00, 0x0C, 0x09, 0x00, 0x30, 0x24, 0x00, 0xC0, 0xD0, 0x00, 0x00, 0x03, 0x07, 0x00, 0x0E, 0x70,
    0x00, 0x3A, 0x00, 0xAF, 0xC7, 0x0F, 0x40, 0x01, 0x00,  // FreeMono24_d
    0xC0, 0xEB, 0x03, 0x70, 0x00, 0x0D, 0x1C, 0x00, 0x34, 0x0D, 0x00, 0x30, 0xFD, 0xFF, 0x7F, 0x09, 0x00, 0x00, 0x0C, 0x00,
    0x00, 0x1C, 0x00, 0x00, 0x70, 0x00, 0x74, 0x80, 0xAB, 0x1F, 0x00, 0x54, 0x00,  // FreeMono24_e
    0x00, 0x50, 0x05, 0x80, 0xAB, 0x0A, 0x34, 0x00, 0x00, 0x09, 0x00, 0x40, 0x02, 0x00, 0xFF, 0xFF, 0x02, 0x24, 0x00, 0x00,
    0x09, 0x00, 0x40, 0x02, 0x00, 0x90, 0x00, 0x00, 0x24, 0x00, 0x00, 0x09, 0x00, 0x40, 0x02, 0x00, 0x90, 0x00, 0xD0, 0xFF,
    0x7F, 0x00,  // FreeMono24_f
    0xD0, 0xFB, 0xF4, 0xD1, 0x00, 0xAC, 0xC0, 0x00, 0xC0, 0x42, 0x02, 0x00, 0x0A, 0x09, 0x00, 0x24, 0x24, 0x00, 0xA0, 0xC0,
    0x00, 0xC0, 0x02, 0x0A, 0x80, 0x0B, 0xE0, 0x91, 0x26, 0x00, 0xA9, 0x91, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x06, 0x00,
    0x00, 0x0D, 0x00, 0xA9, 0x0E, 0x00, 0x54, 0x05, 0x00,  // FreeMono24_g
    0x19, 0x00, 0x00, 0x39, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x10, 0x00, 0x30, 0xEE, 0x07, 0xF0, 0x01,
    0x0D, 0x70, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30,
    0x00, 0x18, 0xFE, 0x02, 0xFF,  // FreeMono24_h
    0x00, 0x0B, 0x00, 0xB0, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x09, 0x00, 0x90, 0x00,
    0x00, 0x09, 0x00, 0x90, 0x00, 0x00, 0x09, 0x00, 0x90, 0x00, 0x00, 0x09, 0x00, 0x90, 0x00, 0xFE, 0xFF, 0x0F,  // FreeMono24_i
    0x00, 0x0C, 0x00, 0x0C, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60,
    0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x30, 0x00, 0x34, 0xA9, 0x0E,  // FreeMono24_j
    0x24, 0x00, 0x00, 0x74, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0xD0, 0x2F, 0x60, 0xC0,
    0x01, 0x60, 0x74, 0x00, 0x60, 0x0D, 0x00, 0xE0, 0x0B, 0x00, 0xA0, 0x28, 0x00, 0x60, 0xA0, 0x00, 0x60, 0x80, 0x02, 0x60,
    0x00, 0x0A, 0x7D, 0x40, 0xFF,  // FreeMono24_k
    0xA4, 0x06, 0x40, 0xA5, 0x00, 0x00, 0x09, 0x00, 0x90, 0x00, 0x00, 0x09, 0x00, 0x90, 0x00, 0x00, 0x09, 0x00, 0x90, 0x00,
    0x00, 0x09, 0x00, 0x90, 0x00, 0x00, 0x09, 0x00, 0x90, 0x00, 0x00, 0x09, 0x00, 0x90, 0x00, 0xFE, 0xFF, 0x0F,  // FreeMono24_l
    0x00, 0x04, 0x10, 0xE0, 0xBA, 0xE3, 0x0E, 0xB4, 0xE0, 0x42, 0x42, 0x03, 0x0D, 0x30, 0x24, 0x80, 0x00, 0x43, 0x02, 0x08,
    0x30, 0x24, 0x80, 0x00, 0x43, 0x02, 0x08, 0x30, 0x24, 0x80, 0x00, 0x43, 0x02, 0x08, 0x30, 0xFE, 0xC0, 0x03, 0x0F,  // FreeMono24_m
    0x00, 0x10, 0x00, 0x3D, 0xEE, 0x07, 0xF0, 0x01, 0x0C, 0x70, 0x00, 0x18, 0x30, 0x00, 0x24, 0x30, 0x00, 0x24, 0x30, 0x00,
    0x24, 0x30, 0x00, 0x24, 0x30, 0x00, 0x24, 0x30, 0x00, 0x24, 0xFE, 0x02, 0xFE,  // FreeMono24_n
    0xE0, 0xFA, 0x01, 0x0B, 0xD0, 0xA1, 0x00, 0xC0, 0x0C, 0x00, 0x60, 0x03, 0x00, 0xE4, 0x00, 0x00, 0x39, 0x00, 0x80, 0x29,
    0x00, 0x30, 0x1C, 0x00, 0x07, 0xB8, 0x7E, 0x00, 0x50, 0x00, 0x00,  // FreeMono24_o
    0x7D, 0xBC, 0x2E, 0x80, 0x1E, 0x80, 0x03, 0x0E, 0x00, 0x18, 0x28, 0x00, 0xC0, 0x60, 0x00, 0x00, 0x83, 0x02, 0x00, 0x0C,
    0x0E, 0x00, 0x24, 0xB8, 0x00, 0x30, 0x60, 0x1E, 0x79, 0x80, 0x81, 0x1A, 0x00, 0x06, 0x00, 0x00, 0x18, 0x00, 0x00, 0x60,
    0x00, 0x00, 0xE0, 0x2A, 0x00, 0x40, 0x55, 0x00, 0x00,  // FreeMono24_p
    0xD0, 0xEB, 0xF2, 0xD3, 0x01, 0xE8, 0xC0, 0x00, 0x80, 0x43, 0x02, 0x00, 0x0C, 0x09, 0x00, 0x30, 0x24, 0x00, 0xC0, 0xC0,
    0x00, 0x40, 0x03, 0x0A, 0x00, 0x0F, 0xE0, 0x91, 0x33, 0x00, 0xA9, 0xC1, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0C, 0x00,
    0x00, 0x30, 0x00, 0x00, 0xE9, 0x06, 0x00, 0x54, 0x15,  // FreeMono24_q
    0xFD, 0xE0, 0x1F, 0x30, 0x0B, 0x08, 0x7C, 0x00, 0x00, 0x07, 0x00, 0xC0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0C, 0x00, 0x00,
    0x03, 0x00, 0xC0, 0x00, 0xC0, 0xFF, 0xBF, 0x00,  // FreeMono24_r
    0xE0, 0xFA, 0xC6, 0x02, 0x70, 0x0C, 0x00, 0x86, 0x02, 0x00, 0xD0, 0x6F, 0x00, 0x00, 0x39, 0x00, 0x00, 0x6D, 0x00, 0xC0,
    0x0E, 0x00, 0x9B, 0xAF, 0x1F, 0x00, 0x05, 0x00,  // FreeMono24_s
    0x60, 0x00, 0x00, 0x18, 0x00, 0x00, 0x06, 0x00, 0xFC, 0xFF, 0x0F, 0x60, 0x00, 0x00, 0x18, 0x00, 0x00, 0x06, 0x00, 0x80,
    0x01, 0x00, 0x60, 0x00, 0x00, 0x18, 0x00, 0x00, 0x09, 0x00, 0x40, 0x03, 0x90, 0x80, 0xAB, 0x1F, 0x00, 0x15, 0x00,  // FreeMono24_t
    0x3F, 0x80, 0x2F, 0x30, 0x00, 0x24, 0x30, 0x00, 0x24, 0x30, 0x00, 0x24, 0x30, 0x00, 0x24, 0x30, 0x00, 0x24, 0x30, 0x00,
    0x24, 0x30, 0x00, 0x28, 0x70, 0x00, 0x2F, 0xC0, 0xFA, 0xF5, 0x00, 0x05, 0x00,  // FreeMono24_u
    0xFF, 0x01, 0xFF, 0x92, 0x00, 0xC0, 0x00, 0x03, 0x80, 0x01, 0x28, 0x00, 0x03, 0xC0, 0x00, 0x06, 0x00, 0x06, 0x0C, 0x00,
    0x30, 0x24, 0x00, 0x80, 0x31, 0x00, 0x00, 0x9D, 0x00, 0x00, 0xF0, 0x01, 0x00,  // FreeMono24_v
    0xBF, 0x00, 0xFC, 0x32, 0x00, 0x80, 0xC1, 0x00, 0x01, 0x03, 0x06, 0x0F, 0x0C, 0x24, 0x6C, 0x30, 0xC0, 0x24, 0x93, 0x00,
    0x73, 0x8C, 0x01, 0xD8, 0x90, 0x03, 0xD0, 0x02, 0x0F, 0x40, 0x03, 0x2C, 0x00,  // FreeMono24_w
    0xFC, 0x02, 0x7F, 0xB0, 0x00, 0x1C, 0xC0, 0x02, 0x07, 0x00, 0xCA, 0x00, 0x00, 0x3C, 0x00, 0x00, 0xAD, 0x00, 0x40, 0x83,
    0x02, 0xD0, 0x00, 0x0A, 0x34, 0x00, 0x28, 0xFE, 0x02, 0xFF,  // FreeMono24_x
    0xFE, 0x00, 0xFE, 0x24, 0x00, 0x30, 0x30, 0x00, 0x18, 0x90, 0x00, 0x0C, 0xC0, 0x00, 0x06, 0x40, 0x02, 0x03, 0x00, 0x83,
    0x01, 0x00, 0xC9, 0x00, 0x00, 0x6C, 0x00, 0x00, 0x34, 0x00, 0x00, 0x24, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x09, 0x00, 0xA8,
    0x1B, 0x00, 0x54, 0x15, 0x00,  // FreeMono24_y
    0xFF, 0xFF, 0x0D, 0x40, 0x33, 0x40, 0x03, 0x40, 0x03, 0x00, 0x03, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0x80, 0x0A, 0x40,
    0xFE, 0xFF, 0x0B,  // FreeMono24_z
    0x80, 0xAA, 0x00, 0x00, 0x94, 0x1F, 0x00, 0x00, 0x54, 0x02, 0x00, 0xC0, 0x30, 0x00, 0x00, 0x08, 0x06, 0x00, 0x60, 0xC0,
    0x00, 0x00, 0x03, 0x0C, 0x00, 0x24, 0x40, 0x02, 0x80, 0xAA, 0x3A, 0x00, 0x5C, 0x55, 0x07, 0x90, 0x00, 0x90, 0x00, 0x03,
    0x00, 0x0C, 0x30, 0x00, 0x80, 0xE1, 0x3F, 0x80, 0xFF,  // FreeMono24_A
    0xA9, 0x6A, 0x00, 0x75, 0x95, 0x0B, 0x30, 0x00, 0x28, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x18, 0xB0, 0xAA,
    0x07, 0x70, 0x95, 0x1E, 0x30, 0x00, 0x70, 0x30, 0x00, 0xC0, 0x30, 0x00, 0xC0, 0x30, 0x00, 0xD0, 0x30, 0x00, 0x34, 0xFF,
    0xFF, 0x0B,  // FreeMono24_B
    0x00, 0xBA, 0x01, 0xD0, 0x46, 0x6E, 0x30, 0x00, 0x74, 0x1C, 0x00, 0x60, 0x0C, 0x00, 0x00, 0x09, 0x00, 0x00, 0x09, 0x00,
    0x00, 0x09, 0x00, 0x00, 0x09, 0x00, 0x00, 0x09, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x34, 0x00, 0x90, 0xE0, 0x00, 0x34, 0x40,
    0xAF, 0x0B, 0x00, 0x50, 0x00,  // FreeMono24_C
    0xA9, 0x5A, 0x00, 0x69, 0xE5, 0x03, 0x18, 0x00, 0x0D, 0x18, 0x00, 0x24, 0x18, 0x00, 0x30, 0x18, 0x00, 0x60, 0x18, 0x00,
    0x60, 0x18, 0x00, 0x60, 0x18, 0x00, 0x60, 0x18, 0x00, 0x60, 0x18, 0x00, 0x30, 0x18, 0x00, 0x1C, 0x18, 0x40, 0x0B, 0xFF,
    0xFF, 0x01,  // FreeMono24_D
    0xA9, 0xAA, 0x1A, 0x75, 0x55, 0x35, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x10, 0x30, 0x60, 0x00, 0xB0, 0x7A,
    0x00, 0x70, 0x75, 0x00, 0x30, 0x60, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x50, 0x30, 0x00, 0x60, 0x30, 0x00, 0x60, 0xFF,
    0xFF, 0x7F,  // FreeMono24_E
    0xA9, 0xAA, 0x2A, 0x75, 0x55, 0x65, 0x30, 0x00, 0x60, 0x30, 0x00, 0x50, 0x30, 0x00, 0x00, 0x30, 0x60, 0x00, 0xB0, 0x7A,
    0x00, 0x70, 0x75, 0x00, 0x30, 0x60, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0xFF,
    0x3F, 0x00,  // FreeMono24_F
    0x00, 0xB9, 0x02, 0x40, 0x1B, 0xF9, 0x01, 0x03, 0x00, 0x07, 0x07, 0x00, 0x14, 0x0C, 0x00, 0x00, 0x24, 0x00, 0x00, 0x90,
    0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x09, 0xD0, 0xFF, 0x25, 0x00, 0x80, 0xC1, 0x00, 0x00, 0x06, 0x0A, 0x00, 0x18, 0xB0,
    0x00, 0x60, 0x00, 0xBE, 0xBE, 0x00, 0x00, 0x05, 0x00,  // FreeMono24_G
    0xA4, 0x01, 0x6A, 0x74, 0x01, 0x69, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0xB0, 0xAA,
    0x1E, 0x70, 0x55, 0x19, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0x30, 0x00, 0x18, 0xFE,
    0x43, 0xFF,  // FreeMono24_H
    0xA9, 0xAA, 0x55, 0x5E, 0x01, 0x24, 0x00, 0x90, 0x00, 0x40, 0x02, 0x00, 0x09, 0x00, 0x24, 0x00, 0x90, 0x00, 0x40, 0x02,
    0x00, 0x09, 0x00, 0x24, 0x00, 0x90, 0x00, 0x40, 0x02, 0xFC, 0xFF, 0x0B,  // FreeMono24_I
    0x00, 0x55, 0x57, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x40, 0x03, 0x0E, 0xC0, 0x00, 0xF4, 0x7E, 0x00, 0x40,
    0x05, 0x00,  // FreeMono24_J
    0xA9, 0x02, 0x69, 0xD4, 0x05, 0xF4, 0x01, 0x03, 0xD0, 0x00, 0x0C, 0xA0, 0x00, 0x30, 0xA0, 0x00, 0xC0, 0xB0, 0x00, 0x00,
    0xF3, 0x01, 0x00, 0x7C, 0x2C, 0x00, 0x30, 0xC0, 0x02, 0xC0, 0x00, 0x0C, 0x00, 0x03, 0x90, 0x00, 0x0C, 0x00, 0x03, 0x30,
    0x00, 0x28, 0xFC, 0x1F, 0xC0, 0x0B,  // FreeMono24_K
    0xA8, 0x2A, 0x00, 0xD4, 0x16, 0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0x00, 0x80, 0x01,
    0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0x40, 0x80, 0x01, 0xC0, 0x80, 0x01, 0xC0, 0x80, 0x01, 0xC0, 0x80, 0x01, 0xC0, 0xFD,
    0xFF, 0xFF,  // FreeMono24_L
    0x68, 0x00, 0x80, 0x86, 0x0F, 0x00, 0x7D, 0xA4, 0x01, 0x70, 0x43, 0x32, 0x40, 0x32, 0x24, 0x06, 0x0C, 0x43, 0xD2, 0xD0,
    0x30, 0x24, 0x0C, 0x06, 0x43, 0x42, 0x32, 0x30, 0x24, 0xB0, 0x01, 0x43, 0x02, 0x0D, 0x30, 0x24, 0x00, 0x00, 0x43, 0x02,
    0x00, 0x30, 0x24, 0x00, 0x00, 0xE3, 0x3F, 0x40, 0xFF,  // FreeMono24_M
    0x1A, 0x00, 0xAA, 0x7D, 0x00, 0x75, 0xE8, 0x00, 0x30, 0x98, 0x02, 0x30, 0x18, 0x03, 0x30, 0x18, 0x0D, 0x30, 0x18, 0x1C,
    0x30, 0x18, 0x30, 0x30, 0x18, 0xA0, 0x30, 0x18, 0xC0, 0x30, 0x18, 0x40, 0x33, 0x18, 0x00, 0x36, 0x18, 0x00, 0x3C, 0xFF,
    0x02, 0x38,  // FreeMono24_N
    0x00, 0xBE, 0x01, 0xD0, 0x42, 0x0B, 0x30, 0x00, 0x28, 0x1C, 0x00, 0x70, 0x0D, 0x00, 0x90, 0x06, 0x00, 0xC0, 0x06, 0x00,
    0xC0, 0x03, 0x00, 0xC0, 0x06, 0x00, 0xC0, 0x09, 0x00, 0xC0, 0x0C, 0x00, 0xA0, 0x28, 0x00, 0x30, 0xB0, 0x00, 0x1D, 0x80,
    0xEB, 0x03, 0x00, 0x14, 0x00,  // FreeMono24_O
    0xA9, 0x6A, 0x40, 0x5D, 0xE5, 0x01, 0x03, 0xC0, 0xC1, 0x00, 0xC0, 0x30, 0x00, 0x30, 0x0C, 0x00, 0x0D, 0x03, 0xC0, 0xC1,
    0xAA, 0x1F, 0x70, 0x55, 0x00, 0x0C, 0x00, 0x00, 0x03, 0x00, 0xC0, 0x00, 0x00, 0x30, 0x00, 0xC0, 0xFF, 0x0F, 0x00,  // FreeMono24_P
    0x00, 0xBE, 0x01, 0xD0, 0x42, 0x0B, 0x30, 0x00, 0x28, 0x1C, 0x00, 0x70, 0x0D, 0x00, 0x90, 0x06, 0x00, 0xC0, 0x06, 0x00,
    0xC0, 0x03, 0x00, 0xC0, 0x06, 0x00, 0xC0, 0x09, 0x00, 0xC0, 0x0C, 0x00, 0xA0, 0x28, 0x00, 0x30, 0xB0, 0x00, 0x1D, 0x80,
    0xEB, 0x03, 0x00, 0x1E, 0x00, 0x80, 0xFF, 0xD6, 0x90, 0x41, 0x2A,  // FreeMono24_Q
    0xA9, 0x6A, 0x00, 0xD4, 0x55, 0x1E, 0x00, 0x03, 0xC0, 0x01, 0x0C, 0x00, 0x0C, 0x30, 0x00, 0x30, 0xC0, 0x00, 0xA0, 0x00,
    0x03, 0xA4, 0x00, 0xFC, 0x7F, 0x00, 0x30, 0xC0, 0x02, 0xC0, 0x00, 0x2C, 0x00, 0x03, 0xC0, 0x00, 0x0C, 0x00, 0x0D, 0x30,
    0x00, 0x60, 0xFC, 0x1F, 0x00, 0x0F,  // FreeMono24_R
    0x80, 0x6F, 0x44, 0x1B, 0xBD, 0x1C, 0x00, 0xCB, 0x00, 0x90, 0x0C, 0x00, 0xC0, 0x02, 0x00, 0xE0, 0x06, 0x00, 0x90, 0x1F,
    0x00, 0x00, 0x0A, 0x00, 0xC0, 0x02, 0x00, 0x7C, 0x00, 0xC0, 0x1F, 0x00, 0x27, 0xAE, 0x1F, 0x00, 0x15, 0x00,  // FreeMono24_S
    0xA8, 0xAA, 0x6A, 0x5D, 0x79, 0xA5, 0x09, 0x24, 0x90, 0x08, 0x24, 0x80, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24,
    0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0xD0,
    0xFF, 0x0B,  // FreeMono24_T
    0x6D, 0x01, 0x75, 0x18, 0x00, 0x30, 0x18, 0x00, 0x30, 0x18, 0x00, 0x30, 0x18, 0x00, 0x30, 0x18, 0x00, 0x30, 0x18, 0x00,
    0x30, 0x18, 0x00, 0x30, 0x18, 0x00, 0x30, 0x24, 0x00, 0x30, 0x30, 0x00, 0x28, 0xA0, 0x00, 0x0D, 0x80, 0xEB, 0x03, 0x00,
    0x14, 0x00,  // FreeMono24_U
    0xA9, 0x01, 0xA4, 0x96, 0x17, 0x40, 0x79, 0x30, 0x00, 0x80, 0x01, 0x06, 0x00, 0x0C, 0xC0, 0x00, 0x90, 0x00, 0x0C, 0x00,
    0x03, 0x40, 0x02, 0x30, 0x00, 0x30, 0x80, 0x01, 0x00, 0x06, 0x0C, 0x00, 0x90, 0x90, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x80,
    0x32, 0x00, 0x00, 0xB0, 0x01, 0x00, 0x00, 0x0F, 0x00,  // FreeMono24_V
    0xAA, 0x00, 0xA9, 0x69, 0x01, 0x94, 0x97, 0x00, 0x00, 0x4C, 0x02, 0x09, 0x24, 0x0C, 0x7C, 0x90, 0x30, 0x70, 0x82, 0xC1,
    0x90, 0x0C, 0x06, 0x83, 0x31, 0x0C, 0x18, 0x83, 0x31, 0x60, 0x08, 0xC9, 0x40, 0x1A, 0x30, 0x03, 0x39, 0xC0, 0x09, 0xF4,
    0x00, 0x2E, 0xC0, 0x02, 0x74, 0x00,  // FreeMono24_W
    0x69, 0x00, 0x69, 0xF4, 0x01, 0xE4, 0x01, 0x07, 0xC0, 0x01, 0x30, 0x80, 0x02, 0x40, 0x43, 0x03, 0x00, 0x28, 0x03, 0x00,
    0xC0, 0x07, 0x00, 0x00, 0x0F, 0x00, 0x00, 0xDA, 0x00, 0x00, 0x0D, 0x0A, 0x00, 0x0C, 0x70, 0x00, 0x1C, 0x00, 0x03, 0x28,
    0x00, 0x34, 0xFC, 0x07, 0xFC, 0x07,  // FreeMono24_X
    0x69, 0x00, 0x69, 0x79, 0x00, 0x79, 0x70, 0x00, 0x1C, 0xC0, 0x00, 0x09, 0x80, 0x02, 0x03, 0x00, 0xC7, 0x01, 0x00, 0xAC,
    0x00, 0x00, 0x38, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0xD0,
    0xFF, 0x0B,  // FreeMono24_Y
    0xA8, 0xAA, 0xC2, 0x55, 0x75, 0x0C, 0x40, 0xC3, 0x00, 0x0C, 0x08, 0x70, 0x00, 0x40, 0x02, 0x00, 0x0C, 0x00, 0x70, 0x00,
    0x80, 0x02, 0x00, 0x0D, 0xC0, 0x30, 0x00, 0xCC, 0x01, 0xC0, 0x09, 0x00, 0xEC, 0xFF, 0xFF,  // FreeMono24_Z
};
/*
    <Generate from ./font_table_margin_index.tpl>
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
    uint16_t index;
}font_table_t;

static const font_table_t freemono24_table[] = {
    {5, 3, 2, 2, 0},  // FreeMono24_0
    {5, 4, 3, 2, 40},  // FreeMono24_1
    {5, 4, 2, 2, 74},  // FreeMono24_2
    {5, 3, 2, 2, 112},  // FreeMono24_3
    {5, 4, 2, 2, 152},  // FreeMono24_4
    {5, 4, 2, 2, 190},  // FreeMono24_5
    {5, 3, 3, 2, 228},  // FreeMono24_6
    {5, 5, 2, 2, 264},  // FreeMono24_7
    {5, 3, 3, 2, 299},  // FreeMono24_8
    {5, 3, 3, 2, 335},  // FreeMono24_9
    {9, 4, 5, 5, 371},  // FreeMono24_colon
    {9, 4, 2, 1, 382},  // FreeMono24_a
    {5, 4, 0, 1, 413},  // FreeMono24_b
    {9, 4, 2, 1, 462},  // FreeMono24_c
    {5, 4, 1, 0, 493},  // FreeMono24_d
    {9, 4, 1, 1, 542},  // FreeMono24_e
    {5, 4, 2, 1, 575},  // FreeMono24_f
    {9, 0, 1, 0, 617},  // FreeMono24_g
    {5, 4, 1, 1, 666},  // FreeMono24_h
    {5, 4, 2, 2, 711},  // FreeMono24_i
    {5, 0, 3, 3, 749},  // FreeMono24_j
    {5, 4, 1, 1, 787},  // FreeMono24_k
    {5, 4, 2, 2, 832},  // FreeMono24_l
    {9, 4, 0, 0, 870},  // FreeMono24_m
    {9, 4, 1, 1, 909},  // FreeMono24_n
    {9, 4, 2, 1, 942},  // FreeMono24_o
    {9, 0, 0, 1, 973},  // FreeMono24_p
    {9, 0, 1, 0, 1022},  // FreeMono24_q
    {10, 4, 2, 1, 1071},  // FreeMono24_r
    {9, 4, 2, 2, 1099},  // FreeMono24_s
    {6, 4, 1, 2, 1127},  // FreeMono24_t
    {9, 4, 1, 1, 1166},  // FreeMono24_u
    {10, 4, 1, 0, 1199},  // FreeMono24_v
    {10, 4, 1, 0, 1232},  // FreeMono24_w
    {10, 4, 1, 1, 1265},  // FreeMono24_x
    {9, 0, 1, 1, 1295},  // FreeMono24_y
    {10, 4, 3, 2, 1340},  // FreeMono24_z
    {6, 4, 0, 0, 1363},  // FreeMono24_A
    {6, 4, 1, 1, 1412},  // FreeMono24_B
    {6, 3, 1, 1, 1454},  // FreeMono24_C
    {6, 4, 1, 1, 1499},  // FreeMono24_D
    {6, 4, 1, 1, 1541},  // FreeMono24_E
    {6, 4, 1, 1, 1583},  // FreeMono24_F
    {6, 3, 1, 0, 1625},  // FreeMono24_G
    {6, 4, 1, 1, 1674},  // FreeMono24_H
    {6, 4, 3, 2, 1716},  // FreeMono24_I
    {6, 4, 2, 0, 1748},  // FreeMono24_J
    {6, 4, 1, 0, 1790},  // FreeMono24_K
    {6, 4, 1, 1, 1836},  // FreeMono24_L
    {6, 4, 0, 0, 1878},  // FreeMono24_M
    {6, 4, 1, 1, 1927},  // FreeMono24_N
    {6, 3, 1, 1, 1969},  // FreeMono24_O
    {6, 4, 1, 2, 2014},  // FreeMono24_P
    {6, 1, 1, 1, 2053},  // FreeMono24_Q
    {6, 4, 1, 0, 2104},  // FreeMono24_R
    {6, 3, 2, 2, 2150},  // FreeMono24_S
    {6, 4, 1, 1, 2188},  // FreeMono24_T
    {6, 4, 1, 1, 2230},  // FreeMono24_U
    {6, 4, 0, 0, 2272},  // FreeMono24_V
    {6, 4, 1, 0, 2321},  // FreeMono24_W
    {6, 4, 1, 0, 2367},  // FreeMono24_X
    {6, 4, 1, 1, 2413},  // FreeMono24_Y
    {6, 4, 2, 2, 2455},  // FreeMono24_Z
};

#define IS_LAST(e)  (((e) - freemono24_table) == (sizeof(freemono24_table) / sizeof(freemono24_table[0]) - 1)  ) 

static bool freemono24_lookup(char c, font_symbol_t *sym)
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
    sym->index = t->index;
    if(IS_LAST(t))
    {
        sym->size = sizeof(freemono24_table) - t->index;
    }
    else
    {
        sym->size = ((t+1)->index - t->index);
    }
    
    return true;
}

font_t freemono24 = 
{
    FREEMONO24_WIDTH,
    FREEMONO24_HEIGHT,
    freemono24_bmp,
    freemono24_lookup
};