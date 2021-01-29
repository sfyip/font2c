/*
    <Generate from 1bpp_varsize_margin_rle.tpl>
    generate font bitmap
    font: FreeSans
    size: 32
    calc_margin: True
    encoding method: rle

    width: Adaptive
    height: Adaptive
*/

#include "font.h"

#define FREESANS32_DEFAULT_WIDTH     24 /* Specify default font width */
#define FREESANS32_DEFAULT_HEIGHT    32 /* Specify default font heighjt */

static const uint8_t freesans32_bmp[] = {
    // FreeSans32_0
    0x64, 0x98, 0x6A, 0x44, 0x43, 0x43, 0x63, 0x23, 0x73, 0x23, 0x83, 0x13, 0x83, 0x12, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96,
    0x93, 0x12, 0x93, 0x13, 0x83, 0x13, 0x83, 0x13, 0x73, 0x33, 0x63, 0x33, 0x53, 0x5A, 0x68, 0x94, 0x50,
    // FreeSans32_1
    0x62, 0x62, 0x53, 0x53, 0x2F, 0x75, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35,
    0x35, 0x30,
    // FreeSans32_2
    0x63, 0xA8, 0x5C, 0x33, 0x63, 0x23, 0x83, 0x13, 0x83, 0x13, 0x83, 0x12, 0x93, 0xC3, 0xC3, 0xB3, 0xA5, 0x95, 0x85, 0x85,
    0x94, 0xA4, 0xA4, 0xB3, 0xC2, 0xCF, 0xFF, 0x07,
    // FreeSans32_3
    0x63, 0x99, 0x5B, 0x34, 0x54, 0x23, 0x73, 0x23, 0x73, 0x22, 0x96, 0x92, 0xC3, 0xB4, 0x77, 0x86, 0x98, 0xC3, 0xD3, 0xC6,
    0x96, 0x96, 0x93, 0x13, 0x83, 0x14, 0x54, 0x3B, 0x59, 0x93, 0x60,
    // FreeSans32_4
    0xA2, 0xD3, 0xD3, 0xC4, 0xB5, 0xA6, 0xA2, 0x13, 0x93, 0x13, 0x83, 0x23, 0x82, 0x33, 0x73, 0x33, 0x63, 0x43, 0x53, 0x53,
    0x52, 0x63, 0x43, 0x63, 0x4F, 0xFF, 0x39, 0x3D, 0x3D, 0x3D, 0x3D, 0x34,
    // FreeSans32_5
    0x2C, 0x3C, 0x3C, 0x33, 0xC3, 0xC2, 0xD2, 0xD2, 0xC3, 0x25, 0x5C, 0x3D, 0x24, 0x63, 0x23, 0x83, 0xC3, 0xC3, 0xD2, 0xC6,
    0x96, 0x93, 0x13, 0x74, 0x14, 0x54, 0x3B, 0x59, 0x94, 0x50,
    // FreeSans32_6
    0x73, 0x98, 0x6A, 0x44, 0x44, 0x33, 0x63, 0x23, 0x83, 0x13, 0xC3, 0xC2, 0xD2, 0x35, 0x43, 0x19, 0x28, 0x15, 0x15, 0x68,
    0x87, 0x83, 0x12, 0x93, 0x12, 0xA2, 0x13, 0x83, 0x13, 0x83, 0x14, 0x73, 0x24, 0x44, 0x4A, 0x68, 0x94, 0x50,
    // FreeSans32_7
    0x0F, 0xFF, 0x3C, 0x3D, 0x2D, 0x3C, 0x3D, 0x2D, 0x3D, 0x2D, 0x3C, 0x3D, 0x3D, 0x2D, 0x3D, 0x2D, 0x3D, 0x3D, 0x2D, 0x3D,
    0x3D, 0x3D, 0x39,
    // FreeSans32_8
    0x72, 0xA8, 0x5B, 0x43, 0x54, 0x23, 0x73, 0x23, 0x83, 0x13, 0x83, 0x13, 0x83, 0x14, 0x63, 0x34, 0x44, 0x49, 0x69, 0x55,
    0x25, 0x23, 0x73, 0x23, 0x86, 0x96, 0xA5, 0x96, 0x93, 0x13, 0x83, 0x14, 0x63, 0x3C, 0x49, 0x94, 0x50,
    // FreeSans32_9
    0x63, 0x99, 0x5B, 0x34, 0x54, 0x23, 0x73, 0x23, 0x86, 0x96, 0x96, 0x96, 0x93, 0x13, 0x74, 0x13, 0x74, 0x25, 0x17, 0x3C,
    0x46, 0x23, 0xC3, 0xC3, 0xC3, 0x13, 0x73, 0x23, 0x73, 0x33, 0x53, 0x4A, 0x68, 0xA3, 0x60,
    // FreeSans32_colon
    0x0C, 0xFF, 0x09, 0x50,
    // FreeSans32_A
    0x75, 0xF0, 0x5F, 0x06, 0xD3, 0x13, 0xD3, 0x13, 0xD3, 0x23, 0xB3, 0x33, 0xB3, 0x33, 0xB3, 0x43, 0x93, 0x53, 0x93, 0x53,
    0x93, 0x63, 0x73, 0x73, 0x73, 0x74, 0x5F, 0x05, 0xF0, 0x53, 0x94, 0x34, 0xA3, 0x33, 0xB3, 0x33, 0xB4, 0x14, 0xC3, 0x13,
    0xD3, 0x13, 0xD4, 0x40,
    // FreeSans32_B
    0x0D, 0x4E, 0x33, 0x75, 0x23, 0x94, 0x13, 0xA3, 0x13, 0xA3, 0x13, 0xA3, 0x13, 0xA3, 0x13, 0x93, 0x23, 0x74, 0x3D, 0x4E,
    0x33, 0x85, 0x13, 0xA3, 0x13, 0xB6, 0xB6, 0xB6, 0xB6, 0xA7, 0xA3, 0x1F, 0x11, 0xF0, 0x2D, 0x50,
    // FreeSans32_C
    0x94, 0xDA, 0x8D, 0x65, 0x64, 0x44, 0x94, 0x33, 0xB3, 0x24, 0xB4, 0x13, 0xD3, 0x13, 0xF2, 0x3F, 0x13, 0xF2, 0x3F, 0x23,
    0xF2, 0x3F, 0x23, 0xF3, 0x3D, 0x31, 0x3D, 0x31, 0x3D, 0x31, 0x4C, 0x32, 0x3B, 0x33, 0x49, 0x44, 0x56, 0x46, 0xD9, 0xAC,
    0x5B,
    // FreeSans32_D
    0x0D, 0x5E, 0x43, 0x75, 0x33, 0x94, 0x23, 0xA4, 0x13, 0xB3, 0x13, 0xB3, 0x13, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6,
    0xC6, 0xC6, 0xB3, 0x13, 0xB3, 0x13, 0xA3, 0x23, 0x94, 0x2F, 0x03, 0xE4, 0xC8,
    // FreeSans32_E
    0x0F, 0xF5, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xDF, 0x01, 0xF0, 0x13, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3,
    0xDF, 0xFF, 0x30,
    // FreeSans32_F
    0x0F, 0xF3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xCE, 0x1E, 0x13, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3,
    0xC3, 0xC3, 0xF4,
    // FreeSans32_G
    0x94, 0xF0, 0xB9, 0xE7, 0x57, 0x46, 0x49, 0x44, 0x4B, 0x43, 0x3D, 0x32, 0x3E, 0x32, 0x3F, 0x43, 0xF3, 0x3F, 0x43, 0xF4,
    0x39, 0xD9, 0xDF, 0x13, 0x13, 0xF0, 0x31, 0x3F, 0x03, 0x13, 0xF0, 0x31, 0x4D, 0x42, 0x4B, 0x53, 0x49, 0x63, 0x57, 0x31,
    0x34, 0xD2, 0x36, 0xA4, 0x29, 0x4B,
    // FreeSans32_H
    0x03, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xCF, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6,
    0xC6, 0xC6, 0xC3, 0x20,
    // FreeSans32_I
    0x0F, 0xFF, 0xF9, 0x30,
    // FreeSans32_J
    0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA6, 0x76, 0x76, 0x77, 0x63,
    0x13, 0x53, 0x2B, 0x39, 0x73, 0x50,
    // FreeSans32_K
    0x03, 0xA4, 0x13, 0x94, 0x23, 0x84, 0x33, 0x74, 0x43, 0x64, 0x53, 0x54, 0x63, 0x44, 0x73, 0x34, 0x83, 0x24, 0x93, 0x15,
    0x99, 0x96, 0x13, 0x85, 0x24, 0x74, 0x43, 0x73, 0x63, 0x63, 0x64, 0x53, 0x74, 0x43, 0x83, 0x43, 0x84, 0x33, 0x94, 0x23,
    0xA3, 0x23, 0xB3, 0x13, 0xB4, 0x20,
    // FreeSans32_L
    0x03, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3,
    0xBF, 0xFC, 0x60,
    // FreeSans32_M
    0x04, 0xD9, 0xDA, 0xBB, 0xB8, 0x12, 0xB2, 0x15, 0x13, 0x93, 0x15, 0x13, 0x93, 0x15, 0x22, 0x92, 0x25, 0x23, 0x73, 0x25,
    0x23, 0x73, 0x25, 0x32, 0x72, 0x35, 0x33, 0x53, 0x35, 0x33, 0x53, 0x35, 0x42, 0x52, 0x45, 0x43, 0x33, 0x45, 0x43, 0x33,
    0x45, 0x52, 0x32, 0x55, 0x53, 0x13, 0x55, 0x53, 0x13, 0x55, 0x62, 0x12, 0x65, 0x65, 0x65, 0x65, 0x65, 0x73, 0x73, 0x60,
    // FreeSans32_N
    0x03, 0xC7, 0xB8, 0xA8, 0xA5, 0x13, 0x95, 0x14, 0x85, 0x23, 0x85, 0x33, 0x75, 0x33, 0x75, 0x43, 0x65, 0x44, 0x55, 0x53,
    0x55, 0x63, 0x45, 0x64, 0x35, 0x73, 0x35, 0x83, 0x25, 0x84, 0x15, 0x93, 0x15, 0xA8, 0xA8, 0xB7, 0xB7, 0xC4, 0x20,
    // FreeSans32_O
    0x95, 0xF0, 0xBB, 0xD9, 0x47, 0x56, 0x49, 0x45, 0x4B, 0x43, 0x4D, 0x42, 0x3F, 0x03, 0x23, 0xF0, 0x32, 0x3F, 0x07, 0xF2,
    0x6F, 0x26, 0xF2, 0x6F, 0x26, 0xF2, 0x31, 0x3F, 0x04, 0x13, 0xF0, 0x32, 0x3F, 0x03, 0x24, 0xD4, 0x34, 0xC3, 0x54, 0x94,
    0x65, 0x75, 0x8D, 0xBB, 0xF0, 0x5A,
    // FreeSans32_P
    0x0D, 0x3F, 0x01, 0x37, 0x51, 0x39, 0x7A, 0x6A, 0x6A, 0x6A, 0x6A, 0x69, 0xF4, 0x1E, 0x2D, 0x33, 0xD3, 0xD3, 0xD3, 0xD3,
    0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD0,
    // FreeSans32_Q
    0x95, 0xF0, 0xBB, 0xD9, 0x47, 0x56, 0x49, 0x45, 0x4B, 0x43, 0x4D, 0x42, 0x3F, 0x03, 0x23, 0xF0, 0x32, 0x3F, 0x07, 0xF2,
    0x6F, 0x26, 0xF2, 0x6F, 0x26, 0xF2, 0x31, 0x3F, 0x04, 0x13, 0xF0, 0x32, 0x3A, 0x14, 0x32, 0x49, 0x22, 0x43, 0x47, 0x41,
    0x35, 0x47, 0x66, 0x57, 0x58, 0xF1, 0x8B, 0x14, 0xA4, 0x63, 0x20,
    // FreeSans32_R
    0x0E, 0x4F, 0x12, 0x39, 0x51, 0x3A, 0x41, 0x3B, 0x31, 0x3B, 0x31, 0x3B, 0x31, 0x3B, 0x31, 0x3B, 0x31, 0x3A, 0x32, 0xF0,
    0x3E, 0x4F, 0x03, 0x3A, 0x32, 0x3B, 0x31, 0x3B, 0x31, 0x3B, 0x31, 0x3B, 0x31, 0x3B, 0x31, 0x3B, 0x31, 0x3B, 0x31, 0x3B,
    0x7B, 0x42,
    // FreeSans32_S
    0x73, 0xBB, 0x6D, 0x44, 0x74, 0x33, 0x93, 0x23, 0xB3, 0x13, 0xB3, 0x13, 0xB3, 0x14, 0xF0, 0x4E, 0x7C, 0xAB, 0xAB, 0x8E,
    0x5F, 0x04, 0xF0, 0x5D, 0x6C, 0x6C, 0x7A, 0x32, 0x47, 0x53, 0xE5, 0xBA, 0x5D,
    // FreeSans32_T
    0x0F, 0xF6, 0x83, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F,
    0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x3F, 0x03, 0x90,
    // FreeSans32_U
    0x03, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB7,
    0x94, 0x14, 0x74, 0x3D, 0x5B, 0x95, 0x60,
    // FreeSans32_V
    0x03, 0xD6, 0xC4, 0x13, 0xB3, 0x23, 0xB3, 0x23, 0xA4, 0x33, 0x93, 0x43, 0x93, 0x43, 0x83, 0x63, 0x73, 0x63, 0x73, 0x63,
    0x63, 0x83, 0x53, 0x83, 0x53, 0x83, 0x43, 0xA3, 0x33, 0xA3, 0x33, 0xB3, 0x13, 0xC3, 0x13, 0xC3, 0x13, 0xD5, 0xE5, 0xE5,
    0xF0, 0x3B,
    // FreeSans32_W
    0x03, 0x94, 0x96, 0x94, 0x96, 0x94, 0x97, 0x76, 0x74, 0x13, 0x76, 0x73, 0x23, 0x72, 0x13, 0x73, 0x23, 0x63, 0x22, 0x73,
    0x24, 0x53, 0x23, 0x54, 0x33, 0x53, 0x23, 0x53, 0x43, 0x52, 0x42, 0x53, 0x43, 0x43, 0x43, 0x43, 0x53, 0x33, 0x43, 0x34,
    0x53, 0x33, 0x43, 0x33, 0x63, 0x32, 0x62, 0x33, 0x63, 0x23, 0x63, 0x23, 0x72, 0x23, 0x63, 0x23, 0x73, 0x13, 0x63, 0x13,
    0x86, 0x86, 0x86, 0x86, 0x95, 0x85, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0x90,
    // FreeSans32_X
    0x04, 0xB4, 0x14, 0x94, 0x33, 0x93, 0x53, 0x74, 0x54, 0x54, 0x73, 0x53, 0x93, 0x33, 0xA4, 0x14, 0xB3, 0x13, 0xD5, 0xE5,
    0xE5, 0xE5, 0xD3, 0x13, 0xB4, 0x14, 0xA3, 0x33, 0x93, 0x53, 0x74, 0x54, 0x63, 0x73, 0x53, 0x93, 0x34, 0x94, 0x23, 0xB7,
    0xD3, 0x30,
    // FreeSans32_Y
    0x04, 0xC4, 0x13, 0xC3, 0x24, 0xA3, 0x43, 0x94, 0x53, 0x83, 0x64, 0x64, 0x73, 0x63, 0x84, 0x43, 0xA3, 0x34, 0xB3, 0x23,
    0xC8, 0xD6, 0xF0, 0x4F, 0x14, 0xF1, 0x3F, 0x23, 0xF2, 0x3F, 0x23, 0xF2, 0x3F, 0x23, 0xF2, 0x3F, 0x23, 0xF2, 0x3D,
    // FreeSans32_Z
    0x1F, 0x21, 0xF2, 0xE4, 0xD4, 0xD4, 0xD4, 0xE3, 0xE4, 0xD4, 0xD4, 0xE3, 0xE4, 0xD4, 0xD4, 0xD4, 0xE3, 0xE4, 0xD4, 0xD4,
    0xE3, 0xEF, 0xFF, 0x92,
    // FreeSans32_a
    0x2B, 0x44, 0x44, 0x43, 0x73, 0x33, 0x73, 0xD3, 0xD3, 0x97, 0x4C, 0x37, 0x33, 0x24, 0x73, 0x23, 0x83, 0x23, 0x83, 0x23,
    0x74, 0x23, 0x65, 0x3F, 0x02, 0x82, 0x44, 0x36, 0x21,
    // FreeSans32_b
    0x03, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x26, 0x4C, 0x36, 0x25, 0x24, 0x64, 0x14, 0x73, 0x13, 0x96, 0x96, 0x96, 0x96,
    0x96, 0x96, 0x96, 0x83, 0x14, 0x73, 0x15, 0x53, 0x22, 0x1A, 0x22, 0x28, 0x93, 0x60,
    // FreeSans32_c
    0x39, 0x44, 0x34, 0x23, 0x64, 0x13, 0x76, 0x86, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0x86, 0x83, 0x13, 0x73, 0x14, 0x53, 0x3B,
    0x49, 0x74, 0x70,
    // FreeSans32_d
    0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x46, 0x23, 0x3C, 0x24, 0x36, 0x14, 0x64, 0x13, 0x77, 0x96, 0x96, 0x96, 0x96, 0x96,
    0x96, 0x97, 0x83, 0x13, 0x74, 0x14, 0x55, 0x2A, 0x12, 0x38, 0x22, 0x54, 0x60,
    // FreeSans32_e
    0x3A, 0x44, 0x34, 0x33, 0x73, 0x23, 0x82, 0x13, 0x96, 0x9F, 0xFF, 0x6C, 0x3C, 0x39, 0x31, 0x37, 0x32, 0x45, 0x43, 0xB5,
    0x99, 0x37,
    // FreeSans32_f
    0x34, 0x25, 0x23, 0x43, 0x43, 0x43, 0x2E, 0x23, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43,
    0x43, 0x43, 0x90,
    // FreeSans32_g
    0x46, 0x23, 0x38, 0x13, 0x24, 0x36, 0x13, 0x65, 0x13, 0x77, 0x87, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x84, 0x13, 0x74,
    0x14, 0x55, 0x29, 0x13, 0x37, 0x23, 0x53, 0x43, 0xC2, 0x22, 0x83, 0x23, 0x73, 0x25, 0x34, 0x4A, 0x76, 0x50,
    // FreeSans32_h
    0x03, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0x26, 0x2C, 0x15, 0x48, 0x66, 0x76, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85,
    0x85, 0x85, 0x85, 0x85, 0x82, 0x50,
    // FreeSans32_i
    0x09, 0x9F, 0xFF, 0x63,
    // FreeSans32_j
    0x32, 0x32, 0x32, 0xF3, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x21, 0xD3,
    // FreeSans32_k
    0x03, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0x64, 0x13, 0x54, 0x23, 0x44, 0x33, 0x34, 0x43, 0x24, 0x53, 0x14, 0x68, 0x68,
    0x65, 0x13, 0x54, 0x23, 0x53, 0x43, 0x43, 0x44, 0x33, 0x53, 0x33, 0x63, 0x23, 0x64, 0x13, 0x73, 0x13, 0x83, 0x60,
    // FreeSans32_l
    0x0F, 0xFF, 0xF9, 0x30,
    // FreeSans32_m
    0x02, 0x35, 0x46, 0x22, 0x18, 0x28, 0x15, 0x37, 0x38, 0x54, 0x66, 0x73, 0x66, 0x72, 0x76, 0x72, 0x76, 0x72, 0x76, 0x72,
    0x76, 0x72, 0x76, 0x72, 0x76, 0x72, 0x76, 0x72, 0x76, 0x72, 0x76, 0x72, 0x76, 0x72, 0x76, 0x72, 0x73, 0x20,
    // FreeSans32_n
    0x02, 0x36, 0x22, 0x28, 0x12, 0x12, 0x48, 0x66, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85,
    0x82, 0x30,
    // FreeSans32_o
    0x3A, 0x44, 0x34, 0x33, 0x73, 0x23, 0x73, 0x13, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x93, 0x13, 0x73, 0x24, 0x54,
    0x3B, 0x59, 0x93, 0x70,
    // FreeSans32_p
    0x02, 0x36, 0x42, 0x19, 0x32, 0x13, 0x25, 0x24, 0x64, 0x14, 0x73, 0x13, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x83,
    0x14, 0x73, 0x15, 0x54, 0x1D, 0x23, 0x18, 0x33, 0x34, 0x53, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC0,
    // FreeSans32_q
    0x46, 0x32, 0x39, 0x12, 0x25, 0x26, 0x14, 0x64, 0x13, 0x77, 0x96, 0x96, 0x96, 0x96, 0x96, 0x96, 0x97, 0x83, 0x13, 0x74,
    0x14, 0x55, 0x2D, 0x38, 0x13, 0x54, 0x33, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3,
    // FreeSans32_r
    0x02, 0x35, 0x26, 0x19, 0x43, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x50,
    // FreeSans32_s
    0x2A, 0x34, 0x43, 0x33, 0x63, 0x13, 0x73, 0x22, 0xC4, 0xA7, 0x89, 0x88, 0xA4, 0xC6, 0x86, 0x83, 0x13, 0x63, 0x2C, 0x3A,
    0x74, 0x70,
    // FreeSans32_t
    0x23, 0x43, 0x43, 0x43, 0x2E, 0x23, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x45, 0x25,
    0x43, 0x60,
    // FreeSans32_u
    0x03, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x85, 0x76, 0x76, 0x76, 0x64, 0x19, 0x12, 0x18, 0x22,
    0x43, 0xC0,
    // FreeSans32_v
    0x03, 0x93, 0x13, 0x83, 0x13, 0x83, 0x13, 0x73, 0x33, 0x63, 0x33, 0x63, 0x42, 0x53, 0x53, 0x43, 0x53, 0x42, 0x72, 0x33,
    0x73, 0x23, 0x73, 0x22, 0x92, 0x13, 0x95, 0xA5, 0xB4, 0xB3, 0x70,
    // FreeSans32_w
    0x03, 0x73, 0x73, 0x13, 0x63, 0x63, 0x23, 0x55, 0x53, 0x23, 0x55, 0x53, 0x32, 0x52, 0x12, 0x53, 0x33, 0x42, 0x12, 0x43,
    0x43, 0x33, 0x13, 0x33, 0x43, 0x33, 0x13, 0x33, 0x52, 0x32, 0x32, 0x32, 0x63, 0x22, 0x32, 0x23, 0x63, 0x13, 0x33, 0x13,
    0x72, 0x13, 0x33, 0x12, 0x82, 0x12, 0x52, 0x12, 0x85, 0x55, 0x85, 0x55, 0x94, 0x54, 0xA3, 0x73, 0x60,
    // FreeSans32_x
    0x03, 0x87, 0x63, 0x23, 0x53, 0x43, 0x42, 0x63, 0x23, 0x63, 0x13, 0x85, 0xA4, 0xA3, 0xA5, 0x96, 0x73, 0x13, 0x63, 0x33,
    0x53, 0x43, 0x33, 0x53, 0x23, 0x73, 0x13, 0x74, 0x20,
    // FreeSans32_y
    0x03, 0x93, 0x13, 0x83, 0x13, 0x73, 0x23, 0x73, 0x33, 0x62, 0x43, 0x53, 0x43, 0x53, 0x53, 0x33, 0x63, 0x33, 0x63, 0x33,
    0x73, 0x13, 0x83, 0x13, 0x83, 0x12, 0xA5, 0xA5, 0xA4, 0xC3, 0xC3, 0xB3, 0xC3, 0xC3, 0x86, 0x95, 0xA4, 0xA0,
    // FreeSans32_z
    0x1C, 0x2C, 0x2C, 0xA3, 0xA4, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA4, 0xA3, 0xA3, 0xA3, 0xA3, 0xBF, 0xD2,
};


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
    {18, 32, 3, 6, 3, 7, 37},  // FreeSans32_1
    {18, 32, 3, 6, 1, 2, 59},  // FreeSans32_2
    {18, 32, 3, 5, 1, 2, 87},  // FreeSans32_3
    {18, 32, 3, 6, 1, 1, 118},  // FreeSans32_4
    {18, 32, 3, 5, 1, 2, 150},  // FreeSans32_5
    {18, 32, 3, 5, 1, 2, 180},  // FreeSans32_6
    {18, 32, 3, 6, 1, 1, 218},  // FreeSans32_7
    {18, 32, 3, 5, 1, 2, 241},  // FreeSans32_8
    {18, 32, 3, 5, 1, 2, 278},  // FreeSans32_9
    {8, 32, 9, 6, 3, 2, 313},  // FreeSans32_colon
    {22, 32, 2, 7, 1, 1, 317},  // FreeSans32_A
    {22, 32, 2, 7, 3, 2, 361},  // FreeSans32_B
    {23, 32, 2, 5, 1, 2, 397},  // FreeSans32_C
    {23, 32, 2, 7, 3, 2, 438},  // FreeSans32_D
    {21, 32, 2, 7, 3, 2, 471},  // FreeSans32_E
    {20, 32, 2, 7, 3, 2, 494},  // FreeSans32_F
    {25, 32, 2, 5, 1, 2, 517},  // FreeSans32_G
    {24, 32, 2, 7, 3, 3, 563},  // FreeSans32_H
    {9, 32, 2, 7, 3, 3, 587},  // FreeSans32_I
    {17, 32, 2, 6, 1, 3, 591},  // FreeSans32_J
    {22, 32, 2, 7, 3, 1, 617},  // FreeSans32_K
    {19, 32, 2, 7, 3, 2, 663},  // FreeSans32_L
    {28, 32, 2, 7, 3, 3, 686},  // FreeSans32_M
    {24, 32, 2, 7, 3, 3, 746},  // FreeSans32_N
    {26, 32, 2, 5, 1, 2, 785},  // FreeSans32_O
    {21, 32, 2, 7, 3, 2, 831},  // FreeSans32_P
    {26, 32, 2, 5, 1, 2, 857},  // FreeSans32_Q
    {23, 32, 2, 7, 3, 2, 908},  // FreeSans32_R
    {22, 32, 2, 5, 2, 2, 950},  // FreeSans32_S
    {21, 32, 2, 7, 1, 2, 983},  // FreeSans32_T
    {24, 32, 2, 6, 3, 4, 1017},  // FreeSans32_U
    {21, 32, 2, 7, 1, 1, 1044},  // FreeSans32_V
    {30, 32, 2, 7, 1, 1, 1086},  // FreeSans32_W
    {22, 32, 2, 7, 1, 2, 1159},  // FreeSans32_X
    {22, 32, 2, 7, 1, 1, 1201},  // FreeSans32_Y
    {20, 32, 2, 7, 1, 1, 1240},  // FreeSans32_Z
    {18, 32, 8, 7, 1, 1, 1264},  // FreeSans32_a
    {18, 32, 2, 6, 2, 1, 1293},  // FreeSans32_b
    {17, 32, 8, 7, 1, 2, 1327},  // FreeSans32_c
    {18, 32, 2, 6, 1, 2, 1350},  // FreeSans32_d
    {18, 32, 8, 7, 1, 2, 1383},  // FreeSans32_e
    {9, 32, 2, 7, 1, 1, 1405},  // FreeSans32_f
    {18, 33, 8, 1, 1, 2, 1428},  // FreeSans32_g
    {18, 32, 2, 7, 2, 3, 1466},  // FreeSans32_h
    {8, 32, 2, 7, 2, 3, 1492},  // FreeSans32_i
    {8, 33, 2, 1, 0, 3, 1496},  // FreeSans32_j
    {17, 32, 2, 7, 2, 1, 1522},  // FreeSans32_k
    {7, 32, 2, 7, 2, 2, 1561},  // FreeSans32_l
    {26, 32, 8, 7, 2, 2, 1565},  // FreeSans32_m
    {18, 32, 8, 7, 2, 3, 1603},  // FreeSans32_n
    {18, 32, 8, 7, 1, 2, 1625},  // FreeSans32_o
    {18, 33, 8, 1, 2, 1, 1649},  // FreeSans32_p
    {18, 33, 8, 1, 1, 2, 1685},  // FreeSans32_q
    {11, 32, 8, 7, 2, 1, 1718},  // FreeSans32_r
    {16, 32, 8, 7, 1, 1, 1736},  // FreeSans32_s
    {9, 32, 4, 6, 1, 1, 1758},  // FreeSans32_t
    {18, 32, 9, 5, 2, 3, 1780},  // FreeSans32_u
    {16, 32, 9, 6, 0, 1, 1802},  // FreeSans32_v
    {24, 32, 9, 6, 0, 1, 1833},  // FreeSans32_w
    {16, 32, 9, 6, 1, 1, 1890},  // FreeSans32_x
    {16, 33, 9, 0, 0, 1, 1919},  // FreeSans32_y
    {16, 32, 9, 6, 1, 1, 1957},  // FreeSans32_z
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
    else if(c >= 'A' && c <= 'Z')
    {
        t = &freesans32_table[((c-'A')+10+1)];
    }
    else if(c >= 'a' && c <= 'z')
    {
        t = &freesans32_table[((c-'a')+10+1+26)];
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
        sym->size = sizeof(freesans32_bmp) - t->bmp_index;
    }
    else
    {
        sym->size = (t+1)->bmp_index - t->bmp_index;
    }
    return true;
}

font_t freesans32 = 
{
    .default_width = FREESANS32_DEFAULT_WIDTH,
    .default_height = FREESANS32_DEFAULT_HEIGHT,
    .bmp_base = freesans32_bmp,
    .lookup = freesans32_lookup
};
