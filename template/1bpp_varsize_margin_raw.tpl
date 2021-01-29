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

#define ${font_uppercase}${size}_DEFAULT_WIDTH     ??? /* Specify default font width */
#define ${font_uppercase}${size}_DEFAULT_HEIGHT    ??? /* Specify default font heighjt */

static const uint8_t ${font_lowercase}${size}_bmp[] = {
====split====
    // ${imgname}
    ${bmpdata},
====split====
};

####split####

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

static const font_table_t ${font_lowercase}${size}_table[] = {
====split====
    {${width}, ${height}, ${margin_top}, ${margin_bottom}, ${margin_left}, ${margin_right}, ${bmpaddr}},  // ${imgname}
====split====
};
