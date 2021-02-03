/*
    <Generate from varsize_lvgl.tpl>
    generate font bitmap
    bpp : 1
    font: FreeSans
    size: 32
    encoding method: lvgl

    width: varsize
    height: varsize
*/

#include "font.h"

#define FREESANS32_DEFAULT_WIDTH     24 /* Specify default font width */
#define FREESANS32_DEFAULT_HEIGHT    32 /* Specify default font height */

static const uint8_t freesans32_bmp[] = {
    // FreeSans32_0
    0x3D, 0xE3, 0xFB, 0xFC, 0x7B, 0xFF, 0x1B, 0xC6, 0xE3, 0x71, 0xEE, 0x1C, 0x7D, 0xC3, 0x8F, 0xDC, 0xE3, 0xF7, 0x31, 0xFD,
    0xF8, 0xFE, 0xFC, 0x7F, 0x7E, 0x3F, 0xBF, 0x1F, 0xDF, 0x8F, 0xEF, 0xC7, 0xF7, 0x31, 0xFD, 0xCE, 0x3F, 0x73, 0x8F, 0xDC,
    0xE3, 0xEE, 0x2E, 0x3D, 0xC5, 0xC7, 0x71, 0xDF, 0xF8, 0xF7, 0xF8, 0xFE, 0xF1, 0xC0,
    // FreeSans32_1
    0x3D, 0x8F, 0x63, 0xB8, 0xEE, 0x1F, 0xFF, 0x28, 0xEE, 0x3B, 0x8E, 0xE3, 0xB8, 0xEE, 0x3B, 0x8E, 0xE3, 0xB8, 0xEE, 0x3B,
    0x8E, 0xE3, 0xB8, 0xEE, 0x3B, 0x8E, 0xE3, 0xB8,
    // FreeSans32_2
    0x3D, 0xC7, 0xFB, 0xFC, 0x77, 0xFF, 0xC0, 0x2E, 0x3D, 0xC3, 0x8F, 0xDC, 0xE3, 0xF7, 0x38, 0xFD, 0xCC, 0x7F, 0x71, 0xFF,
    0xC0, 0xE3, 0xFF, 0x81, 0xC7, 0xFD, 0xC7, 0xFB, 0xE3, 0xFB, 0xE3, 0xF7, 0xC7, 0xEF, 0x8F, 0xEF, 0x1F, 0xEF, 0x1F, 0xEF,
    0x1F, 0xF7, 0x1F, 0xFC, 0x0C, 0x7F, 0xF0, 0x3F, 0xFF, 0x08,
    // FreeSans32_3
    0x3D, 0xC7, 0xF7, 0xFC, 0x77, 0xFF, 0x17, 0x8E, 0xF0, 0xE3, 0xEE, 0x1C, 0x7D, 0xC3, 0x1F, 0xDF, 0x8F, 0xEC, 0x7F, 0xF0,
    0x38, 0xFF, 0xBC, 0x7D, 0xFC, 0x7E, 0xFC, 0x7F, 0x7F, 0x8F, 0xFE, 0x07, 0x1F, 0xFC, 0x1E, 0x3F, 0xF8, 0x1F, 0x8F, 0xEF,
    0xC7, 0xF7, 0xE3, 0xFB, 0x9C, 0x7E, 0xE7, 0x8E, 0xF1, 0x7F, 0xF1, 0xDF, 0xF1, 0xFD, 0xC7, 0x80,
    // FreeSans32_4
    0x3F, 0xD8, 0xFF, 0xE0, 0xF1, 0xFF, 0xC1, 0xE3, 0xFF, 0x81, 0xE3, 0xFE, 0xF8, 0xFF, 0x7E, 0x3F, 0xD9, 0xC7, 0xF7, 0x38,
    0xFD, 0xC3, 0x8F, 0xD8, 0xB8, 0xFB, 0x8B, 0x8F, 0x71, 0xB8, 0xEE, 0x3B, 0x8E, 0xC7, 0xB8, 0xDC, 0x7B, 0x8D, 0xFF, 0xF9,
    0x0F, 0xEE, 0x3F, 0xF8, 0x3C, 0x7F, 0xF0, 0x78, 0xFF, 0xE0, 0xF1, 0xFF, 0xC1, 0xE3, 0x00,
    // FreeSans32_5
    0x1F, 0xFF, 0x00, 0xBF, 0xFE, 0x01, 0x7F, 0xFC, 0x02, 0xE3, 0xFF, 0x81, 0xC7, 0xFF, 0x03, 0x1F, 0xFC, 0x1C, 0x7F, 0xF0,
    0x71, 0xFF, 0xC0, 0xE1, 0xF1, 0xDF, 0xFF, 0x00, 0xBF, 0xFE, 0x08, 0xF1, 0xEE, 0x1C, 0x7E, 0xE3, 0xFF, 0x81, 0xC7, 0xFF,
    0x03, 0x8F, 0xFE, 0x0E, 0x3F, 0xF8, 0x1F, 0x8F, 0xEF, 0xC7, 0xF7, 0x38, 0xFB, 0xCF, 0x1D, 0xE2, 0xFF, 0xE3, 0xBF, 0xE3,
    0xFB, 0xC7, 0x00,
    // FreeSans32_6
    0x3E, 0xE3, 0xFB, 0xFC, 0x7B, 0xFF, 0x1B, 0xC6, 0xF1, 0x71, 0xEE, 0x1C, 0x7E, 0xE7, 0x1F, 0xFC, 0x0E, 0x3F, 0xF8, 0x18,
    0xFF, 0xE0, 0xE2, 0xF8, 0xDC, 0xFF, 0x87, 0xF9, 0xF3, 0xE3, 0xDF, 0xE3, 0xF7, 0xF1, 0xFB, 0x98, 0xFE, 0xE6, 0x3F, 0xD9,
    0xC7, 0xEE, 0x71, 0xFB, 0x9E, 0x3E, 0xE1, 0xE3, 0x78, 0xDF, 0xF8, 0xF7, 0xF8, 0xFE, 0xF1, 0xC0,
    // FreeSans32_7
    0xFF, 0xFC, 0x87, 0xFF, 0x03, 0x8F, 0xFE, 0x0E, 0x3F, 0xF8, 0x3C, 0x7F, 0xF0, 0x38, 0xFF, 0xE0, 0xE3, 0xFF, 0x83, 0xC7,
    0xFF, 0x07, 0x1F, 0xFC, 0x1E, 0x3F, 0xF8, 0x1C, 0x7F, 0xF0, 0x78, 0xFF, 0xE0, 0xE3, 0xFF, 0x83, 0xC7, 0xFF, 0x07, 0x1F,
    0xFC, 0x1E, 0x3F, 0xF8, 0x3C, 0x7F, 0xF0, 0x71, 0xFF, 0xC1, 0xE3, 0xFF, 0x83, 0xC7, 0xFF, 0x07, 0x8F, 0xFE, 0x0F, 0x1F,
    0xC0,
    // FreeSans32_8
    0x3E, 0xC7, 0xFB, 0xFC, 0x77, 0xFF, 0x1B, 0x8E, 0xF0, 0xE3, 0xEE, 0x1C, 0x7E, 0xE7, 0x1F, 0xB9, 0xC7, 0xEE, 0x78, 0xF7,
    0x17, 0x8D, 0xE3, 0x7F, 0xC7, 0xBF, 0xE3, 0xBE, 0x1F, 0x0E, 0x3E, 0xE1, 0xC7, 0xEF, 0xC7, 0xF7, 0xE3, 0xFD, 0xF1, 0xFD,
    0xF8, 0xFE, 0xE7, 0x1F, 0xB9, 0xE3, 0xDC, 0x5F, 0xFF, 0x00, 0xDF, 0xF1, 0xFD, 0xE3, 0x80,
    // FreeSans32_9
    0x3D, 0xC7, 0xF7, 0xFC, 0x77, 0xFF, 0x17, 0x8E, 0xF0, 0xE3, 0xEE, 0x1C, 0x7E, 0xFC, 0x7F, 0x7E, 0x3F, 0xBF, 0x1F, 0xDF,
    0x8F, 0xEE, 0x71, 0xF7, 0x9C, 0x7D, 0xE1, 0xF3, 0xF8, 0xBF, 0xFE, 0x01, 0xBF, 0x0E, 0x3F, 0xF8, 0x1C, 0x7F, 0xF0, 0x38,
    0xFF, 0xE0, 0x73, 0x8F, 0xB8, 0x71, 0xF7, 0x17, 0x1D, 0xC6, 0xFF, 0xC7, 0xBF, 0xC7, 0xFB, 0x8F, 0x00,
    // FreeSans32_colon
    0xFF, 0xF8, 0x07, 0xFF, 0x4B, 0xFE,
    // FreeSans32_A
    0x3E, 0xF8, 0xFF, 0xE1, 0xFC, 0x7F, 0xF0, 0xFF, 0x1F, 0xFC, 0x1E, 0x71, 0xFF, 0xC1, 0xE7, 0x1F, 0xFC, 0x1E, 0x1C, 0x7F,
    0xDC, 0x5C, 0x7F, 0xDC, 0x5C, 0x7F, 0xDC, 0x6E, 0x3F, 0xB8, 0xEE, 0x3F, 0xB8, 0xEE, 0x3F, 0xB8, 0xF7, 0x1F, 0x71, 0xF7,
    0x1F, 0x71, 0xF7, 0x8E, 0xFF, 0xF8, 0x67, 0x7F, 0xFC, 0x33, 0xB8, 0xFE, 0xF1, 0x78, 0xFF, 0x71, 0x71, 0xFF, 0x71, 0x71,
    0xFF, 0x79, 0xE3, 0xFF, 0x81, 0xCE, 0x3F, 0xF8, 0x3C, 0xE3, 0xFF, 0x83, 0xE0,
    // FreeSans32_B
    0xFF, 0xF8, 0x26, 0xFF, 0xF8, 0x45, 0xC7, 0xDF, 0x0E, 0x3F, 0xBC, 0xE3, 0xFD, 0xCE, 0x3F, 0xDC, 0xE3, 0xFD, 0xCE, 0x3F,
    0xDC, 0xE3, 0xFB, 0x87, 0x1F, 0x78, 0xBF, 0xFE, 0x09, 0xBF, 0xFE, 0x11, 0x71, 0xFB, 0xE7, 0x1F, 0xEE, 0x71, 0xFF, 0x7E,
    0x3F, 0xEF, 0xC7, 0xFD, 0xF8, 0xFF, 0xBF, 0x1F, 0xEF, 0xE3, 0xFD, 0xCF, 0xFF, 0x88, 0xFF, 0xF8, 0x63, 0xFF, 0xE0, 0x98,
    // FreeSans32_C
    0x3F, 0xBC, 0x7F, 0xF0, 0x7F, 0xF1, 0xFB, 0xFF, 0xE0, 0x9E, 0xF8, 0xF7, 0x8D, 0xE3, 0xFB, 0xC5, 0xC7, 0xFD, 0xC3, 0xC7,
    0xFD, 0xE7, 0x1F, 0xFC, 0x1E, 0x71, 0xFF, 0xC5, 0xE3, 0xFF, 0x89, 0xC7, 0xFF, 0x17, 0x8F, 0xFE, 0x2F, 0x1F, 0xFC, 0x5E,
    0x3F, 0xF8, 0xBC, 0x7F, 0xF1, 0xB8, 0xFF, 0xE0, 0xF3, 0x8F, 0xFE, 0x0F, 0x38, 0xFF, 0xE0, 0xF3, 0xC7, 0xFF, 0x03, 0x87,
    0x1F, 0xF7, 0x17, 0x8F, 0xEF, 0x1B, 0xE3, 0xDE, 0x3D, 0xFF, 0xF0, 0x4F, 0xEF, 0xFC, 0x7F, 0xF0, 0x3E, 0x3E,
    // FreeSans32_D
    0xFF, 0xF8, 0x27, 0x7F, 0xFC, 0x23, 0x71, 0xF7, 0xC5, 0xC7, 0xF7, 0x87, 0x1F, 0xEF, 0x38, 0xFF, 0xB9, 0xC7, 0xFD, 0xCE,
    0x3F, 0xF8, 0x1F, 0x8F, 0xFE, 0x07, 0xE3, 0xFF, 0x81, 0xF8, 0xFF, 0xE0, 0x7E, 0x3F, 0xF8, 0x1F, 0x8F, 0xFE, 0x07, 0xE3,
    0xFF, 0x81, 0xF8, 0xFF, 0xE0, 0x7E, 0x3F, 0xF8, 0x1F, 0x8F, 0xFB, 0x9C, 0x7F, 0xDC, 0xE3, 0xFD, 0xC3, 0x8F, 0xEF, 0x0F,
    0xFF, 0x86, 0x5F, 0xFF, 0x08, 0xDF, 0xFF, 0x00, 0xF0,
    // FreeSans32_E
    0xFF, 0xFA, 0xE7, 0xFF, 0x07, 0x8F, 0xFE, 0x0F, 0x1F, 0xFC, 0x1E, 0x3F, 0xF8, 0x3C, 0x7F, 0xF0, 0x78, 0xFF, 0xE0, 0xF1,
    0xFF, 0xC1, 0xE3, 0xFF, 0x83, 0xFF, 0xF0, 0xDF, 0xFF, 0x0D, 0xC7, 0xFF, 0x07, 0x8F, 0xFE, 0x0F, 0x1F, 0xFC, 0x1E, 0x3F,
    0xF8, 0x3C, 0x7F, 0xF0, 0x78, 0xFF, 0xE0, 0xF1, 0xFF, 0xC1, 0xE3, 0xFF, 0x83, 0xFF, 0xF9, 0x00,
    // FreeSans32_F
    0xFF, 0xFA, 0xA7, 0xFF, 0x03, 0x8F, 0xFE, 0x07, 0x1F, 0xFC, 0x0E, 0x3F, 0xF8, 0x1C, 0x7F, 0xF0, 0x38, 0xFF, 0xE0, 0x71,
    0xFF, 0xC0, 0xE3, 0xFF, 0x81, 0xFF, 0xF0, 0x9F, 0xFF, 0x09, 0xC7, 0xFF, 0x03, 0x8F, 0xFE, 0x07, 0x1F, 0xFC, 0x0E, 0x3F,
    0xF8, 0x1C, 0x7F, 0xF0, 0x38, 0xFF, 0xE0, 0x71, 0xFF, 0xC0, 0xE3, 0xFF, 0x81, 0xC7, 0xFF, 0x03, 0x8F, 0xFE, 0x07, 0x1F,
    0xFC, 0x00,
    // FreeSans32_G
    0x3F, 0xBC, 0x7F, 0xF0, 0xFF, 0xF8, 0xFE, 0xFF, 0xF8, 0x47, 0xDF, 0x1F, 0x78, 0xF7, 0x8F, 0xEF, 0x1B, 0xC7, 0xFD, 0xE2,
    0xE3, 0xFF, 0x83, 0xC3, 0x8F, 0xFE, 0x17, 0x0E, 0x3F, 0xF8, 0xFC, 0x7F, 0xF1, 0xB8, 0xFF, 0xE3, 0xF1, 0xFF, 0xC7, 0xE3,
    0xFB, 0xFF, 0xE0, 0x9F, 0xDF, 0xFF, 0x04, 0xFF, 0xE2, 0x73, 0x8F, 0xFE, 0x1F, 0x38, 0xFF, 0xE1, 0xF3, 0x8F, 0xFE, 0x1F,
    0x3C, 0x7F, 0xF0, 0x7C, 0x3C, 0x7F, 0xDF, 0x17, 0x8F, 0xEF, 0xC5, 0xF1, 0xF7, 0x38, 0xDF, 0xFF, 0x04, 0x71, 0xEF, 0xFC,
    0x6C, 0x7F, 0x78, 0xFE,
    // FreeSans32_H
    0xE3, 0xFF, 0x81, 0xF8, 0xFF, 0xE0, 0x7E, 0x3F, 0xF8, 0x1F, 0x8F, 0xFE, 0x07, 0xE3, 0xFF, 0x81, 0xF8, 0xFF, 0xE0, 0x7E,
    0x3F, 0xF8, 0x1F, 0x8F, 0xFE, 0x07, 0xE3, 0xFF, 0x81, 0xF8, 0xFF, 0xE0, 0x7F, 0xFD, 0xE3, 0xFF, 0x81, 0xF8, 0xFF, 0xE0,
    0x7E, 0x3F, 0xF8, 0x1F, 0x8F, 0xFE, 0x07, 0xE3, 0xFF, 0x81, 0xF8, 0xFF, 0xE0, 0x7E, 0x3F, 0xF8, 0x1F, 0x8F, 0xFE, 0x07,
    0xE3, 0xFF, 0x81, 0xF8, 0xFF, 0xE0, 0x7E, 0x3F, 0xF8, 0x1C,
    // FreeSans32_I
    0xFF, 0xFF, 0x20,
    // FreeSans32_J
    0x3F, 0xDC, 0x7F, 0xB8, 0xFF, 0x71, 0xFE, 0xE3, 0xFD, 0xC7, 0xFB, 0x8F, 0xF7, 0x1F, 0xEE, 0x3F, 0xDC, 0x7F, 0xB8, 0xFF,
    0x71, 0xFE, 0xE3, 0xFD, 0xC7, 0xFB, 0x8F, 0xF7, 0x1F, 0xEF, 0xC7, 0xDF, 0x8F, 0xBF, 0x1F, 0x7F, 0x1E, 0xE7, 0x1D, 0xC3,
    0xFF, 0x8B, 0xFE, 0x3E, 0xE3, 0x80,
    // FreeSans32_K
    0xE3, 0xFD, 0xE7, 0x1F, 0xDE, 0x1C, 0x7E, 0xF1, 0x71, 0xF7, 0x8D, 0xC7, 0xBC, 0x77, 0x1D, 0xE3, 0xDC, 0x6F, 0x1F, 0x71,
    0x78, 0xFD, 0xC3, 0xC7, 0xF7, 0x3E, 0x3F, 0xBF, 0xE3, 0xFB, 0xF3, 0x8F, 0xDF, 0x0F, 0x1F, 0x78, 0xDC, 0x7D, 0xC7, 0xB8,
    0xF7, 0x1E, 0xF1, 0xDC, 0x7D, 0xE3, 0x71, 0xFB, 0x8D, 0xC7, 0xEF, 0x17, 0x1F, 0xDE, 0x1C, 0x7F, 0xB8, 0x71, 0xFF, 0x73,
    0x8F, 0xFB, 0xC0,
    // FreeSans32_L
    0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE,
    0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE,
    0xFF, 0xFB, 0xC0,
    // FreeSans32_M
    0xF1, 0xFF, 0xC1, 0xFF, 0x8F, 0xFE, 0x0F, 0xFE, 0x3F, 0xEF, 0xFE, 0x3F, 0xEF, 0xF3, 0x1F, 0xF6, 0x7C, 0xE3, 0xFB, 0x9F,
    0x38, 0xFE, 0xE7, 0xC3, 0x1F, 0xD8, 0x7C, 0x38, 0xFB, 0x87, 0xC3, 0x8F, 0xB8, 0x7C, 0x58, 0xFB, 0x17, 0xC5, 0xC7, 0x71,
    0x7C, 0x5C, 0x77, 0x17, 0xC6, 0xC7, 0x63, 0x7C, 0x6E, 0x2E, 0x37, 0xC6, 0xE2, 0xE3, 0x7C, 0x76, 0x2C, 0x77, 0xC7, 0x73,
    0x8E, 0xF8, 0xEE, 0x71, 0xDF, 0x1E, 0xCC, 0x7B, 0xE3, 0xDF, 0x1E, 0xF8, 0xF7, 0xC7, 0xBE, 0x3E, 0xE3, 0xEE,
    // FreeSans32_N
    0xE3, 0xFF, 0x81, 0xFC, 0x7F, 0xDF, 0xE3, 0xFD, 0xFE, 0x3F, 0xDF, 0x38, 0xFE, 0xF9, 0xE3, 0xF7, 0xC3, 0x8F, 0xDF, 0x17,
    0x1F, 0x7C, 0x5C, 0x7D, 0xF1, 0xB8, 0xF7, 0xC6, 0xF1, 0xDF, 0x1D, 0xC7, 0x7C, 0x7B, 0x8D, 0xF1, 0xEF, 0x17, 0xC7, 0xDC,
    0x5F, 0x1F, 0xB8, 0x7C, 0x7E, 0xF3, 0xE3, 0xFB, 0x9F, 0x1F, 0xEF, 0xF1, 0xFE, 0xFF, 0x1F, 0xF7, 0xF1, 0xFF, 0x7F, 0x1F,
    0xFC, 0x0F, 0x00,
    // FreeSans32_O
    0x3F, 0xBE, 0x3F, 0xF8, 0x7F, 0xFC, 0x7F, 0xDF, 0xFF, 0x04, 0xFE, 0xF1, 0xF7, 0xC7, 0xBC, 0x7F, 0x78, 0xEF, 0x1F, 0xF7,
    0x8B, 0xC7, 0xFF, 0x07, 0xC3, 0x8F, 0xFE, 0x1F, 0x0E, 0x3F, 0xF8, 0x7C, 0x38, 0xFF, 0xE1, 0xFF, 0x1F, 0xFC, 0x5F, 0xC7,
    0xFF, 0x17, 0xF1, 0xFF, 0xC5, 0xFC, 0x7F, 0xF1, 0x7F, 0x1F, 0xFC, 0x5E, 0x71, 0xFF, 0xC3, 0xF3, 0x8F, 0xFE, 0x1F, 0x0E,
    0x3F, 0xF8, 0x7C, 0x3C, 0x7F, 0xF0, 0x7C, 0x5E, 0x3F, 0xF8, 0x1C, 0x77, 0x8F, 0xEF, 0x1E, 0xF8, 0xFB, 0xE3, 0xF7, 0xFF,
    0xC1, 0x3F, 0xEF, 0xFE, 0x3F, 0xF8, 0x7F, 0x1F, 0xC0,
    // FreeSans32_P
    0xFF, 0xF8, 0x25, 0xFF, 0xF0, 0xDC, 0x7D, 0xF3, 0x8F, 0xEF, 0xE3, 0xFD, 0xF8, 0xFF, 0x7E, 0x3F, 0xDF, 0x8F, 0xF7, 0xE3,
    0xFD, 0xF8, 0xFE, 0xFF, 0xF8, 0xEF, 0xFF, 0x84, 0x3F, 0xFE, 0x09, 0x71, 0xFF, 0xC1, 0xE3, 0xFF, 0x83, 0xC7, 0xFF, 0x07,
    0x8F, 0xFE, 0x0F, 0x1F, 0xFC, 0x1E, 0x3F, 0xF8, 0x3C, 0x7F, 0xF0, 0x78, 0xFF, 0xE0, 0xF1, 0xFF, 0xC1, 0xE3, 0xFF, 0x82,
    // FreeSans32_Q
    0x3F, 0xBE, 0x3F, 0xF8, 0x7F, 0xFC, 0x7F, 0xDF, 0xFF, 0x04, 0xFE, 0xF1, 0xF7, 0xC7, 0xBC, 0x7F, 0x78, 0xEF, 0x1F, 0xF7,
    0x8B, 0xC7, 0xFF, 0x07, 0xC3, 0x8F, 0xFE, 0x1F, 0x0E, 0x3F, 0xF8, 0x7C, 0x38, 0xFF, 0xE1, 0xFF, 0x1F, 0xFC, 0x5F, 0xC7,
    0xFF, 0x17, 0xF1, 0xFF, 0xC5, 0xFC, 0x7F, 0xF1, 0x7F, 0x1F, 0xFC, 0x5E, 0x71, 0xFF, 0xC3, 0xF3, 0x8F, 0xFE, 0x1F, 0x0E,
    0x3F, 0xD3, 0x70, 0xF1, 0xFD, 0x87, 0x8B, 0xC7, 0xDE, 0x71, 0xDE, 0x3E, 0xFC, 0x7B, 0xE3, 0xEF, 0x8F, 0xDF, 0xFF, 0x10,
    0xFD, 0xFF, 0xCF, 0x1F, 0xEF, 0x1E, 0xE0,
    // FreeSans32_R
    0xFF, 0xF8, 0x46, 0xFF, 0xF8, 0x83, 0x8F, 0xEF, 0x9C, 0x7F, 0xBC, 0xE3, 0xFE, 0xE7, 0x1F, 0xF7, 0x38, 0xFF, 0xB9, 0xC7,
    0xFD, 0xCE, 0x3F, 0xEE, 0x71, 0xFE, 0xE1, 0xFF, 0xF0, 0xCB, 0xFF, 0xE1, 0x1B, 0xFF, 0xE1, 0x97, 0x1F, 0xEE, 0x1C, 0x7F,
    0xDC, 0xE3, 0xFE, 0xE7, 0x1F, 0xF7, 0x38, 0xFF, 0xB9, 0xC7, 0xFD, 0xCE, 0x3F, 0xEE, 0x71, 0xFF, 0x73, 0x8F, 0xFB, 0xF8,
    0xFF, 0xBC,
    // FreeSans32_S
    0x3E, 0xE3, 0xFE, 0xFF, 0xE3, 0xDF, 0xFF, 0x04, 0xDE, 0x3E, 0xF1, 0x71, 0xFD, 0xC3, 0x8F, 0xFB, 0x9C, 0x7F, 0xDC, 0xE3,
    0xFE, 0xE7, 0x8F, 0xFE, 0x1F, 0x8F, 0xFE, 0x17, 0xF1, 0xFF, 0xC0, 0xFF, 0xC7, 0xFD, 0xFF, 0x8F, 0xFB, 0xFC, 0x7F, 0xF0,
    0xBE, 0x3F, 0xF8, 0x7E, 0x3F, 0xF8, 0x7F, 0x1F, 0xFC, 0x1F, 0xC7, 0xFF, 0x03, 0xF1, 0xFF, 0xC0, 0xFE, 0x3F, 0xDC, 0x3C,
    0x7D, 0xF1, 0x7F, 0xFC, 0x23, 0xBF, 0xF8, 0xFF, 0x7C, 0x7C,
    // FreeSans32_T
    0xFF, 0xFB, 0x07, 0xEE, 0x3F, 0xF8, 0x7C, 0x7F, 0xF0, 0xF8, 0xFF, 0xE1, 0xF1, 0xFF, 0xC3, 0xE3, 0xFF, 0x87, 0xC7, 0xFF,
    0x0F, 0x8F, 0xFE, 0x1F, 0x1F, 0xFC, 0x3E, 0x3F, 0xF8, 0x7C, 0x7F, 0xF0, 0xF8, 0xFF, 0xE1, 0xF1, 0xFF, 0xC3, 0xE3, 0xFF,
    0x87, 0xC7, 0xFF, 0x0F, 0x8F, 0xFE, 0x1F, 0x1F, 0xFC, 0x3E, 0x3F, 0xF8, 0x7C, 0x7F, 0xF0, 0xF8, 0xFF, 0xE1, 0xF1, 0xFF,
    0xC3, 0xE3, 0xE0,
    // FreeSans32_U
    0xE3, 0xFE, 0xFC, 0x7F, 0xDF, 0x8F, 0xFB, 0xF1, 0xFF, 0x7E, 0x3F, 0xEF, 0xC7, 0xFD, 0xF8, 0xFF, 0xBF, 0x1F, 0xF7, 0xE3,
    0xFE, 0xFC, 0x7F, 0xDF, 0x8F, 0xFB, 0xF1, 0xFF, 0x7E, 0x3F, 0xEF, 0xC7, 0xFD, 0xF8, 0xFF, 0xBF, 0x1F, 0xF7, 0xE3, 0xFE,
    0xFC, 0x7F, 0xDF, 0x8F, 0xFB, 0xF8, 0xFE, 0xF3, 0xC7, 0xDE, 0x2F, 0xFF, 0x82, 0x77, 0xFF, 0x1F, 0xDF, 0x1E,
    // FreeSans32_V
    0xE3, 0xFF, 0x83, 0xF8, 0xFF, 0xE0, 0x79, 0xC7, 0xFD, 0xC3, 0x8F, 0xFB, 0x87, 0x1F, 0xEF, 0x17, 0x1F, 0xDC, 0x6E, 0x3F,
    0xB8, 0xDC, 0x7E, 0xE3, 0xDC, 0x7D, 0xC7, 0xB8, 0xFB, 0x8F, 0x71, 0xEE, 0x3F, 0x71, 0xDC, 0x7E, 0xE3, 0xB8, 0xFD, 0xC6,
    0xE3, 0xFD, 0xC5, 0xC7, 0xFB, 0x8B, 0x8F, 0xFB, 0x9C, 0x7F, 0xF0, 0x39, 0xC7, 0xFF, 0x03, 0x9C, 0x7F, 0xF0, 0x7E, 0x3F,
    0xF8, 0x5F, 0x1F, 0xFC, 0x2F, 0x8F, 0xFE, 0x1F, 0x1F, 0x80,
    // FreeSans32_W
    0xE3, 0xFB, 0xC7, 0xF7, 0xE3, 0xFB, 0xC7, 0xF7, 0xE3, 0xFB, 0xC7, 0xF7, 0xF1, 0xF7, 0xE3, 0xEF, 0x38, 0xFB, 0xF1, 0xF7,
    0x0E, 0x3E, 0xCE, 0x3E, 0xE1, 0xC7, 0xB8, 0x63, 0xEE, 0x1E, 0x3B, 0x87, 0x1D, 0xE2, 0xE3, 0xB8, 0x71, 0xDC, 0x6E, 0x3B,
    0x1B, 0x1D, 0xC6, 0xE3, 0x71, 0xB8, 0xDC, 0x77, 0x17, 0x1B, 0x8B, 0xC7, 0x71, 0x71, 0xB8, 0xB8, 0xF7, 0x16, 0x3D, 0x8B,
    0x8F, 0x70, 0xE3, 0xDC, 0x38, 0xFB, 0x0E, 0x3D, 0xC3, 0x8F, 0xB9, 0xC7, 0xB9, 0xC7, 0xEF, 0xC7, 0xEF, 0xC7, 0xEF, 0xC7,
    0xEF, 0xC7, 0xF7, 0xC7, 0xEF, 0x8F, 0xF7, 0x8F, 0xF7, 0x8F, 0xF7, 0x8F, 0xF7, 0x8F, 0xF7, 0x8F, 0xF7, 0x8E,
    // FreeSans32_X
    0xF1, 0xFF, 0x79, 0xE3, 0xFB, 0xC5, 0xC7, 0xF7, 0x1D, 0xC7, 0xDE, 0x3B, 0xC7, 0x78, 0xFB, 0x8E, 0xE3, 0xFB, 0x8B, 0x8F,
    0xF7, 0x9E, 0x3F, 0xEE, 0x71, 0xFF, 0xC1, 0xF8, 0xFF, 0xE1, 0x7C, 0x7F, 0xF0, 0xBE, 0x3F, 0xF8, 0x5F, 0x1F, 0xFC, 0x1E,
    0x71, 0xFF, 0x79, 0xE3, 0xFD, 0xC5, 0xC7, 0xF7, 0x1D, 0xC7, 0xDE, 0x3B, 0xC7, 0xB8, 0xFB, 0x8E, 0xE3, 0xFB, 0x8B, 0xC7,
    0xF7, 0x87, 0x1F, 0xF7, 0xF1, 0xFF, 0xC1, 0xE0,
    // FreeSans32_Y
    0xF1, 0xFF, 0xC0, 0xF3, 0x8F, 0xFE, 0x07, 0x0F, 0x1F, 0xEE, 0x37, 0x1F, 0xDE, 0x3B, 0x8F, 0xDC, 0x7B, 0xC7, 0xBC, 0x7D,
    0xC7, 0xB8, 0xFD, 0xE3, 0x71, 0xFE, 0xE2, 0xF1, 0xFF, 0x70, 0xE3, 0xFF, 0x81, 0xFE, 0x3F, 0xF8, 0x3F, 0x8F, 0xFE, 0x1F,
    0x8F, 0xFE, 0x27, 0x8F, 0xFE, 0x27, 0x1F, 0xFC, 0x5E, 0x3F, 0xF8, 0xBC, 0x7F, 0xF1, 0x78, 0xFF, 0xE2, 0xF1, 0xFF, 0xC5,
    0xE3, 0xFF, 0x8B, 0xC7, 0xFF, 0x17, 0x8F, 0xFE, 0x2F, 0x1F, 0xC0,
    // FreeSans32_Z
    0x7F, 0xFC, 0x57, 0xFF, 0xC5, 0x3F, 0xF8, 0x5E, 0x3F, 0xF8, 0x3E, 0x3F, 0xF8, 0x3E, 0x3F, 0xF8, 0x3E, 0x3F, 0xF8, 0x5C,
    0x7F, 0xF0, 0xBC, 0x7F, 0xF0, 0x7C, 0x7F, 0xF0, 0x7C, 0x7F, 0xF0, 0xB8, 0xFF, 0xE1, 0x78, 0xFF, 0xE0, 0xF8, 0xFF, 0xE0,
    0xF8, 0xFF, 0xE0, 0xF8, 0xFF, 0xE1, 0x71, 0xFF, 0xC2, 0xF1, 0xFF, 0xC1, 0xF1, 0xFF, 0xC1, 0xF1, 0xFF, 0xC2, 0xE3, 0xFF,
    0x85, 0xFF, 0xFA, 0x80,
    // FreeSans32_a
    0x1F, 0xFC, 0x6F, 0x1B, 0xC6, 0xE3, 0xEE, 0x2E, 0x3E, 0xE3, 0xFF, 0x83, 0xC7, 0xFF, 0x07, 0x8F, 0xEF, 0xE3, 0x7F, 0xFC,
    0x02, 0xFE, 0x2E, 0x1E, 0x3E, 0xE1, 0xC7, 0xEE, 0x1C, 0x7E, 0xE1, 0xC7, 0xDE, 0x1C, 0x7B, 0xE2, 0xFF, 0xF8, 0x63, 0xFC,
    0x3C, 0x6E, 0x3D, 0x80,
    // FreeSans32_b
    0xE3, 0xFF, 0x81, 0xC7, 0xFF, 0x03, 0x8F, 0xFE, 0x07, 0x1F, 0xFC, 0x0E, 0x3F, 0xF8, 0x1C, 0x7F, 0xF0, 0x38, 0x7E, 0x37,
    0xFF, 0xC0, 0x2F, 0xC3, 0xE1, 0xE3, 0xDE, 0x78, 0xFB, 0x9C, 0x7F, 0x7E, 0x3F, 0xBF, 0x1F, 0xDF, 0x8F, 0xEF, 0xC7, 0xF7,
    0xE3, 0xFB, 0xF1, 0xFD, 0xF8, 0xFD, 0xCF, 0x1F, 0x73, 0xE3, 0xB8, 0x67, 0xFE, 0x18, 0x7F, 0x8F, 0xEE, 0x3C,
    // FreeSans32_c
    0x2F, 0xF8, 0xDE, 0x2F, 0x0E, 0x3D, 0xE7, 0x1F, 0x7E, 0x3F, 0x7E, 0x3F, 0xEE, 0x3F, 0xEE, 0x3F, 0xEE, 0x3F, 0xEE, 0x3F,
    0xEE, 0x3F, 0x7E, 0x3F, 0x73, 0x8F, 0xB9, 0xE3, 0xB8, 0xBF, 0xF8, 0xDF, 0xF1, 0xF7, 0x8E,
    // FreeSans32_d
    0x3F, 0xF8, 0x1C, 0x7F, 0xF0, 0x38, 0xFF, 0xE0, 0x71, 0xFF, 0xC0, 0xE3, 0xFF, 0x81, 0xC7, 0xFF, 0x03, 0x8D, 0xF8, 0x71,
    0x7F, 0xFC, 0x01, 0xE2, 0xFC, 0xF1, 0xEF, 0x38, 0xFB, 0xF8, 0xFE, 0xFC, 0x7F, 0x7E, 0x3F, 0xBF, 0x1F, 0xDF, 0x8F, 0xEF,
    0xC7, 0xF7, 0xE3, 0xFB, 0xF8, 0xFD, 0xCE, 0x3E, 0xF3, 0xC7, 0x7C, 0x3F, 0xF3, 0x17, 0xF8, 0x63, 0xBC, 0x78,
    // FreeSans32_e
    0x2F, 0xFC, 0x6F, 0x17, 0x8B, 0x8F, 0xB8, 0x71, 0xFB, 0x38, 0xFE, 0xFC, 0x7F, 0x7F, 0xFE, 0x73, 0xFF, 0x81, 0xC7, 0xFF,
    0x03, 0x8F, 0xEE, 0x71, 0xF7, 0x0F, 0x1D, 0xE2, 0xFF, 0xE3, 0xBF, 0xE3, 0xFB, 0x8F, 0x00,
    // FreeSans32_f
    0x2F, 0x0F, 0x87, 0x1B, 0x8D, 0xC6, 0xE1, 0xFF, 0xF0, 0x87, 0x1B, 0x8D, 0xC6, 0xE3, 0x71, 0xB8, 0xDC, 0x6E, 0x37, 0x1B,
    0x8D, 0xC6, 0xE3, 0x71, 0xB8, 0xDC, 0x00,
    // FreeSans32_g
    0x37, 0xE1, 0xC5, 0xFE, 0x70, 0xF1, 0x7E, 0x71, 0xEF, 0x9C, 0x7D, 0xFC, 0x7E, 0xFE, 0x3F, 0xBF, 0x1F, 0xDF, 0x8F, 0xEF,
    0xC7, 0xF7, 0xE3, 0xFB, 0xF1, 0xFD, 0xF8, 0xFD, 0xE7, 0x1F, 0x79, 0xE3, 0xBE, 0x1F, 0xF3, 0x8B, 0xF8, 0x71, 0xDC, 0x6E,
    0x3F, 0xF8, 0x18, 0x63, 0xF7, 0x0E, 0x3E, 0xE1, 0xF1, 0x78, 0xDF, 0xF8, 0xFB, 0xF1, 0xC0,
    // FreeSans32_h
    0xE3, 0xFD, 0xC7, 0xFB, 0x8F, 0xF7, 0x1F, 0xEE, 0x3F, 0xDC, 0x7F, 0xB8, 0x7E, 0x1F, 0xFF, 0x01, 0xF1, 0xBF, 0xC7, 0xBF,
    0x1F, 0x7E, 0x3F, 0x7C, 0x7E, 0xF8, 0xFD, 0xF1, 0xFB, 0xE3, 0xF7, 0xC7, 0xEF, 0x8F, 0xDF, 0x1F, 0xBE, 0x3F, 0x7C, 0x7E,
    0xF8, 0xFD, 0xF1, 0xFB, 0x00,
    // FreeSans32_i
    0xFF, 0x8F, 0xEF, 0xFF, 0xCE,
    // FreeSans32_j
    0x2C, 0x58, 0xB1, 0xFF, 0xC6, 0xC5, 0x8B, 0x16, 0x2C, 0x58, 0xB1, 0x62, 0xC5, 0x8B, 0x16, 0x2C, 0x58, 0xB1, 0x62, 0xC5,
    0x8B, 0x16, 0x2C, 0xFF, 0xF8, 0x20,
    // FreeSans32_k
    0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xFE, 0xE3, 0xDE, 0x71, 0xDE, 0x1C, 0x6F, 0x17, 0x17,
    0x8D, 0xC3, 0xC7, 0x73, 0xC7, 0xBF, 0xC7, 0xBF, 0xC7, 0xBE, 0x71, 0xDE, 0x1C, 0x77, 0x1B, 0x8D, 0xC6, 0xF1, 0x71, 0xDC,
    0x5C, 0x7B, 0x87, 0x1E, 0xF3, 0x8F, 0xB9, 0xC7, 0xEE,
    // FreeSans32_l
    0xFF, 0xFF, 0x20,
    // FreeSans32_m
    0xC5, 0xF1, 0xBF, 0x0C, 0xFF, 0x0F, 0xF3, 0xE2, 0xFE, 0x2F, 0xF1, 0xDE, 0x3D, 0xF8, 0xFB, 0x8F, 0x7E, 0x3E, 0xC7, 0xDF,
    0x8F, 0xB1, 0xF7, 0xE3, 0xEC, 0x7D, 0xF8, 0xFB, 0x1F, 0x7E, 0x3E, 0xC7, 0xDF, 0x8F, 0xB1, 0xF7, 0xE3, 0xEC, 0x7D, 0xF8,
    0xFB, 0x1F, 0x7E, 0x3E, 0xC7, 0xDF, 0x8F, 0xB1, 0xF7, 0xE3, 0xEC, 0x7D, 0xF8, 0xFB, 0x1F, 0x70,
    // FreeSans32_n
    0xC5, 0xF8, 0x61, 0xFE, 0x66, 0x37, 0xF8, 0xF7, 0xE3, 0xF7, 0xC7, 0xEF, 0x8F, 0xDF, 0x1F, 0xBE, 0x3F, 0x7C, 0x7E, 0xF8,
    0xFD, 0xF1, 0xFB, 0xE3, 0xF7, 0xC7, 0xEF, 0x8F, 0xDF, 0x1F, 0xBE, 0x3F, 0x60,
    // FreeSans32_o
    0x2F, 0xFC, 0x6F, 0x17, 0x8B, 0x8F, 0xB8, 0x71, 0xF7, 0x38, 0xFE, 0xFC, 0x7F, 0x7E, 0x3F, 0xBF, 0x1F, 0xDF, 0x8F, 0xEF,
    0xC7, 0xF7, 0xE3, 0xFB, 0xF1, 0xFD, 0xCE, 0x3E, 0xE1, 0xE3, 0xBC, 0x5F, 0xFC, 0x77, 0xFC, 0x7F, 0x71, 0xE0,
    // FreeSans32_p
    0xC5, 0xF8, 0xD9, 0xFF, 0x16, 0x70, 0xF8, 0x78, 0xF7, 0x9E, 0x3E, 0xE7, 0x1F, 0xDF, 0x8F, 0xEF, 0xC7, 0xF7, 0xE3, 0xFB,
    0xF1, 0xFD, 0xF8, 0xFE, 0xFC, 0x7F, 0x7E, 0x3F, 0x73, 0xC7, 0xDC, 0xF8, 0xEF, 0x3F, 0xFE, 0x08, 0xE7, 0xF8, 0xB8, 0xBC,
    0x77, 0x1F, 0xFC, 0x0E, 0x3F, 0xF8, 0x1C, 0x7F, 0xF0, 0x38, 0xFF, 0xE0, 0x71, 0xFF, 0xC0, 0xE3, 0xFF, 0x80,
    // FreeSans32_q
    0x37, 0xE2, 0xC5, 0xFF, 0x30, 0xF8, 0x7E, 0x78, 0xF7, 0x9C, 0x7D, 0xFC, 0x7F, 0x7E, 0x3F, 0xBF, 0x1F, 0xDF, 0x8F, 0xEF,
    0xC7, 0xF7, 0xE3, 0xFB, 0xF1, 0xFD, 0xFC, 0x7E, 0xE7, 0x1F, 0x79, 0xE3, 0xBE, 0x1F, 0xFF, 0x04, 0xBF, 0xCE, 0x3B, 0xC5,
    0xC7, 0xFF, 0x03, 0x8F, 0xFE, 0x07, 0x1F, 0xFC, 0x0E, 0x3F, 0xF8, 0x1C, 0x7F, 0xF0, 0x38, 0xFF, 0xE0, 0x70,
    // FreeSans32_r
    0xC5, 0xF0, 0xFC, 0xFF, 0x8D, 0xC7, 0x71, 0xDC, 0x77, 0x1D, 0xC7, 0x71, 0xDC, 0x77, 0x1D, 0xC7, 0x71, 0xDC, 0x77, 0x1D,
    0xC7, 0x00,
    // FreeSans32_s
    0x1F, 0xF8, 0xBC, 0x6E, 0x2E, 0x3D, 0xCE, 0x3E, 0xE1, 0x8F, 0xFE, 0x07, 0x8F, 0xF7, 0xF1, 0xFB, 0xFE, 0x3F, 0x7F, 0x8F,
    0xF7, 0x8F, 0xFE, 0x07, 0xE3, 0xF7, 0xE3, 0xF7, 0x38, 0xF7, 0x0F, 0xFF, 0x80, 0x5F, 0xF8, 0xFB, 0xC7, 0x00,
    // FreeSans32_t
    0x1C, 0x6E, 0x37, 0x1B, 0x87, 0xFF, 0xC2, 0x1C, 0x6E, 0x37, 0x1B, 0x8D, 0xC6, 0xE3, 0x71, 0xB8, 0xDC, 0x6E, 0x37, 0x1B,
    0x8D, 0xC6, 0xF8, 0x7C, 0x6E,
    // FreeSans32_u
    0xE3, 0xF7, 0xC7, 0xEF, 0x8F, 0xDF, 0x1F, 0xBE, 0x3F, 0x7C, 0x7E, 0xF8, 0xFD, 0xF1, 0xFB, 0xE3, 0xF7, 0xC7, 0xEF, 0x8F,
    0xDF, 0x1F, 0x7E, 0x3E, 0xFC, 0x7D, 0xF8, 0xF7, 0x9F, 0xF3, 0x3F, 0xC3, 0x1B, 0x8F, 0x00,
    // FreeSans32_v
    0xE3, 0xFB, 0x9C, 0x7E, 0xE7, 0x1F, 0xB9, 0xC7, 0xDC, 0x5C, 0x7B, 0x8B, 0x8F, 0x71, 0xB1, 0xDC, 0x77, 0x1B, 0x8E, 0xE3,
    0x63, 0xEC, 0x5C, 0x7D, 0xC3, 0x8F, 0xB8, 0x63, 0xFB, 0x38, 0xFE, 0xF8, 0xFF, 0x7C, 0x7F, 0xDE, 0x3F, 0xEE, 0x3C,
    // FreeSans32_w
    0xE3, 0xEE, 0x3E, 0xE7, 0x1E, 0xE3, 0xDC, 0x38, 0xEF, 0x8E, 0xE1, 0xC7, 0x7C, 0x77, 0x16, 0x3B, 0x31, 0xDC, 0x5C, 0x6C,
    0xC6, 0xE3, 0x71, 0x73, 0x8B, 0x8D, 0xC5, 0xCE, 0x2E, 0x3B, 0x16, 0x2C, 0x58, 0xF7, 0x0C, 0x58, 0x71, 0xEE, 0x71, 0x73,
    0x8F, 0xB3, 0x8B, 0x98, 0xFD, 0x98, 0xEC, 0xC7, 0xEF, 0x8E, 0xF8, 0xFD, 0xF1, 0xDF, 0x1F, 0xDE, 0x3B, 0xC7, 0xFB, 0x8F,
    0xB8, 0xE0,
    // FreeSans32_x
    0xE3, 0xF7, 0xF1, 0xEE, 0x1C, 0x77, 0x1B, 0x8D, 0x8F, 0x70, 0xE3, 0xDC, 0xE3, 0xF7, 0xC7, 0xFB, 0xC7, 0xFB, 0x8F, 0xF7,
    0xC7, 0xF7, 0xE3, 0xEE, 0x71, 0xEE, 0x2E, 0x3B, 0x8D, 0xC5, 0xC7, 0x70, 0xE3, 0xEE, 0x71, 0xF7, 0x80,
    // FreeSans32_y
    0xE3, 0xFB, 0x9C, 0x7E, 0xE7, 0x1F, 0x70, 0xE3, 0xEE, 0x2E, 0x3D, 0x8D, 0xC7, 0x71, 0xB8, 0xEE, 0x3B, 0x8B, 0x8F, 0x71,
    0x71, 0xEE, 0x2E, 0x3E, 0xE7, 0x1F, 0xB9, 0xC7, 0xEE, 0x63, 0xFD, 0xF1, 0xFE, 0xF8, 0xFF, 0x78, 0xFF, 0xE0, 0x71, 0xFF,
    0xC0, 0xE3, 0xFE, 0xE3, 0xFF, 0x81, 0xC7, 0xFF, 0x03, 0x8F, 0xDF, 0x8F, 0xEF, 0x8F, 0xF7, 0x8F, 0xF0,
    // FreeSans32_z
    0x7F, 0xFC, 0x01, 0xFF, 0xF0, 0x07, 0xFF, 0xC0, 0x3F, 0xDC, 0x7F, 0xBC, 0x7F, 0xB8, 0xFF, 0x71, 0xFE, 0xE3, 0xFD, 0xC7,
    0xFB, 0x8F, 0xF7, 0x8F, 0xF7, 0x1F, 0xEE, 0x3F, 0xDC, 0x7F, 0xB8, 0xFF, 0xBF, 0xFE, 0x80,
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
    {18, 27, 3, 0, 1, 2, 0},  // FreeSans32_0
    {18, 26, 3, 0, 3, 7, 54},  // FreeSans32_1
    {18, 26, 3, 0, 1, 2, 82},  // FreeSans32_2
    {18, 27, 3, 0, 1, 2, 132},  // FreeSans32_3
    {18, 26, 3, 0, 1, 1, 188},  // FreeSans32_4
    {18, 27, 3, 0, 1, 2, 243},  // FreeSans32_5
    {18, 27, 3, 0, 1, 2, 306},  // FreeSans32_6
    {18, 26, 3, 0, 1, 1, 362},  // FreeSans32_7
    {18, 27, 3, 0, 1, 2, 423},  // FreeSans32_8
    {18, 27, 3, 0, 1, 2, 478},  // FreeSans32_9
    {8, 26, 9, 0, 3, 2, 535},  // FreeSans32_colon
    {22, 26, 2, 1, 1, 1, 541},  // FreeSans32_A
    {22, 26, 2, 1, 3, 2, 614},  // FreeSans32_B
    {23, 27, 2, 0, 1, 2, 674},  // FreeSans32_C
    {23, 26, 2, 1, 3, 2, 752},  // FreeSans32_D
    {21, 26, 2, 1, 3, 2, 821},  // FreeSans32_E
    {20, 26, 2, 1, 3, 2, 877},  // FreeSans32_F
    {25, 27, 2, 0, 1, 2, 939},  // FreeSans32_G
    {24, 26, 2, 1, 3, 3, 1023},  // FreeSans32_H
    {9, 26, 2, 1, 3, 3, 1093},  // FreeSans32_I
    {17, 27, 2, 1, 1, 3, 1096},  // FreeSans32_J
    {22, 26, 2, 1, 3, 1, 1142},  // FreeSans32_K
    {19, 26, 2, 1, 3, 2, 1205},  // FreeSans32_L
    {28, 26, 2, 1, 3, 3, 1248},  // FreeSans32_M
    {24, 26, 2, 1, 3, 3, 1326},  // FreeSans32_N
    {26, 27, 2, 0, 1, 2, 1389},  // FreeSans32_O
    {21, 26, 2, 1, 3, 2, 1478},  // FreeSans32_P
    {26, 28, 2, 1, 1, 2, 1538},  // FreeSans32_Q
    {23, 26, 2, 1, 3, 2, 1625},  // FreeSans32_R
    {22, 27, 2, 0, 2, 2, 1687},  // FreeSans32_S
    {21, 26, 2, 1, 1, 2, 1757},  // FreeSans32_T
    {24, 27, 2, 1, 3, 4, 1820},  // FreeSans32_U
    {21, 26, 2, 1, 1, 1, 1878},  // FreeSans32_V
    {30, 26, 2, 1, 1, 1, 1948},  // FreeSans32_W
    {22, 26, 2, 1, 1, 2, 2046},  // FreeSans32_X
    {22, 26, 2, 1, 1, 1, 2114},  // FreeSans32_Y
    {20, 26, 2, 1, 1, 1, 2185},  // FreeSans32_Z
    {18, 26, 8, 1, 1, 1, 2249},  // FreeSans32_a
    {18, 27, 2, 1, 2, 1, 2293},  // FreeSans32_b
    {17, 26, 8, 1, 1, 2, 2351},  // FreeSans32_c
    {18, 27, 2, 1, 1, 2, 2386},  // FreeSans32_d
    {18, 26, 8, 1, 1, 2, 2444},  // FreeSans32_e
    {9, 26, 2, 1, 1, 1, 2479},  // FreeSans32_f
    {18, 33, 8, 1, 1, 2, 2506},  // FreeSans32_g
    {18, 26, 2, 1, 2, 3, 2561},  // FreeSans32_h
    {8, 26, 2, 1, 2, 3, 2606},  // FreeSans32_i
    {8, 33, 2, 1, 0, 3, 2611},  // FreeSans32_j
    {17, 26, 2, 1, 2, 1, 2637},  // FreeSans32_k
    {7, 26, 2, 1, 2, 2, 2686},  // FreeSans32_l
    {26, 26, 8, 1, 2, 2, 2689},  // FreeSans32_m
    {18, 26, 8, 1, 2, 3, 2745},  // FreeSans32_n
    {18, 26, 8, 1, 1, 2, 2778},  // FreeSans32_o
    {18, 33, 8, 1, 2, 1, 2816},  // FreeSans32_p
    {18, 33, 8, 1, 1, 2, 2874},  // FreeSans32_q
    {11, 26, 8, 1, 2, 1, 2932},  // FreeSans32_r
    {16, 26, 8, 1, 1, 1, 2954},  // FreeSans32_s
    {9, 27, 4, 1, 1, 1, 2992},  // FreeSans32_t
    {18, 27, 9, 0, 2, 3, 3017},  // FreeSans32_u
    {16, 26, 9, 0, 0, 1, 3052},  // FreeSans32_v
    {24, 26, 9, 0, 0, 1, 3091},  // FreeSans32_w
    {16, 26, 9, 0, 1, 1, 3153},  // FreeSans32_x
    {16, 33, 9, 0, 0, 1, 3190},  // FreeSans32_y
    {16, 26, 9, 0, 1, 1, 3247},  // FreeSans32_z
};

