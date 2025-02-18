/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --font C:\Users\Danko\Desktop\StarWars\assets\batmfa__.ttf -o C:\Users\Danko\Desktop\StarWars\assets\ui_font_Font2.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT2
#define UI_FONT_FONT2 1
#endif

#if UI_FONT_FONT2

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x30,

    /* U+0022 "\"" */
    0xd0,

    /* U+0023 "#" */
    0x4, 0xc7, 0xe1, 0xb0, 0xd8, 0x7e, 0x32, 0x0,

    /* U+0024 "$" */
    0x8, 0x7f, 0xd8, 0xd8, 0x7e, 0x1b, 0xfe, 0x10,

    /* U+0025 "%" */
    0xe7, 0x5b, 0xe1, 0xf6, 0xb9, 0xc0,

    /* U+0026 "&" */
    0x7c, 0xe, 0x0, 0x78, 0x7, 0xd8, 0xc7, 0x7,
    0xfe,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x7b, 0x6d, 0xb3,

    /* U+0029 ")" */
    0xcd, 0xb6, 0xde,

    /* U+002A "*" */
    0x18,

    /* U+002B "+" */
    0x63, 0x3e, 0xc6, 0x0,

    /* U+002C "," */
    0xe0,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x7, 0xe, 0x1c, 0x38, 0x70, 0xe0,

    /* U+0030 "0" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0x7e,

    /* U+0031 "1" */
    0x7f, 0xf0,

    /* U+0032 "2" */
    0x7e, 0x6, 0x6, 0x7e, 0xc0, 0xfe,

    /* U+0033 "3" */
    0x7e, 0x6, 0x6, 0x7e, 0x3, 0x7e,

    /* U+0034 "4" */
    0x7, 0x1f, 0x73, 0x7f, 0x3, 0x3,

    /* U+0035 "5" */
    0xff, 0x83, 0x7, 0xf0, 0x7f, 0xc0,

    /* U+0036 "6" */
    0x7e, 0xc0, 0xc0, 0xfe, 0xc3, 0x7e,

    /* U+0037 "7" */
    0x7e, 0xc, 0x1c, 0x38, 0x30, 0x60,

    /* U+0038 "8" */
    0x7e, 0xc6, 0xc6, 0x7e, 0xc3, 0x7e,

    /* U+0039 "9" */
    0x7e, 0x63, 0x63, 0x7f, 0x3, 0x7e,

    /* U+003A ":" */
    0xc3,

    /* U+003B ";" */
    0xc3, 0x80,

    /* U+003C "<" */
    0x24, 0xc2,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x42, 0x24,

    /* U+003F "?" */
    0xfc, 0x8, 0x11, 0xe0, 0x6, 0x0,

    /* U+0040 "@" */
    0x7f, 0x7e, 0x9d, 0x3b, 0xcf, 0xc0,

    /* U+0041 "A" */
    0x7d, 0x8f, 0x1f, 0xfc, 0x78, 0xe0, 0x0,

    /* U+0042 "B" */
    0xfe, 0xc2, 0xc3, 0xfe, 0xc3, 0xfe,

    /* U+0043 "C" */
    0x7f, 0x83, 0x6, 0xc, 0xf, 0x80,

    /* U+0044 "D" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc6, 0xfc,

    /* U+0045 "E" */
    0xff, 0x83, 0x7, 0xec, 0x1f, 0x80,

    /* U+0046 "F" */
    0xff, 0x83, 0xf6, 0xc, 0x18, 0x0,

    /* U+0047 "G" */
    0x7d, 0x83, 0x6, 0xfc, 0x6f, 0x80,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xe0, 0x0,

    /* U+0049 "I" */
    0xff, 0xf8,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xd, 0xe0,

    /* U+004B "K" */
    0xcf, 0xbb, 0xe7, 0x6e, 0x78, 0xe0, 0x0,

    /* U+004C "L" */
    0x1, 0x83, 0x6, 0xc, 0x18, 0x3f, 0x0,

    /* U+004D "M" */
    0xe3, 0xf1, 0xfd, 0xfa, 0xbd, 0xde, 0xe, 0x0,

    /* U+004E "N" */
    0xc7, 0xcf, 0xde, 0xfc, 0xf8, 0xe0, 0x0,

    /* U+004F "O" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0x7e,

    /* U+0050 "P" */
    0xfe, 0xc3, 0xfe, 0xc0, 0xc0, 0x80,

    /* U+0051 "Q" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f,

    /* U+0052 "R" */
    0xfe, 0xc3, 0xc3, 0xfe, 0xc3, 0xc3, 0x80,

    /* U+0053 "S" */
    0x7f, 0xc0, 0xc0, 0x7e, 0x3, 0x7e,

    /* U+0054 "T" */
    0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0,

    /* U+0055 "U" */
    0x81, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+0056 "V" */
    0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18,

    /* U+0057 "W" */
    0xdb, 0x69, 0xd9, 0xbb, 0x1f, 0xc3, 0xf0, 0x36,
    0x0,

    /* U+0058 "X" */
    0xe7, 0x7e, 0x3c, 0x3c, 0x7e, 0xe7,

    /* U+0059 "Y" */
    0xe7, 0x7e, 0x3c, 0x18, 0x18, 0x18, 0x10,

    /* U+005A "Z" */
    0x7e, 0x18, 0x61, 0x87, 0x1f, 0x80,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb7,

    /* U+005C "\\" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7,

    /* U+005D "]" */
    0xed, 0xb6, 0xdf,

    /* U+005E "^" */
    0x23, 0xb7, 0x10,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x40,

    /* U+0061 "a" */
    0x7d, 0x8f, 0x1f, 0xfc, 0x78, 0xc0, 0x80,

    /* U+0062 "b" */
    0xfe, 0xc2, 0xc3, 0xfe, 0xc3, 0xfe,

    /* U+0063 "c" */
    0x7f, 0x83, 0x6, 0xc, 0xf, 0x80,

    /* U+0064 "d" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc6, 0xfc,

    /* U+0065 "e" */
    0xff, 0x83, 0x7, 0xec, 0x1f, 0x80,

    /* U+0066 "f" */
    0xff, 0x83, 0xf6, 0xc, 0x18, 0x0,

    /* U+0067 "g" */
    0x7d, 0x83, 0x6, 0xfc, 0x6f, 0x80,

    /* U+0068 "h" */
    0x3, 0x8f, 0x1e, 0x3f, 0xf8, 0xf1, 0x80,

    /* U+0069 "i" */
    0x7f, 0xfc,

    /* U+006A "j" */
    0x0, 0x30, 0xc3, 0xc, 0x37, 0x80,

    /* U+006B "k" */
    0xcf, 0xbb, 0xe7, 0x6e, 0x78, 0xc1, 0x0,

    /* U+006C "l" */
    0x1, 0x83, 0x6, 0xc, 0x18, 0x3f, 0x0,

    /* U+006D "m" */
    0xe3, 0xf1, 0xfd, 0xfa, 0xbd, 0xde, 0xc, 0x2,

    /* U+006E "n" */
    0x3, 0x8f, 0x9f, 0xbd, 0xf9, 0xf1, 0x80,

    /* U+006F "o" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0x7e,

    /* U+0070 "p" */
    0xfe, 0xc3, 0xfe, 0xc0, 0xc0, 0x40,

    /* U+0071 "q" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f,

    /* U+0072 "r" */
    0xfe, 0xc3, 0xc3, 0xfe, 0xc3, 0xc3, 0x1,

    /* U+0073 "s" */
    0x7f, 0xc0, 0xc0, 0x7e, 0x3, 0x7e,

    /* U+0074 "t" */
    0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0,

    /* U+0075 "u" */
    0x3, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+0076 "v" */
    0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18,

    /* U+0077 "w" */
    0xdb, 0x69, 0xd9, 0xbb, 0x1f, 0xc3, 0xf0, 0x36,
    0x0,

    /* U+0078 "x" */
    0xe7, 0x7e, 0x3c, 0x3c, 0x7e, 0xe7,

    /* U+0079 "y" */
    0xe7, 0x7e, 0x3c, 0x18, 0x18, 0x18, 0x8,

    /* U+007A "z" */
    0x7e, 0x18, 0x61, 0x87, 0x1f, 0x80,

    /* U+007B "{" */
    0x19, 0x8c, 0xc6, 0x18, 0xc3,

    /* U+007C "|" */
    0xff, 0xff,

    /* U+007D "}" */
    0xc3, 0x18, 0x63, 0x31, 0x98,

    /* U+007E "~" */
    0xf, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 83, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 48, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 48, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 4, .adv_w = 170, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 144, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 20, .adv_w = 134, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 199, .box_w = 12, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 28, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 36, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 39, .adv_w = 66, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 42, .adv_w = 51, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 43, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 47, .adv_w = 37, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 48, .adv_w = 105, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 49, .adv_w = 37, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 135, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 137, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 45, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 134, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 136, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 136, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 133, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 133, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 130, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 136, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 136, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 36, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 115, .adv_w = 80, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 117, .adv_w = 104, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 120, .adv_w = 76, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 122, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 137, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 131, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 141, .adv_w = 136, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 119, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 135, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 122, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 119, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 125, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 129, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 184, .adv_w = 45, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 186, .adv_w = 109, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 198, .adv_w = 113, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 162, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 213, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 220, .adv_w = 137, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 129, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 143, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 136, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 245, .adv_w = 143, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 135, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 258, .adv_w = 130, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 140, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 180, .box_w = 11, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 140, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 137, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 293, .adv_w = 124, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 49, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 302, .adv_w = 135, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 66, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 311, .adv_w = 90, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 314, .adv_w = 94, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 315, .adv_w = 62, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 316, .adv_w = 131, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 323, .adv_w = 136, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 119, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 135, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 122, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 119, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 125, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 129, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 45, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 381, .adv_w = 113, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 162, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 396, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 137, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 129, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 143, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 136, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 428, .adv_w = 143, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 135, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 441, .adv_w = 130, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 140, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 180, .box_w = 11, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 140, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 137, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 476, .adv_w = 124, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 70, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 487, .adv_w = 45, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 489, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 494, .adv_w = 107, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 3, 0, 0, 0,
    4, 5, 6, 0, 0, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17,
    18, 14, 19, 20, 21, 0, 0, 0,
    22, 23, 24, 25, 26, 27, 28, 29,
    30, 31, 31, 32, 33, 34, 31, 31,
    35, 36, 37, 38, 39, 40, 41, 42,
    43, 44, 45, 46, 0, 47, 48, 0,
    0, 0, 49, 50, 51, 52, 53, 54,
    55, 56, 56, 57, 58, 59, 56, 56,
    60, 61, 62, 63, 64, 65, 66, 67,
    68, 69, 70, 71, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 3, 0, 0, 0,
    4, 5, 6, 0, 0, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 20, 21, 22, 0, 0, 0,
    23, 24, 25, 26, 27, 28, 26, 26,
    27, 26, 26, 29, 26, 26, 26, 26,
    30, 26, 30, 26, 31, 32, 33, 34,
    35, 36, 37, 38, 0, 39, 40, 0,
    0, 0, 41, 42, 43, 44, 42, 42,
    43, 42, 42, 45, 42, 42, 42, 42,
    46, 42, 46, 42, 47, 48, 49, 50,
    51, 52, 53, 54, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 4, -8, 4, 3, -16, 0, -7,
    0, -11, 0, 0, 0, 0, -11, -5,
    0, 0, 0, -4, 0, 0, -4, 0,
    0, 3, 0, 3, -12, 0, -4, -4,
    0, 0, 0, 0, -4, 0, -6, -16,
    0, 3, 0, 3, -12, 0, -4, -4,
    0, 0, 0, 0, -4, 0, 0, 0,
    -57, 0, 0, 0, -39, -48, -39, -60,
    -13, -13, 0, 0, -58, -4, -15, 0,
    -15, -15, -39, -39, 0, -13, -13, 0,
    -13, 0, -55, -13, -15, 0, 0, 0,
    6, 0, 0, 0, 0, 0, -13, 0,
    -13, 0, -55, -13, -15, 0, 0, 0,
    6, 0, 0, 0, 0, 9, -42, 9,
    4, -16, -39, -26, -39, -57, 0, 4,
    0, 0, -19, -5, -3, 0, -4, -6,
    -7, -7, -4, 0, 0, 4, 0, 4,
    -43, 0, -7, -4, 4, 0, 0, 0,
    -4, 0, -5, -16, 0, 4, 0, 4,
    -43, 0, -7, -4, 4, 0, 0, 0,
    -4, 0, 0, 0, -42, 0, 0, 0,
    -28, -28, -28, -45, -30, -31, 0, 0,
    -43, -4, -30, 0, -30, -30, -28, -28,
    0, -30, -30, 0, -30, 0, -40, -30,
    -30, 0, 0, 0, 6, 0, 0, 0,
    0, 0, -30, 0, -30, 0, -40, -30,
    -30, 0, 0, 0, 6, 0, 0, 0,
    3, 21, -4, 21, 5, 17, 12, 0,
    4, -6, 0, 0, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 10, 0, 0,
    0, 5, 0, 5, -8, 0, 0, 0,
    4, 0, 0, 0, 0, 0, -4, 17,
    0, 5, 0, 5, -8, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 3, -14, 4, 4, 5, -5,
    4, 4, 0, 0, -6, 0, 3, 0,
    0, 0, 3, 3, 0, 4, 4, 5,
    4, 5, -6, 4, 0, 0, 4, 0,
    0, 0, 0, 0, -4, -14, 4, 5,
    4, 5, -6, 4, 0, 0, 4, 0,
    0, 0, 0, 0, 0, -37, 4, -27,
    4, -15, 4, -37, 4, 0, 0, 4,
    4, 0, -52, 0, 0, -7, 0, 0,
    4, 4, -40, 0, 4, 4, 0, 4,
    0, 0, 0, -43, 0, -42, -39, 0,
    -43, 0, -50, -15, 4, 4, 0, 4,
    0, 0, 0, -43, 0, -42, -39, 0,
    -43, 0, 0, -45, -21, -26, 4, -16,
    -36, -5, -36, -38, 4, 4, -8, -3,
    0, -6, 4, -41, -4, -9, 0, 0,
    -24, 4, 4, 4, 4, 4, -60, 4,
    -9, -44, 4, -18, -15, -36, -37, -33,
    -38, -16, 4, 4, 4, 4, -60, 4,
    -9, -44, 4, -18, -15, -36, -37, -33,
    0, -37, 4, -27, 4, -16, 4, -37,
    4, 0, 0, 4, 4, 0, -52, 0,
    0, -7, 0, 0, 4, 4, -40, 0,
    4, 4, 0, 4, 0, 0, 0, -43,
    0, -42, -39, 0, -43, 0, -50, -16,
    4, 4, 0, 4, 0, 0, 0, -43,
    0, -42, -39, 0, -43, 0, 3, 13,
    -54, 13, 5, -14, -61, -38, -61, -78,
    -11, -7, 0, 0, -35, -4, -12, 0,
    -13, -15, -22, -22, 0, -11, -11, 5,
    -12, 5, -57, -11, -16, 0, 4, 0,
    0, 0, 0, 0, -4, -15, -11, 5,
    -12, 5, -57, -11, -16, 0, 4, 0,
    0, 0, 0, 0, 0, -10, -4, -10,
    5, -16, 4, 5, 4, -20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, 4, -18, 4, 4, 5, 4, 5,
    -6, 4, 0, -18, 4, -9, -6, -15,
    -18, -13, -20, -16, 4, 5, 4, 5,
    -6, 4, 0, -18, 4, -9, -6, -15,
    -18, -13, 3, 4, 0, 4, 5, -14,
    4, 4, 5, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 3,
    0, 4, 4, 5, 4, 5, -6, 4,
    0, 0, 4, 0, 0, 0, 0, 0,
    -4, -15, 4, 5, 4, 5, -6, 4,
    0, 0, 4, 0, 0, 0, 0, 0,
    0, -10, -4, -10, 4, -16, 7, -14,
    7, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -19, 0,
    4, 4, 0, 4, -21, 0, 0, -19,
    4, -12, -9, 0, -19, 0, -21, -16,
    4, 4, 0, 4, -21, 0, 0, -19,
    4, -12, -9, 0, -19, 0, 0, -12,
    -9, -12, 4, -17, 0, 0, 0, -21,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -19, 3, 4, 4,
    3, 4, -11, 3, 0, -19, 4, -12,
    -9, -16, -18, -16, -20, -17, 4, 4,
    3, 4, -11, 3, 0, -19, 4, -12,
    -9, -16, -18, -16, 4, 5, 0, 5,
    6, -13, 6, 5, 6, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, 4, 0, 5, 5, 6, 5, 6,
    -5, 5, 0, 0, 5, 0, 4, 0,
    0, 0, -3, -13, 5, 6, 5, 6,
    -5, 5, 0, 0, 5, 0, 4, 0,
    0, 0, 3, 8, -9, 8, 5, -14,
    0, 4, 0, -21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 4, 5, 4, 5, -10, 4,
    -16, 0, 4, 0, 0, 0, 0, 0,
    -4, -15, 4, 5, 4, 5, -10, 4,
    -16, 0, 4, 0, 0, 0, 0, 0,
    3, 8, -9, 8, 5, -14, 0, 4,
    0, -21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    4, 5, 4, 5, -10, 4, -16, 0,
    4, 0, 0, 0, 0, 0, -4, -15,
    4, 5, 4, 5, -10, 4, -16, 0,
    4, 0, 0, 0, 0, 0, 3, 11,
    -52, 11, 5, -14, -50, -32, -50, -66,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -18, -18, 0, -9, -9, 5,
    -9, 5, -54, -9, -16, 0, 4, 0,
    0, 0, 0, 0, -4, -15, -9, 5,
    -9, 5, -54, -9, -16, 0, 4, 0,
    0, 0, 0, 0, 0, -12, -9, -12,
    5, -16, 0, 5, 0, -21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, 4, -18, 4, 4, 5, 4, 5,
    -10, 4, 0, -19, 4, -12, -9, -15,
    -18, -16, -20, -16, 4, 5, 4, 5,
    -10, 4, 0, -19, 4, -12, -9, -15,
    -18, -16, 0, -36, 0, -25, 5, -16,
    6, 0, 6, 0, 4, 5, 0, 0,
    -6, 0, 4, -10, 3, 0, 3, 3,
    -42, 4, 5, 5, 4, 5, -4, 4,
    0, -43, 4, -14, -11, 0, -42, 0,
    -45, -15, 5, 5, 4, 5, -4, 4,
    0, -43, 4, -14, -11, 0, -42, 0,
    0, -36, 0, -26, 4, -15, 5, 0,
    5, 0, 3, 4, 0, 0, -7, 0,
    0, -11, 0, 0, 0, 0, -43, 4,
    4, 4, 4, 4, -5, 3, 0, -43,
    3, -14, -11, 0, -43, 0, -46, -15,
    4, 4, 4, 4, -5, 3, 0, -43,
    3, -14, -11, 0, -43, 0, 0, -9,
    -33, -9, 4, -17, -35, -11, -35, -41,
    0, 3, -15, -6, -11, -5, 0, -18,
    0, 0, 0, 0, -19, 0, 3, 4,
    0, 4, -42, 0, 0, -20, 4, -13,
    -10, -16, -19, -17, -21, -17, 3, 4,
    0, 4, -42, 0, 0, -20, 4, -13,
    -10, -16, -19, -17, 0, -11, -4, -11,
    4, -16, 0, 0, 0, -5, 0, 4,
    0, -3, -8, 0, 0, -10, 0, 0,
    0, 0, -20, 0, 4, 4, 0, 4,
    -21, 0, 0, -20, 0, -11, -8, 0,
    -19, 0, -21, -16, 4, 4, 0, 4,
    -21, 0, 0, -20, 0, -11, -8, 0,
    -19, 0, 0, -12, 0, -12, 4, -17,
    4, 3, 4, -6, 0, 3, 0, 0,
    -7, 0, 0, -10, 0, 0, 0, 0,
    -19, 0, 3, 4, 0, 4, -7, 0,
    0, -19, 3, -10, -7, 0, -19, 0,
    -20, -16, 3, 4, 0, 4, -7, 0,
    0, -19, 3, -10, -7, 0, -19, 0,
    0, -12, -9, -12, 4, -17, 0, 0,
    0, -21, 3, 4, 0, -6, -11, -5,
    0, -18, 0, 0, 0, 0, -19, 3,
    4, 4, 3, 4, -10, 3, 0, -19,
    4, -12, -9, -16, -19, -16, -20, -17,
    4, 4, 3, 4, -10, 3, 0, -19,
    4, -12, -9, -16, -19, -16, 3, 13,
    -7, 13, 5, -14, 9, -71, 9, -22,
    0, 0, 0, 0, -52, -4, -4, 0,
    -4, -15, 0, 0, 0, 0, 0, 5,
    0, 5, -8, 0, -16, 0, 4, 0,
    0, 0, 0, 0, -4, -15, 0, 5,
    0, 5, -8, 0, -16, 0, 4, 0,
    0, 0, 0, 0, 0, -18, -16, -18,
    5, -16, -8, 0, -8, -25, 4, 4,
    -6, -5, -10, -4, 3, -22, -4, -7,
    4, 4, -23, 4, 4, 5, 4, 5,
    -17, 4, -7, -24, 4, -20, -17, -20,
    -23, -21, -25, -16, 4, 5, 4, 5,
    -17, 4, -7, -24, 4, -20, -17, -20,
    -23, -21, 3, 11, -7, 11, 5, -14,
    6, -19, 6, -22, 0, 0, 0, 0,
    -17, -4, -4, 0, -4, -15, 0, 0,
    0, 0, 0, 5, 0, 5, -8, 0,
    -15, 0, 4, 0, 0, 0, 0, 0,
    -4, -15, 0, 5, 0, 5, -8, 0,
    -15, 0, 4, 0, 0, 0, 0, 0,
    3, 14, -40, 14, 5, -14, -70, -15,
    -70, -59, -7, -7, 0, 0, -17, -4,
    -8, 0, -12, -15, -10, -10, 0, -7,
    -7, 5, -7, 5, -57, -7, -15, 0,
    4, 0, 0, 0, 0, 0, -4, -15,
    -7, 5, -7, 5, -57, -7, -15, 0,
    4, 0, 0, 0, 0, 0, 3, 7,
    -7, 7, 5, -14, 0, 4, 0, -22,
    0, 0, 0, 0, -9, -4, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 5,
    0, 5, -8, 0, -6, 0, 4, 0,
    0, 0, 0, 0, -4, -15, 0, 5,
    0, 5, -8, 0, -6, 0, 4, 0,
    0, 0, 0, 0, 3, 4, 0, 4,
    5, -14, 4, 4, 5, -5, 4, 4,
    0, 0, -6, 0, 3, 0, 0, 0,
    3, 3, 0, 4, 4, 5, 4, 5,
    -6, 4, 0, 0, 4, 0, 0, 0,
    0, 0, -4, -15, 4, 5, 4, 5,
    -6, 4, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 4, -5, 4, 4, -15,
    0, 3, 0, -21, 0, 3, 0, 0,
    -7, -5, 0, 0, 0, 0, 0, 0,
    -4, 0, 3, 4, 0, 4, -7, 0,
    0, -4, 3, 0, 0, 0, -3, 0,
    -5, -15, 3, 4, 0, 4, -7, 0,
    0, -4, 3, 0, 0, 0, -3, 0,
    3, 6, -4, 6, 5, -14, 4, -3,
    4, -7, 0, 0, 0, 0, -27, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 5, -8, 0, 0, 0,
    4, 0, 0, 0, 0, 0, -4, -15,
    0, 5, 0, 5, -8, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, -64,
    -4, -64, 5, -16, 16, -64, 16, -20,
    4, 4, 0, 0, -71, -14, 0, -21,
    0, -14, 5, 5, -31, 4, 4, 5,
    4, 5, -6, 4, -15, -42, 4, -32,
    -29, -14, -42, -13, -63, -16, 4, 5,
    4, 5, -6, 4, -15, -42, 4, -32,
    -29, -14, -42, -13, 0, -10, -4, -10,
    5, -16, 4, 5, 4, -20, 4, 4,
    0, 0, -6, -4, 3, -17, 0, 0,
    4, 4, -18, 4, 4, 5, 4, 5,
    -6, 4, 0, -18, 4, -9, -6, -15,
    -18, -13, -20, -16, 4, 5, 4, 5,
    -6, 4, 0, -18, 4, -9, -6, -15,
    -18, -13, 0, -7, -32, -7, 4, -17,
    -80, -8, -80, -49, 0, 3, -15, -6,
    -11, -5, 0, -18, 0, 0, 0, 0,
    -19, 0, 3, 4, 0, 4, -58, 0,
    0, -20, 4, -13, -9, -16, -19, -17,
    -21, -17, 3, 4, 0, 4, -58, 0,
    0, -20, 4, -13, -9, -16, -19, -17,
    0, -17, 0, -17, 4, -16, 4, 0,
    5, -5, 0, 4, 0, -8, -13, 0,
    0, -9, -4, 0, 4, 4, -24, 0,
    4, 4, 0, 4, -12, 0, 0, -25,
    0, -15, -12, 0, -24, 0, -26, -16,
    4, 4, 0, 4, -12, 0, 0, -25,
    0, -15, -12, 0, -24, 0, 0, -14,
    -3, -14, 3, -17, 4, 0, 5, -6,
    0, 0, 0, 0, -12, 0, 0, -10,
    0, 0, 0, 0, -20, 0, 0, 3,
    0, 3, -7, 0, 0, -20, 0, -13,
    -10, 0, -19, 0, -21, -17, 0, 3,
    0, 3, -7, 0, 0, -20, 0, -13,
    -10, 0, -19, 0, 3, 8, -9, 8,
    5, -14, 0, 4, 0, -21, 4, 4,
    0, 0, -22, -4, 3, 0, 0, -15,
    0, 0, 0, 4, 4, 5, 4, 5,
    -10, 4, -16, 0, 4, 0, 0, 0,
    0, 0, -4, -15, 4, 5, 4, 5,
    -10, 4, -16, 0, 4, 0, 0, 0,
    0, 0, 3, 12, -41, 12, 5, -14,
    -37, -38, -36, -44, -11, -7, 0, 0,
    -46, -4, -12, 0, -13, -15, -38, -38,
    0, -12, -11, 5, -12, 5, -45, -11,
    -16, 0, 4, 0, 0, 0, 0, 0,
    -4, -15, -11, 5, -12, 5, -45, -11,
    -16, 0, 4, 0, 0, 0, 0, 0,
    3, 5, -4, 5, 5, -15, 0, 4,
    0, -20, 4, 4, 0, 0, -7, -4,
    3, 0, 0, 0, 0, 0, 0, 4,
    4, 5, 4, 5, -6, 4, 0, 0,
    4, 0, 0, 0, 0, 0, -4, -15,
    4, 5, 4, 5, -6, 4, 0, 0,
    4, 0, 0, 0, 0, 0, 3, 9,
    -35, 9, 5, -14, -31, -23, -31, -45,
    -5, 0, 0, 0, -22, -4, -8, 0,
    -9, -11, -10, -10, 0, -5, -4, 5,
    -5, 5, -37, -5, -12, 0, 4, 0,
    0, 0, 0, 0, -4, -15, -4, 5,
    -5, 5, -37, -5, -12, 0, 4, 0,
    0, 0, 0, 0, 9, 15, -30, 15,
    10, -9, -25, -17, -25, -39, 0, 0,
    7, 4, -16, 0, 0, 4, 0, -6,
    -5, -5, 0, 0, 0, 10, 0, 10,
    -32, 0, -6, 0, 10, 5, 9, 6,
    3, 5, 0, -9, 0, 10, 0, 10,
    -32, 0, -6, 0, 10, 5, 9, 6,
    3, 5, 3, 8, 0, 8, 5, -14,
    7, -25, 7, -5, -11, 4, 0, 0,
    -35, 0, -12, 0, -13, 0, 0, 0,
    0, -11, 4, 5, -11, 5, -20, -11,
    0, 0, 4, 0, 0, 0, 0, 0,
    -4, -15, 4, 5, -11, 5, -20, -11,
    0, 0, 4, 0, 0, 0, 0, 0,
    3, 11, -42, 11, 5, -14, -38, -39,
    -38, -44, -11, -7, 0, 0, -35, -4,
    -12, 0, -13, -15, -21, -21, 0, -12,
    -11, 5, -12, 5, -46, -11, -16, 0,
    4, 0, 0, 0, 0, 0, -4, -15,
    -11, 5, -12, 5, -46, -11, -16, 0,
    4, 0, 0, 0, 0, 0, 3, 9,
    -4, 9, 5, -14, 8, -36, 8, -20,
    4, 4, 0, 0, -31, -4, 0, 0,
    0, -14, 0, 0, 0, 4, 4, 5,
    4, 5, -6, 4, -15, 0, 4, 0,
    0, 0, 0, 0, -4, -15, 4, 5,
    4, 5, -6, 4, -15, 0, 4, 0,
    0, 0, 0, 0, 0, -75, 0, -75,
    5, -16, 12, -21, 12, -5, -12, 4,
    0, -17, -47, 0, -13, -9, -13, 0,
    6, 6, -31, -12, 4, 5, -12, 4,
    -21, -12, 0, -42, -11, -40, -37, 0,
    -42, 0, -78, -16, 4, 5, -12, 4,
    -21, -12, 0, -42, -11, -40, -37, 0,
    -42, 0, 3, 4, 0, 4, 4, 0,
    4, 4, 5, -5, 4, 4, 0, 0,
    -6, 0, 3, 0, 0, 0, 3, 4,
    0, 4, 4, 5, 4, 5, -6, 4,
    0, 0, 4, 0, 0, 0, 0, 0,
    -4, 0, 4, 5, 4, 5, -6, 4,
    0, 0, 4, 0, 0, 0, 0, 0,
    0, -12, 0, -12, 4, -17, 4, 3,
    4, -6, 0, 3, 0, 0, -7, 0,
    0, -10, 0, 0, 0, 0, -19, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -20, -16,
    3, 4, 0, 4, -7, 0, 0, -19,
    3, -10, -7, 0, -19, 0, 0, -12,
    -9, -12, 4, -17, 0, 0, 0, -21,
    3, 4, 0, -6, -11, -5, 0, -18,
    0, 0, 0, 0, -19, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -20, -17, 4, 4,
    3, 4, -10, 3, 0, -19, 4, -12,
    -9, -16, -19, -16, 3, 13, -7, 13,
    5, -14, 9, -71, 9, -22, 0, 0,
    0, 0, -52, -4, -4, 0, -4, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, -15, 0, 5, 0, 5,
    -8, 0, -16, 0, 4, 0, 0, 0,
    0, 0, 0, -18, -16, -18, 5, -16,
    -8, 0, -8, -25, 4, 4, -6, -5,
    -10, -4, 3, -22, -4, -7, 4, 4,
    -23, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -25, -16, 4, 5, 4, 5, -17, 4,
    -7, -24, 4, -20, -17, -20, -23, -21,
    3, 11, -7, 11, 5, -14, 6, -19,
    6, -22, 0, 0, 0, 0, -17, -4,
    -4, 0, -4, -15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -15,
    0, 5, 0, 5, -8, 0, -15, 0,
    4, 0, 0, 0, 0, 0, 3, 14,
    -40, 14, 5, -14, -70, -15, -70, -59,
    -7, -7, 0, 0, -17, -4, -8, 0,
    -12, -15, -10, -10, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -15, -7, 5,
    -7, 5, -57, -7, -15, 0, 4, 0,
    0, 0, 0, 0, 3, 7, -7, 7,
    5, -14, 0, 4, 0, -22, 0, 0,
    0, 0, -9, -4, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, -15, 0, 5, 0, 5,
    -8, 0, -6, 0, 4, 0, 0, 0,
    0, 0, 3, 4, 0, 4, 5, -14,
    4, 4, 5, -5, 4, 4, 0, 0,
    -6, 0, 3, 0, 0, 0, 3, 3,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -15, 4, 5, 4, 5, -6, 4,
    0, 0, 4, 0, 0, 0, 0, 0,
    0, 4, -5, 4, 4, -15, 0, 3,
    0, -21, 0, 3, 0, 0, -7, -5,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, -15,
    3, 4, 0, 4, -7, 0, 0, -4,
    3, 0, 0, 0, -3, 0, 0, 4,
    -6, 4, 0, -16, 0, -5, 0, -9,
    0, 0, 0, -3, -29, -4, 0, -3,
    0, -4, 0, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, -16, 0, 0,
    0, 0, -10, 0, -4, -5, 0, 0,
    0, 0, -4, 0, 0, -64, -4, -64,
    5, -16, 16, -64, 16, -20, 4, 4,
    0, 0, -71, -14, 0, -21, 0, -14,
    5, 5, -31, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -63, -16, 4, 5, 4, 5,
    -6, 4, -15, -42, 4, -32, -29, -14,
    -42, -13, 0, -10, -4, -10, 5, -16,
    4, 5, 4, -20, 4, 4, 0, 0,
    -6, -4, 3, -17, 0, 0, 4, 4,
    -18, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -20, -16, 4, 5, 4, 5, -6, 4,
    0, -18, 4, -9, -6, -15, -18, -13,
    0, -7, -32, -7, 4, -17, -80, -8,
    -80, -49, 0, 3, -15, -6, -11, -5,
    0, -18, 0, 0, 0, 0, -19, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -21, -17,
    3, 4, 0, 4, -58, 0, 0, -20,
    4, -13, -9, -16, -19, -17, 0, -17,
    0, -17, 4, -16, 4, 0, 5, -5,
    0, 4, 0, -8, -13, 0, 0, -9,
    -4, 0, 4, 4, -24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -26, -16, 4, 4,
    0, 4, -12, 0, 0, -25, 0, -15,
    -12, 0, -24, 0, 0, -14, -3, -14,
    3, -17, 4, 0, 5, -6, 0, 0,
    0, 0, -12, 0, 0, -10, 0, 0,
    0, 0, -20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -21, -17, 0, 3, 0, 3,
    -7, 0, 0, -20, 0, -13, -10, 0,
    -19, 0, 3, 8, -9, 8, 5, -14,
    0, 4, 0, -21, 4, 4, 0, 0,
    -22, -4, 3, 0, 0, -15, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -15, 4, 5, 4, 5, -10, 4,
    -16, 0, 4, 0, 0, 0, 0, 0,
    3, 12, -41, 12, 5, -14, -37, -38,
    -36, -44, -11, -7, 0, 0, -46, -4,
    -12, 0, -13, -15, -38, -38, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -15,
    -11, 5, -12, 5, -45, -11, -16, 0,
    4, 0, 0, 0, 0, 0, 3, 5,
    -4, 5, 5, -15, 0, 4, 0, -20,
    4, 4, 0, 0, -7, -4, 3, 0,
    0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -15, 4, 5,
    4, 5, -6, 4, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 4, -40, 4,
    0, -19, -36, -27, -36, -50, -10, -7,
    -3, -6, -26, -9, -13, -6, -13, -16,
    -15, -15, -7, -10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, -19, -9, 0, -10, 0,
    -42, -10, -16, -8, 0, -5, 0, -4,
    -7, -5, 9, 15, -30, 15, 10, -9,
    -25, -17, -25, -39, 0, 0, 7, 4,
    -16, 0, 0, 4, 0, -6, -5, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, 10, 0, 10, -32, 0,
    -6, 0, 10, 5, 9, 6, 3, 5,
    3, 8, 0, 8, 5, -14, 7, -25,
    7, -5, -11, 4, 0, 0, -35, 0,
    -12, 0, -13, 0, 0, 0, 0, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -15,
    4, 5, -11, 5, -20, -11, 0, 0,
    4, 0, 0, 0, 0, 0, 3, 11,
    -42, 11, 5, -14, -38, -39, -38, -44,
    -11, -7, 0, 0, -35, -4, -12, 0,
    -13, -15, -21, -21, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -15, -11, 5,
    -12, 5, -46, -11, -16, 0, 4, 0,
    0, 0, 0, 0, 3, 9, -4, 9,
    5, -14, 8, -36, 8, -20, 4, 4,
    0, 0, -31, -4, 0, 0, 0, -14,
    0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, -15, 4, 5, 4, 5,
    -6, 4, -15, 0, 4, 0, 0, 0,
    0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 71,
    .right_class_cnt     = 54,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Font2 = {
#else
lv_font_t ui_font_Font2 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 9,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT2*/

