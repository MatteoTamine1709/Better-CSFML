#include "../include/Graphics.h"
#include "../include/System.h"
#include "../include/Window.h"
#include "../include/Constant.h"
#include <stdio.h>
#include <stdlib.h>

void garbage_constant(void)
{
    sfRenderWindow_destroy(WINDOW);
    free(KEY_CLOSE.list);
    if (GARBAGE.images != NULL)
        free(GARBAGE.images);
    if (GARBAGE.sprites != NULL)
        free(GARBAGE.sprites);
    if (GARBAGE.textures != NULL)
        free(GARBAGE.textures);
}