#if 0
static const utf8_t utf8_map[] = {???};

// BINARY SEARCH USING ITERATIVE CALL
int binary_search(const utf8_t arr[], int l, int r, utf8_t x)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;
        if (arr[m] == x)
            return m;
        else if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}
#endif

static bool freesans32_lookup(utf8_t c, font_symbol_t *sym)
{
    const font_table_t *t = 0;

    // --- EDIT BEGIN
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
#if 0
        // Search utf8_map to find the character ?
        int index = binary_search(utf8_map, 0, sizeof(utf8_map)/sizeof(utf8_map[0]) - 1, c);

        if(index == -1)
        {
            return false;
        }

        t = &freesans32_table[63+index];
#else
        return false;
#endif
    }
    // EDIT END ---

    sym->width = t->width;
    sym->height = t->height;
    sym->margin_top = t->margin_top;
    sym->margin_bottom = t->margin_bottom;
    sym->margin_left = t->margin_left;
    sym->margin_right = t->margin_right;
    sym->bmp_index = t->bmp_index;

    return true;
}

font_t freesans32 = 
{
    .default_width = FREESANS32_DEFAULT_WIDTH,
    .default_height = FREESANS32_DEFAULT_HEIGHT,
    .bmp_base = freesans32_bmp,
    .lookup = freesans32_lookup
};
