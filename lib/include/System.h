#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#ifndef BETTER_CSFML_SYSTEM_H_
#define BETTER_CSFML_SYSTEM_H_

typedef struct garbage_collector_s
{
    bsfImage **images;
    sfSprite **sprites;
    sfTexture **textures;

    int nb_image;
    int nb_sprite;
    int nb_texture;
} bsf_gc;

void garbage_collector(void);
void garbage_add_image(bsfImage *image);
void garbage_constant(void);

#endif