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

#define ${font_uppercase}${size}_DEFAULT_WIDTH     ${space_width} /* Specify default font width */
#define ${font_uppercase}${size}_DEFAULT_HEIGHT    ${space_height} /* Specify default font height */

static const uint8_t ${font_lowercase}${size}_bmp[] = {
====split====
    // ${charname}
    ${bmpdata},
====split====
};

####split####

typedef struct
{
    uint8_t width;
    uint8_t height;
    uint16_t bmp_index;
}font_table_t;

static const font_table_t ${font_lowercase}${size}_table[] = {
====split====
    {${width}, ${height}, ${bmpidx}},  // ${charname}
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
    const font_table_t *t = 0;
    
    // --- EDIT BEGIN
    if(c >= '0' && c<= '9')
    {
        t = &${font_lowercase}${size}_table[(c-'0')];
    }
    else if(c == ':')
    {
        t = &${font_lowercase}${size}_table[10];
    }
    else if(c >= 'A' && c <= 'Z')
    {
        t = &${font_lowercase}${size}_table[((c-'A')+10+1)];
    }
    else if(c >= 'a' && c <= 'z')
    {
        t = &${font_lowercase}${size}_table[((c-'a')+10+1+26)];
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

    sym->width = t->width;
    sym->height = t->height;
    sym->bmp_index = t->bmp_index;
    return true;
}

font_t ${font_lowercase}${size} = 
{
    .default_width = ${font_uppercase}${size}_DEFAULT_WIDTH,
    .default_height = ${font_uppercase}${size}_DEFAULT_HEIGHT,
    .bmp_base = ${font_lowercase}${size}_bmp,
    .lookup = ${font_lowercase}${size}_lookup
};
