/*
    <Generate from ${template_file_path}>
    generate font bitmap
    font: ${font}
    size: ${size}
    calc_margin: ${calc_margin}
    encoding method: ${encoding_method}

    width: ${width}
    height: ${height}
*/

#include "font.h"

#define ${font_uppercase}${size}_WIDTH     ${width}
#define ${font_uppercase}${size}_HEIGHT    ${height}

static const uint8_t ${font_lowercase}${size}_bmp[] = {
====split====
    // ${imgname}
    ${bmpdata},
====split====
};

####split####

static const uint8_t ${font_lowercase}${size}_bpp[] = {
====split====
    // ${imgname}
    ${bppdata},
====split====
};

####split####

typedef struct
{
    uint8_t width;
    uint8_t height;
    uint16_t bmp_index;
    uint16_t bpp_index;
}font_table_t;

static const font_table_t ${font_lowercase}${size}_table[] = {
====split====
    {${width}, ${height}, ${bmpaddr}, ${bppaddr}},  // ${imgname}
====split====
};
