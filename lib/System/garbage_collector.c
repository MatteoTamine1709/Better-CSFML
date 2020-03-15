#include "../include/Graphics.h"
#include "../include/System.h"
#include "../include/Window.h"
#include "../include/Constant.h"
#include <stdio.h>
#include <stdlib.h>

void garbage_image(bsfImage *image)
{
    sfTexture_destroy(image->texture);
    sfSprite_destroy(image->sprite);
    free(image);
}

void garbage_sprite(sfSprite *sprite)
{
    sfSprite_destroy(sprite);
}

void garbage_texture(sfTexture *texture)
{
    sfTexture_destroy(texture);
}

void garbage_collector(void)
{
    for (int i = 0; i < GARBAGE.nb_image; i++)
        garbage_image(GARBAGE.images[i]);
    for (int i = 0; i < GARBAGE.nb_sprite; i++)
        garbage_sprite(GARBAGE.sprites[i]);
    for (int i = 0; i < GARBAGE.nb_texture; i++)
        garbage_texture(GARBAGE.textures[i]);
    garbage_constant();
}