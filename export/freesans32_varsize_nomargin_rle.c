/*
    <Generate from 1bpp_varsize_nomargin_rle.tpl>
    generate font bitmap
    font: FreeSans
    size: 32
    calc_margin: False
    encoding method: rle

    width: Adaptive
    height: Adaptive
*/

#include "font.h"

#define FREESANS32_DEFAULT_WIDTH     ??? /* Specify default font width */
#define FREESANS32_DEFAULT_HEIGHT    ??? /* Specify default font heighjt */

static const uint8_t freesans32_bmp[] = {
    // FreeSans32_0
    0xFF, 0xFF, 0x14, 0xC8, 0x9A, 0x74, 0x43, 0x73, 0x63, 0x53, 0x73, 0x53, 0x83, 0x43, 0x83, 0x42, 0x93, 0x33, 0x93, 0x33,
    0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x42, 0x93, 0x43, 0x83, 0x43, 0x83, 0x43, 0x73, 0x63, 0x63, 0x63,
    0x53, 0x8A, 0x98, 0xC4, 0xFF, 0xFF, 0xFF, 0x70,
    // FreeSans32_1
    0xFF, 0xFF, 0x32, 0xF1, 0x2F, 0x03, 0xF0, 0x3C, 0x6A, 0x8A, 0x8F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F,
    0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF, 0xA0,
    // FreeSans32_2
    0xFF, 0xFF, 0x13, 0xD8, 0x8C, 0x63, 0x63, 0x53, 0x83, 0x43, 0x83, 0x43, 0x83, 0x42, 0x93, 0xF0, 0x3F, 0x03, 0xE3, 0xD5,
    0xC5, 0xB5, 0xB5, 0xC4, 0xD4, 0xD4, 0xE3, 0xF0, 0x2F, 0x0F, 0x03, 0xF0, 0x3F, 0x0F, 0xFF, 0xFF, 0xFF, 0x50,
    // FreeSans32_3
    0xFF, 0xFF, 0x13, 0xC9, 0x8B, 0x64, 0x54, 0x53, 0x73, 0x53, 0x73, 0x52, 0x93, 0x33, 0x92, 0xF0, 0x3E, 0x4A, 0x7B, 0x6C,
    0x8F, 0x03, 0xF1, 0x3F, 0x03, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x43, 0x83, 0x44, 0x54, 0x6B, 0x89, 0xC3, 0xFF, 0xFF,
    0xFF, 0x80,
    // FreeSans32_4
    0xFF, 0xFF, 0x52, 0xF0, 0x3F, 0x03, 0xE4, 0xD5, 0xC6, 0xC2, 0x13, 0xB3, 0x13, 0xA3, 0x23, 0xA2, 0x33, 0x93, 0x33, 0x83,
    0x43, 0x73, 0x53, 0x72, 0x63, 0x63, 0x63, 0x6F, 0x12, 0xF1, 0x2F, 0x1B, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0xFF,
    0xFF, 0xFF, 0x80,
    // FreeSans32_5
    0xFF, 0xFC, 0xC6, 0xC6, 0xC6, 0x3F, 0x03, 0xF0, 0x2F, 0x12, 0xF1, 0x2F, 0x03, 0x25, 0x8C, 0x6D, 0x54, 0x63, 0x53, 0x83,
    0xF0, 0x3F, 0x03, 0xF1, 0x2F, 0x03, 0x33, 0x93, 0x33, 0x93, 0x43, 0x74, 0x44, 0x54, 0x6B, 0x89, 0xC4, 0xFF, 0xFF, 0xFF,
    0x70,
    // FreeSans32_6
    0xFF, 0xFF, 0x23, 0xC8, 0x9A, 0x74, 0x44, 0x63, 0x63, 0x53, 0x83, 0x43, 0xF0, 0x3F, 0x02, 0xF1, 0x23, 0x57, 0x31, 0x95,
    0x81, 0x54, 0x56, 0x43, 0x48, 0x33, 0x48, 0x34, 0x29, 0x34, 0x2A, 0x24, 0x38, 0x34, 0x38, 0x34, 0x47, 0x35, 0x44, 0x47,
    0xA9, 0x8C, 0x4F, 0xFF, 0xFF, 0xF7,
    // FreeSans32_7
    0xFF, 0xFA, 0xF1, 0x2F, 0x12, 0xF1, 0xE3, 0xF0, 0x2F, 0x03, 0xE3, 0xF0, 0x2F, 0x03, 0xF0, 0x2F, 0x03, 0xE3, 0xF0, 0x3F,
    0x02, 0xF0, 0x3F, 0x02, 0xF0, 0x3F, 0x03, 0xF0, 0x2F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF, 0xD0,
    // FreeSans32_8
    0xFF, 0xFF, 0x22, 0xD8, 0x8B, 0x73, 0x54, 0x53, 0x73, 0x53, 0x83, 0x43, 0x83, 0x43, 0x83, 0x44, 0x63, 0x64, 0x44, 0x79,
    0x99, 0x85, 0x25, 0x53, 0x73, 0x53, 0x83, 0x33, 0x93, 0x33, 0xA2, 0x33, 0x93, 0x33, 0x93, 0x43, 0x83, 0x44, 0x63, 0x6C,
    0x79, 0xC4, 0xFF, 0xFF, 0xFF, 0x70,
    // FreeSans32_9
    0xFF, 0xFF, 0x13, 0xC9, 0x8B, 0x64, 0x54, 0x53, 0x73, 0x53, 0x83, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x43,
    0x74, 0x43, 0x74, 0x55, 0x17, 0x6C, 0x76, 0x23, 0xF0, 0x3F, 0x03, 0xF0, 0x34, 0x37, 0x35, 0x37, 0x36, 0x35, 0x37, 0xA9,
    0x8D, 0x3F, 0xFF, 0xFF, 0xF8,
    // FreeSans32_colon
    0xFF, 0xFF, 0xF0, 0x35, 0x35, 0x35, 0x3F, 0xFF, 0xFF, 0xA3, 0x53, 0x53, 0xFF, 0xF5,
    // FreeSans32_A
    0xFF, 0xF7, 0x5F, 0x25, 0xF2, 0x6F, 0x03, 0x13, 0xF0, 0x31, 0x3F, 0x03, 0x23, 0xD3, 0x33, 0xD3, 0x33, 0xD3, 0x43, 0xB3,
    0x53, 0xB3, 0x53, 0xB3, 0x63, 0x93, 0x73, 0x93, 0x74, 0x7F, 0x07, 0xF0, 0x73, 0x94, 0x54, 0xA3, 0x53, 0xB3, 0x53, 0xB4,
    0x34, 0xC3, 0x33, 0xD3, 0x33, 0xD4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x50,
    // FreeSans32_B
    0xFF, 0xF2, 0xD9, 0xE8, 0x37, 0x57, 0x39, 0x46, 0x3A, 0x36, 0x3A, 0x36, 0x3A, 0x36, 0x3A, 0x36, 0x39, 0x37, 0x37, 0x48,
    0xD9, 0xE8, 0x38, 0x56, 0x3A, 0x36, 0x3B, 0x35, 0x3B, 0x35, 0x3B, 0x35, 0x3B, 0x35, 0x3A, 0x45, 0x3A, 0x36, 0xF1, 0x6F,
    0x07, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA,
    // FreeSans32_C
    0xFF, 0xFB, 0x4F, 0x1A, 0xBD, 0x95, 0x64, 0x74, 0x94, 0x63, 0xB3, 0x54, 0xB4, 0x43, 0xD3, 0x43, 0xF5, 0x3F, 0x43, 0xF5,
    0x3F, 0x53, 0xF5, 0x3F, 0x53, 0xF6, 0x3D, 0x34, 0x3D, 0x34, 0x3D, 0x34, 0x4C, 0x35, 0x3B, 0x36, 0x49, 0x47, 0x56, 0x49,
    0xDC, 0xAF, 0x05, 0xFF, 0xFF, 0xFF, 0xFF, 0x40,
    // FreeSans32_D
    0xFF, 0xF4, 0xDA, 0xE9, 0x37, 0x58, 0x39, 0x47, 0x3A, 0x46, 0x3B, 0x36, 0x3B, 0x36, 0x3C, 0x35, 0x3C, 0x35, 0x3C, 0x35,
    0x3C, 0x35, 0x3C, 0x35, 0x3C, 0x35, 0x3C, 0x35, 0x3C, 0x35, 0x3C, 0x35, 0x3B, 0x36, 0x3B, 0x36, 0x3A, 0x37, 0x39, 0x47,
    0xF0, 0x8E, 0x9C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF4,
    // FreeSans32_E
    0xFF, 0xF0, 0xF1, 0x5F, 0x15, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0xF0, 0x6F, 0x06,
    0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0xF1, 0x5F, 0x15, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFE,
    // FreeSans32_F
    0xFF, 0xDF, 0x05, 0xF0, 0x53, 0xF2, 0x3F, 0x23, 0xF2, 0x3F, 0x23, 0xF2, 0x3F, 0x23, 0xF2, 0x3F, 0x2E, 0x6E, 0x63, 0xF2,
    0x3F, 0x23, 0xF2, 0x3F, 0x23, 0xF2, 0x3F, 0x23, 0xF2, 0x3F, 0x23, 0xF2, 0x3F, 0x23, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x40,
    // FreeSans32_G
    0xFF, 0xFF, 0x04, 0xF3, 0xBC, 0xEA, 0x57, 0x49, 0x49, 0x47, 0x4B, 0x46, 0x3D, 0x35, 0x3E, 0x35, 0x3F, 0x73, 0xF6, 0x3F,
    0x73, 0xF7, 0x39, 0xA3, 0x39, 0xA3, 0x3F, 0x13, 0x43, 0xF0, 0x34, 0x3F, 0x03, 0x43, 0xF0, 0x34, 0x4D, 0x45, 0x4B, 0x56,
    0x49, 0x66, 0x57, 0x31, 0x37, 0xD2, 0x39, 0xA4, 0x2C, 0x4F, 0xFF, 0xFF, 0xFF, 0xFF, 0x10,
    // FreeSans32_H
    0xFF, 0xF6, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36,
    0x3C, 0x36, 0xF3, 0x6F, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C,
    0x36, 0x3C, 0x36, 0x3C, 0x36, 0x3C, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x60,
    // FreeSans32_I
    0xF6, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36,
    0x36, 0x36, 0x36, 0x3F, 0xFF, 0xF6,
    // FreeSans32_J
    0xFF, 0xF0, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x34, 0x37, 0x34,
    0x37, 0x34, 0x37, 0x34, 0x46, 0x35, 0x35, 0x36, 0xB7, 0x9B, 0x3F, 0xFF, 0xFF, 0xFF, 0x50,
    // FreeSans32_K
    0xFF, 0xF2, 0x3A, 0x45, 0x39, 0x46, 0x38, 0x47, 0x37, 0x48, 0x36, 0x49, 0x35, 0x4A, 0x34, 0x4B, 0x33, 0x4C, 0x32, 0x4D,
    0x31, 0x5D, 0x9D, 0x61, 0x3C, 0x52, 0x4B, 0x44, 0x3B, 0x36, 0x3A, 0x36, 0x49, 0x37, 0x48, 0x38, 0x38, 0x38, 0x47, 0x39,
    0x46, 0x3A, 0x36, 0x3B, 0x35, 0x3B, 0x4F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF5,
    // FreeSans32_L
    0xFF, 0xB3, 0xF1, 0x3F, 0x13, 0xF1, 0x3F, 0x13, 0xF1, 0x3F, 0x13, 0xF1, 0x3F, 0x13, 0xF1, 0x3F, 0x13, 0xF1, 0x3F, 0x13,
    0xF1, 0x3F, 0x13, 0xF1, 0x3F, 0x13, 0xF1, 0x3F, 0x13, 0xF1, 0x3F, 0x1E, 0x5E, 0x5E, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
    // FreeSans32_M
    0xFF, 0xFE, 0x4D, 0x56, 0x4D, 0x56, 0x5B, 0x66, 0x5B, 0x66, 0x21, 0x2B, 0x21, 0x36, 0x21, 0x39, 0x31, 0x36, 0x21, 0x39,
    0x31, 0x36, 0x22, 0x29, 0x22, 0x36, 0x22, 0x37, 0x32, 0x36, 0x22, 0x37, 0x32, 0x36, 0x23, 0x27, 0x23, 0x36, 0x23, 0x35,
    0x33, 0x36, 0x23, 0x35, 0x33, 0x36, 0x24, 0x25, 0x24, 0x36, 0x24, 0x33, 0x34, 0x36, 0x24, 0x33, 0x34, 0x36, 0x25, 0x23,
    0x25, 0x36, 0x25, 0x31, 0x35, 0x36, 0x25, 0x31, 0x35, 0x36, 0x26, 0x21, 0x26, 0x36, 0x26, 0x56, 0x36, 0x26, 0x56, 0x36,
    0x27, 0x37, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x40,
    // FreeSans32_N
    0xFF, 0xF6, 0x3C, 0x36, 0x4B, 0x36, 0x5A, 0x36, 0x5A, 0x36, 0x21, 0x39, 0x36, 0x21, 0x48, 0x36, 0x22, 0x38, 0x36, 0x23,
    0x37, 0x36, 0x23, 0x37, 0x36, 0x24, 0x36, 0x36, 0x24, 0x45, 0x36, 0x25, 0x35, 0x36, 0x26, 0x34, 0x36, 0x26, 0x43, 0x36,
    0x27, 0x33, 0x36, 0x28, 0x32, 0x36, 0x28, 0x41, 0x36, 0x29, 0x31, 0x36, 0x2A, 0x66, 0x2A, 0x66, 0x2B, 0x56, 0x2B, 0x56,
    0x2C, 0x4F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x60,
    // FreeSans32_O
    0xFF, 0xFF, 0x25, 0xF3, 0xBE, 0xDC, 0x47, 0x59, 0x49, 0x48, 0x4B, 0x46, 0x4D, 0x45, 0x3F, 0x03, 0x53, 0xF0, 0x35, 0x3F,
    0x04, 0x33, 0xF2, 0x33, 0x3F, 0x23, 0x33, 0xF2, 0x33, 0x3F, 0x23, 0x33, 0xF2, 0x34, 0x3F, 0x04, 0x43, 0xF0, 0x35, 0x3F,
    0x03, 0x54, 0xD4, 0x64, 0xC3, 0x84, 0x94, 0x95, 0x75, 0xBD, 0xEB, 0xF3, 0x5F, 0xFF, 0xFF, 0xFF, 0xFF, 0x60,
    // FreeSans32_P
    0xFF, 0xF0, 0xD8, 0xF0, 0x63, 0x75, 0x63, 0x94, 0x53, 0xA3, 0x53, 0xA3, 0x53, 0xA3, 0x53, 0xA3, 0x53, 0xA3, 0x53, 0x94,
    0x5F, 0x06, 0xE7, 0xD8, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xC0,
    // FreeSans32_Q
    0xFF, 0xFF, 0x25, 0xF3, 0xBE, 0xDC, 0x47, 0x59, 0x49, 0x48, 0x4B, 0x46, 0x4D, 0x45, 0x3F, 0x03, 0x53, 0xF0, 0x35, 0x3F,
    0x04, 0x33, 0xF2, 0x33, 0x3F, 0x23, 0x33, 0xF2, 0x33, 0x3F, 0x23, 0x33, 0xF2, 0x34, 0x3F, 0x04, 0x43, 0xF0, 0x35, 0x3A,
    0x14, 0x35, 0x49, 0x22, 0x46, 0x47, 0x41, 0x38, 0x47, 0x69, 0x57, 0x5B, 0xF1, 0xBB, 0x14, 0xD4, 0x63, 0xFF, 0xFF, 0xFF,
    0xFF, 0xD0,
    // FreeSans32_R
    0xFF, 0xF4, 0xE9, 0xF1, 0x73, 0x95, 0x63, 0xA4, 0x63, 0xB3, 0x63, 0xB3, 0x63, 0xB3, 0x63, 0xB3, 0x63, 0xB3, 0x63, 0xA3,
    0x7F, 0x08, 0xE9, 0xF0, 0x83, 0xA3, 0x73, 0xB3, 0x63, 0xB3, 0x63, 0xB3, 0x63, 0xB3, 0x63, 0xB3, 0x63, 0xB3, 0x63, 0xB3,
    0x63, 0xB4, 0x53, 0xB4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD0,
    // FreeSans32_S
    0xFF, 0xF8, 0x3F, 0x0B, 0xAD, 0x84, 0x74, 0x73, 0x93, 0x63, 0xB3, 0x53, 0xB3, 0x53, 0xB3, 0x54, 0xF4, 0x4F, 0x37, 0xF1,
    0xAF, 0x0A, 0xF0, 0x8F, 0x35, 0xF4, 0x4F, 0x43, 0x42, 0xD3, 0x43, 0xC3, 0x43, 0xC3, 0x44, 0xA3, 0x64, 0x75, 0x7E, 0x9B,
    0xE5, 0xFF, 0xFF, 0xFF, 0xFE,
    // FreeSans32_T
    0xFF, 0xDF, 0x33, 0xF3, 0xB3, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33,
    0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xF3, 0x3F, 0x33, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x60,
    // FreeSans32_U
    0xFF, 0xF6, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37,
    0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37, 0x3B, 0x37,
    0x49, 0x48, 0x47, 0x4A, 0xDC, 0xBF, 0x15, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x40,
    // FreeSans32_V
    0xFF, 0xD3, 0xD3, 0x23, 0xC4, 0x33, 0xB3, 0x43, 0xB3, 0x43, 0xA4, 0x53, 0x93, 0x63, 0x93, 0x63, 0x83, 0x83, 0x73, 0x83,
    0x73, 0x83, 0x63, 0xA3, 0x53, 0xA3, 0x53, 0xA3, 0x43, 0xC3, 0x33, 0xC3, 0x33, 0xD3, 0x13, 0xE3, 0x13, 0xE3, 0x13, 0xF0,
    0x5F, 0x15, 0xF1, 0x5F, 0x23, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x60,
    // FreeSans32_W
    0xFF, 0xFF, 0x13, 0x94, 0x93, 0x23, 0x94, 0x93, 0x23, 0x94, 0x93, 0x24, 0x76, 0x74, 0x33, 0x76, 0x73, 0x43, 0x72, 0x13,
    0x73, 0x43, 0x63, 0x22, 0x73, 0x44, 0x53, 0x23, 0x54, 0x53, 0x53, 0x23, 0x53, 0x63, 0x52, 0x42, 0x53, 0x63, 0x43, 0x43,
    0x43, 0x73, 0x33, 0x43, 0x34, 0x73, 0x33, 0x43, 0x33, 0x83, 0x32, 0x62, 0x33, 0x83, 0x23, 0x63, 0x23, 0x92, 0x23, 0x63,
    0x23, 0x93, 0x13, 0x63, 0x13, 0xA6, 0x86, 0xA6, 0x86, 0xB5, 0x85, 0xC4, 0xA4, 0xC4, 0xA4, 0xC4, 0xA4, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x60,
    // FreeSans32_X
    0xFF, 0xF0, 0x4B, 0x44, 0x49, 0x46, 0x39, 0x38, 0x37, 0x48, 0x45, 0x4A, 0x35, 0x3C, 0x33, 0x3D, 0x41, 0x4E, 0x31, 0x3F,
    0x15, 0xF2, 0x5F, 0x25, 0xF2, 0x5F, 0x13, 0x13, 0xE4, 0x14, 0xD3, 0x33, 0xC3, 0x53, 0xA4, 0x54, 0x93, 0x73, 0x83, 0x93,
    0x64, 0x94, 0x53, 0xB4, 0x33, 0xD3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x60,
    // FreeSans32_Y
    0xFF, 0xF0, 0x4C, 0x43, 0x3C, 0x34, 0x4A, 0x36, 0x39, 0x47, 0x38, 0x38, 0x46, 0x49, 0x36, 0x3A, 0x44, 0x3C, 0x33, 0x4D,
    0x32, 0x3E, 0x8F, 0x06, 0xF2, 0x4F, 0x34, 0xF3, 0x3F, 0x43, 0xF4, 0x3F, 0x43, 0xF4, 0x3F, 0x43, 0xF4, 0x3F, 0x43, 0xF4,
    0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
    // FreeSans32_Z
    0xFF, 0xCF, 0x23, 0xF2, 0xF1, 0x4F, 0x04, 0xF0, 0x4F, 0x04, 0xF1, 0x3F, 0x14, 0xF0, 0x4F, 0x04, 0xF1, 0x3F, 0x14, 0xF0,
    0x4F, 0x04, 0xF0, 0x4F, 0x13, 0xF1, 0x4F, 0x04, 0xF0, 0x4F, 0x13, 0xF1, 0xF3, 0x2F, 0x32, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF,
    0xF6,
    // FreeSans32_a
    0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xB6, 0x44, 0x46, 0x37, 0x35, 0x37, 0x3F, 0x03, 0xF0, 0x3B, 0x76, 0xC5, 0x73, 0x34, 0x47,
    0x34, 0x38, 0x34, 0x38, 0x34, 0x37, 0x44, 0x36, 0x55, 0xF0, 0x48, 0x24, 0x63, 0x62, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
    // FreeSans32_b
    0xFF, 0x83, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0x26, 0x7C, 0x66, 0x25, 0x54, 0x64, 0x44, 0x73, 0x43,
    0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x83, 0x44, 0x73, 0x45, 0x53, 0x52,
    0x1A, 0x52, 0x28, 0xC3, 0xFF, 0xFF, 0xFF, 0xFA,
    // FreeSans32_c
    0xFF, 0xFF, 0xFF, 0xFF, 0xF5, 0x97, 0x43, 0x45, 0x36, 0x44, 0x37, 0x33, 0x38, 0x33, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x38,
    0x33, 0x38, 0x34, 0x37, 0x34, 0x45, 0x36, 0xB7, 0x9A, 0x4F, 0xFF, 0xFF, 0xFF, 0xF6,
    // FreeSans32_d
    0xFF, 0xF4, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0x76, 0x23, 0x6C, 0x54, 0x36, 0x44, 0x64, 0x43, 0x74, 0x33,
    0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x33, 0x93, 0x34, 0x83, 0x43, 0x74, 0x44, 0x55, 0x5A,
    0x12, 0x68, 0x22, 0x84, 0xFF, 0xFF, 0xFF, 0xFB,
    // FreeSans32_e
    0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xA7, 0x43, 0x46, 0x37, 0x35, 0x38, 0x24, 0x39, 0x33, 0x39, 0x33, 0xF0, 0x3F, 0x03, 0xF0,
    0x33, 0xF0, 0x3F, 0x03, 0x93, 0x43, 0x73, 0x54, 0x54, 0x6B, 0x89, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
    // FreeSans32_f
    0xF7, 0x44, 0x54, 0x36, 0x36, 0x36, 0x34, 0x72, 0x74, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36,
    0x36, 0x36, 0x36, 0x3F, 0xFF, 0xF6,
    // FreeSans32_g
    0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x62, 0x36, 0x81, 0x35, 0x43, 0x64, 0x36, 0x54, 0x37, 0x43, 0x38, 0x43, 0x39, 0x33, 0x39,
    0x33, 0x39, 0x33, 0x39, 0x33, 0x39, 0x33, 0x39, 0x33, 0x38, 0x44, 0x37, 0x44, 0x45, 0x55, 0x91, 0x36, 0x72, 0x38, 0x34,
    0x3F, 0x02, 0x52, 0x83, 0x53, 0x73, 0x55, 0x34, 0x7A, 0xA6, 0xFF, 0x10,
    // FreeSans32_h
    0xFF, 0x83, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0x26, 0x7C, 0x65, 0x44, 0x54, 0x63, 0x53, 0x73, 0x53,
    0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53,
    0x82, 0x53, 0x82, 0xFF, 0xFF, 0xFF, 0xFF, 0x90,
    // FreeSans32_i
    0xF3, 0x35, 0x35, 0x3F, 0xE3, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53,
    0x53, 0xFF, 0xFE,
    // FreeSans32_j
    0xF4, 0x26, 0x26, 0x2F, 0xF0, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26,
    0x26, 0x26, 0x26, 0x26, 0x26, 0x24, 0x43, 0x53, 0x4C,
    // FreeSans32_k
    0xFF, 0x63, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0x64, 0x43, 0x54, 0x53, 0x44, 0x63, 0x34, 0x73, 0x24, 0x83, 0x14, 0x98,
    0x98, 0x95, 0x13, 0x84, 0x23, 0x83, 0x43, 0x73, 0x44, 0x63, 0x53, 0x63, 0x63, 0x53, 0x64, 0x43, 0x73, 0x43, 0x83, 0xFF,
    0xFF, 0xFF, 0xFF,
    // FreeSans32_l
    0xF1, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34, 0x34,
    0x34, 0x34, 0x34, 0x3F, 0xFF, 0x60,
    // FreeSans32_m
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0x35, 0x46, 0x62, 0x18, 0x28, 0x55, 0x37, 0x34, 0x44, 0x54, 0x63, 0x43,
    0x73, 0x63, 0x43, 0x72, 0x73, 0x43, 0x72, 0x73, 0x43, 0x72, 0x73, 0x43, 0x72, 0x73, 0x43, 0x72, 0x73, 0x43, 0x72, 0x73,
    0x43, 0x72, 0x73, 0x43, 0x72, 0x73, 0x43, 0x72, 0x73, 0x43, 0x72, 0x73, 0x43, 0x72, 0x73, 0x43, 0x72, 0x73, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x40,
    // FreeSans32_n
    0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x23, 0x67, 0x22, 0x86, 0x21, 0x24, 0x45, 0x46, 0x35, 0x38, 0x25, 0x38, 0x25, 0x38, 0x25,
    0x38, 0x25, 0x38, 0x25, 0x38, 0x25, 0x38, 0x25, 0x38, 0x25, 0x38, 0x25, 0x38, 0x25, 0x38, 0x25, 0x38, 0x25, 0x38, 0x2F,
    0xFF, 0xFF, 0xFF, 0xF9,
    // FreeSans32_o
    0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xA7, 0x43, 0x46, 0x37, 0x35, 0x37, 0x34, 0x39, 0x33, 0x39, 0x33, 0x39, 0x33, 0x39, 0x33,
    0x39, 0x33, 0x39, 0x33, 0x39, 0x33, 0x39, 0x34, 0x37, 0x35, 0x45, 0x46, 0xB8, 0x9C, 0x3F, 0xFF, 0xFF, 0xFF, 0xFE,
    // FreeSans32_p
    0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x23, 0x67, 0x21, 0x96, 0x21, 0x32, 0x55, 0x46, 0x44, 0x47, 0x34, 0x39, 0x33, 0x39, 0x33,
    0x39, 0x33, 0x39, 0x33, 0x39, 0x33, 0x39, 0x33, 0x39, 0x33, 0x38, 0x34, 0x47, 0x34, 0x55, 0x44, 0xD5, 0x31, 0x86, 0x33,
    0x48, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xFF, 0x70,
    // FreeSans32_q
    0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x63, 0x26, 0x91, 0x25, 0x52, 0x64, 0x46, 0x44, 0x37, 0x43, 0x39, 0x33, 0x39, 0x33, 0x39,
    0x33, 0x39, 0x33, 0x39, 0x33, 0x39, 0x33, 0x39, 0x33, 0x48, 0x34, 0x37, 0x44, 0x45, 0x55, 0xD6, 0x81, 0x38, 0x43, 0x3F,
    0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0xB0,
    // FreeSans32_r
    0xFF, 0xFF, 0xFF, 0x02, 0x33, 0x32, 0x24, 0x32, 0x15, 0x34, 0x73, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83,
    0x83, 0x83, 0x83, 0xFF, 0xFF, 0xF8,
    // FreeSans32_s
    0xFF, 0xFF, 0xFF, 0xFF, 0xBA, 0x54, 0x43, 0x53, 0x63, 0x33, 0x73, 0x42, 0xE4, 0xC7, 0xA9, 0xA8, 0xC4, 0xE3, 0x23, 0x83,
    0x23, 0x83, 0x33, 0x63, 0x4C, 0x5A, 0x94, 0xFF, 0xFF, 0xFF, 0xFD,
    // FreeSans32_t
    0xFF, 0x93, 0x63, 0x63, 0x63, 0x47, 0x27, 0x43, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x65, 0x45, 0x63, 0xFF, 0xFA,
    // FreeSans32_u
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53,
    0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x82, 0x53, 0x73, 0x53, 0x73, 0x53, 0x73, 0x53, 0x64, 0x69, 0x12, 0x68, 0x22, 0x93,
    0xFF, 0xFF, 0xFF, 0x90,
    // FreeSans32_v
    0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x39, 0x32, 0x38, 0x32, 0x38, 0x32, 0x37, 0x34, 0x36, 0x34, 0x36, 0x35, 0x25, 0x36, 0x34,
    0x36, 0x34, 0x28, 0x23, 0x38, 0x32, 0x38, 0x32, 0x2A, 0x21, 0x3A, 0x5B, 0x5C, 0x4C, 0x3F, 0xFF, 0xFF, 0xFD,
    // FreeSans32_w
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x63, 0x73, 0x73, 0x23, 0x63, 0x63, 0x33, 0x55, 0x53, 0x33, 0x55, 0x53, 0x42,
    0x52, 0x12, 0x53, 0x43, 0x42, 0x12, 0x43, 0x53, 0x33, 0x13, 0x33, 0x53, 0x33, 0x13, 0x33, 0x62, 0x32, 0x32, 0x32, 0x73,
    0x22, 0x32, 0x23, 0x73, 0x13, 0x33, 0x13, 0x82, 0x13, 0x33, 0x12, 0x92, 0x12, 0x52, 0x12, 0x95, 0x55, 0x95, 0x55, 0xA4,
    0x54, 0xB3, 0x73, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    // FreeSans32_x
    0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x38, 0x32, 0x46, 0x34, 0x35, 0x36, 0x34, 0x28, 0x32, 0x38, 0x31, 0x3A, 0x5C, 0x4C, 0x3C,
    0x5B, 0x69, 0x31, 0x38, 0x33, 0x37, 0x34, 0x35, 0x35, 0x34, 0x37, 0x33, 0x37, 0x4F, 0xFF, 0xFF, 0xF7,
    // FreeSans32_y
    0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x39, 0x32, 0x38, 0x32, 0x37, 0x33, 0x37, 0x34, 0x36, 0x25, 0x35, 0x35, 0x35, 0x36, 0x33,
    0x37, 0x33, 0x37, 0x33, 0x38, 0x31, 0x39, 0x31, 0x39, 0x31, 0x2B, 0x5B, 0x5B, 0x4D, 0x3D, 0x3C, 0x3D, 0x3D, 0x39, 0x6A,
    0x5B, 0x4B,
    // FreeSans32_z
    0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xC4, 0xC4, 0xCC, 0x3C, 0x4C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x4C, 0x3C, 0x3C, 0x3C, 0x3D,
    0xE2, 0xEF, 0xFF, 0xFF, 0xF7,
};


