/*
    <Generate from ${template_file_path}>
    generate font_table_t struct: [index]
    font: ${font}
    size: ${size}
    calc_margin: ${calc_margin}
    encoding method: ${encoding_method}

    width: ${width}
    height: ${height}
*/

typedef struct{
    uint16_t bmp_index;
    uint16_t bpp_index;
}font_table_t;

static const font_table_t ${font_lowercase}${size}_table[] = {
====split====
    {${bmpaddr}, ${bppaddr}},  // ${imgname}
====split====
};