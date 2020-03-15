#include "../include/Graphics.h"
#include "../include/System.h"
#include "../include/Window.h"
#include "../include/Constant.h"
#include <stdio.h>
#include <stdlib.h>

void garbage_add_image(bsfImage *image)
{
    GARBAGE.nb_image++;
    GARBAGE.images = realloc(GARBAGE.images, GARBAGE.nb_image * sizeof(bsfImage *));
    GARBAGE.images[GARBAGE.nb_image - 1] = image;
}