typedef struct
{
    uint8_t width;
    uint8_t height;
    uint16_t bmp_index;
}font_table_t;

static const font_table_t freesans32_table[] = {
    {18, 32, 0},  // FreeSans32_0
    {18, 32, 48},  // FreeSans32_1
    {18, 32, 87},  // FreeSans32_2
    {18, 32, 125},  // FreeSans32_3
    {18, 32, 167},  // FreeSans32_4
    {18, 32, 210},  // FreeSans32_5
    {18, 32, 251},  // FreeSans32_6
    {18, 32, 297},  // FreeSans32_7
    {18, 32, 336},  // FreeSans32_8
    {18, 32, 382},  // FreeSans32_9
    {8, 32, 427},  // FreeSans32_colon
    {22, 32, 441},  // FreeSans32_A
    {22, 32, 493},  // FreeSans32_B
    {23, 32, 540},  // FreeSans32_C
    {23, 32, 588},  // FreeSans32_D
    {21, 32, 637},  // FreeSans32_E
    {20, 32, 678},  // FreeSans32_F
    {25, 32, 718},  // FreeSans32_G
    {24, 32, 773},  // FreeSans32_H
    {9, 32, 826},  // FreeSans32_I
    {17, 32, 852},  // FreeSans32_J
    {22, 32, 887},  // FreeSans32_K
    {19, 32, 939},  // FreeSans32_L
    {28, 32, 978},  // FreeSans32_M
    {24, 32, 1068},  // FreeSans32_N
    {26, 32, 1136},  // FreeSans32_O
    {21, 32, 1194},  // FreeSans32_P
    {26, 32, 1238},  // FreeSans32_Q
    {23, 32, 1300},  // FreeSans32_R
    {22, 32, 1350},  // FreeSans32_S
    {21, 32, 1395},  // FreeSans32_T
    {24, 32, 1436},  // FreeSans32_U
    {21, 32, 1489},  // FreeSans32_V
    {30, 32, 1540},  // FreeSans32_W
    {22, 32, 1625},  // FreeSans32_X
    {22, 32, 1677},  // FreeSans32_Y
    {20, 32, 1723},  // FreeSans32_Z
    {18, 32, 1764},  // FreeSans32_a
    {18, 32, 1803},  // FreeSans32_b
    {17, 32, 1851},  // FreeSans32_c
    {18, 32, 1885},  // FreeSans32_d
    {18, 32, 1933},  // FreeSans32_e
    {9, 32, 1970},  // FreeSans32_f
    {18, 33, 1996},  // FreeSans32_g
    {18, 32, 2048},  // FreeSans32_h
    {8, 32, 2096},  // FreeSans32_i
    {8, 33, 2119},  // FreeSans32_j
    {17, 32, 2148},  // FreeSans32_k
    {7, 32, 2191},  // FreeSans32_l
    {26, 32, 2217},  // FreeSans32_m
    {18, 32, 2282},  // FreeSans32_n
    {18, 32, 2326},  // FreeSans32_o
    {18, 33, 2365},  // FreeSans32_p
    {18, 33, 2416},  // FreeSans32_q
    {11, 32, 2466},  // FreeSans32_r
    {16, 32, 2492},  // FreeSans32_s
    {9, 32, 2523},  // FreeSans32_t
    {18, 32, 2548},  // FreeSans32_u
    {16, 32, 2592},  // FreeSans32_v
    {24, 32, 2630},  // FreeSans32_w
    {16, 32, 2698},  // FreeSans32_x
    {16, 33, 2735},  // FreeSans32_y
    {16, 32, 2777},  // FreeSans32_z
};
