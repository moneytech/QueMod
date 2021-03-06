/* The fuzzing engine has the ability to iterate through
   large sets of data. However sometimes you want a list
   of known values that can trigger specific issues */

/* Integers */
int integers = {
0xFF000000, 0x00FF0000, 0x0000FF00, 0x000000FF, 0xFFFF0000, 0x0000FFFF, 0x00FFFF00, 0xFF0000FF, 0xFF00FF00, 0x00FF00FF, 0xFFFFFFFF,
0x7F000000, 0x007F0000, 0x00007F00, 0x0000007F, 0x7F7F0000, 0x00007F7F, 0x007F7F00, 0x7F00007F, 0x7F007F00, 0x007F007F, 0x7F7F7F7F,
0x80000000, 0x00800000, 0x00008000, 0x00000080, 0x80800000, 0x00008080, 0x00808000, 0x80000080, 0x80008000, 0x00800080, 0x80808080,
0x00000000 };

/* Shorts */
short shorts = {
0xFF00, 0x00FF, 0x0FF00, 0xF00F,
0x8000, 0x0080, 0x08000, 0x8008,
0x7F00, 0x007F, 0x07F00, 0x7F7F,
0x0000 };

/* Bytes */
char bytes = { 0xFF, 0x80, 0x7F, 0x00 };
