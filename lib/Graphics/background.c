#include "../include/Graphics.h"
#include "../include/System.h"
#include "../include/Window.h"
#include "../include/Constant.h"
#include <stdio.h>

int bsf_background(int r, int g, int b)
{
    if (r > 255 || r < 0 || g > 255 || g < 0
        || b > 255 || b < 0) {
        printf("Warning values for background color must be between 0 and 255\n");
        return (-1);
    }
    BACKGROUND_COLOR.red = r;
    BACKGROUND_COLOR.green = g;
    BACKGROUND_COLOR.blue = b;
    sfBACKGROUND_COLOR = sfColor_fromRGB(BACKGROUND_COLOR.red, BACKGROUND_COLOR.green, BACKGROUND_COLOR.blue);
    sfRenderWindow_clear(WINDOW, sfBACKGROUND_COLOR);
    return (0);
}