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

const uint8_t ${font_lowercase}${size}_bmp[][$imglen] = {
====split====
    {   // ${imgname}
    ${bmpdata}
    },
====split====
};
//=================== End ======================