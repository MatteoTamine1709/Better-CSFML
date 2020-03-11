#include "../include/Graphics.h"
#include "../include/System.h"
#include "../include/Window.h"
#include "../include/Constant.h"
#include <stdio.h>

int red(bsfColor color)
{
    return (color.red);
}

int green(bsfColor color)
{
    return (color.green);
}

int blue(bsfColor color)
{
    return (color.blue);
}

int set_red(bsfColor *color, int n)
{
    if (n < 0 || n > 255) {
        printf("Warning the second parameter must be between 0 and 255\n");
        return (-1);
    }
    color->red = n;
    return (0);
}

int set_green(bsfColor *color, int n)
{
    if (n < 0 || n > 255) {
        printf("Warning the second parameter must be between 0 and 255\n");
        return (-1);
    }
    color->green = n;
    return (0);
}

int set_blue(bsfColor *color, int n)
{
    if (n < 0 || n > 255) {
        printf("Warning the second parameter must be between 0 and 255\n");
        return (-1);
    }
    color->blue = n;
    return (0);
}