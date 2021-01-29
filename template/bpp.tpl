/*
    <Generate from ${template_file_path}>
    generate font bpp
    font: ${font}
    size: ${size}
    calc_margin: ${calc_margin}
    encoding method: ${encoding_method}

    width: ${width}
    height: ${height}
*/

static const uint8_t ${font_lowercase}${size}_bpp[] = {
====split====
    // ${imgname}
    ${bppdata},
====split====
};
