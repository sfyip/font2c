/*
    <Generate from ${template_file_path}>
    generate font_table_t struct: [width, height, index]
    font: ${font}
    size: ${size}
    calc_margin: ${calc_margin}
    encoding method: ${encoding_method}

    width: ${width}
    height: ${height}
*/

typedef struct
{
    uint8_t width;
    uint8_t height;
    uint16_t index;
}font_table_t;

static const font_table_t ${font_lowercase}${size}_table[] = {
====split====
    {${width}, ${height}, ${imgaddr}},  // ${imgname}
====split====
};
