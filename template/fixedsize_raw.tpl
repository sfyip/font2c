/*
    <Generate from ${template_file_path}>
    generate font bitmap
    bpp : ${bpp}
    font: ${font}
    size: ${size}
    encoding method: ${encoding_method}
    enable utf8: ${enable_utf8}

    width: ${width}
    height: ${height}
*/

#include "font.h"

#define ENABLE_UTF8 ${enable_utf8}

#define ${font_uppercase}${size}_WIDTH     ${width}
#define ${font_uppercase}${size}_HEIGHT    ${height}

const uint8_t ${font_lowercase}${size}_bmp[][$sizeof_char] = {
====split====
    {   // ${charname}
    ${bmpdata}
    },
====split====
};

#if ENABLE_UTF8
static const utf8_t utf8_map[] = {${utf8_map}};

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

static bool ${font_lowercase}${size}_lookup(utf8_t c, font_symbol_t *sym)
{
    // --- EDIT BEGIN
    if(c >= '0' && c<= '9')
    {
        sym->bmp_index = (c-'0') * sizeof(${font_lowercase}${size}_bmp[0]);
    }
    else if(c == ':')
    {
        sym->bmp_index = 10 * sizeof(${font_lowercase}${size}_bmp[0]);
    }
    else if(c >= 'A' && c <= 'Z')
    {
        sym->bmp_index = ((c-'A')+10+1) * sizeof(${font_lowercase}${size}_bmp[0]);
    }
    else if(c >= 'a' && c <= 'z')
    {
        sym->bmp_index = ((c-'a')+10+1+26) * sizeof(${font_lowercase}${size}_bmp[0]);
    }
    else
    {
#if ENABLE_UTF8
        // Search utf8_map to find the character ?
        int index = binary_search(utf8_map, 0, sizeof(utf8_map)/sizeof(utf8_map[0]) - 1, c);

        if(index == -1)
        {
            return false;
        }

        t = &${font_lowercase}${size}_table[63+index];
#else
        return false;
#endif
    }
    // EDIT END ---

    return true;
}

font_t ${font_lowercase}${size} = 
{
    .width = ${font_uppercase}${size}_WIDTH,
    .height = ${font_uppercase}${size}_HEIGHT,
    .bmp_base = (uint8_t*)${font_lowercase}${size}_bmp,
    .lookup = ${font_lowercase}${size}_lookup
};

