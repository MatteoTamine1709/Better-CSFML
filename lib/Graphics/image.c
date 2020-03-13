#include "../include/Graphics.h"
#include "../include/System.h"
#include "../include/Window.h"
#include "../include/Constant.h"
#include <stdlib.h>

bsfImage *bsf_createImage(char *texture_src, int x, int y)
{
    bsfImage *image = malloc(sizeof(bsfImage));

    image->sprite = sfSprite_create();
    image->texture = sfTexture_createFromFile(texture_src, NULL);
    sfSprite_setTexture(image->sprite, image->texture, sfFalse);
    image->pos = (sfVector2f) {x, y};
    image->scale = (sfVector2f) {-1, -1};
    image->texture_rect = (sfIntRect) {-1, -1, -1, -1};
    image->loop = 0;
    image->loopX = 0;
    image->loopY = 0;
    return (image);
}

void bsf_image_pos(bsfImage *img, int x, int y)
{
    sfVector2f pos = (sfVector2f) {x, y};

    img->pos = pos;
    sfSprite_setPosition(img->sprite, pos);
    sfRenderWindow_drawSprite(WINDOW, img->sprite, NULL);
}

void bsf_image(bsfImage *img)
{
    sfSprite_setPosition(img->sprite, img->pos);
    sfRenderWindow_drawSprite(WINDOW, img->sprite, NULL);
}

void check_image_loop(bsfImage *img)
{
    if (img->pos.x > WIDTH && (img->loop || img->loopX))
        img->pos.x = 0;
    if (img->pos.y > HEIGHT && (img->loop || img->loopY))
        img->pos.y = 0;
    if (img->pos.x < 0 && (img->loop || img->loopX))
        img->pos.x = WIDTH;
    if (img->pos.y < 0 && (img->loop || img->loopY))
        img->pos.y = HEIGHT;
}

void bsf_image_move(bsfImage *img, int xOffset, int yOffset)
{
    img->pos.x += xOffset;
    img->pos.y += yOffset;
    check_image_loop(img);
    sfSprite_setPosition(img->sprite, img->pos);
}

void bsf_image_scale(bsfImage *img, float x, float y)
{
    img->scale.x = x;
    img->scale.y = y;
    sfSprite_setScale(img->sprite, img->scale);
}

void bsf_image_texture_rect(bsfImage *img, sfIntRect rect)
{
    img->texture_rect.top = rect.top;
    img->texture_rect.left = rect.left;
    img->texture_rect.width = rect.width;
    img->texture_rect.height = rect.height;
    sfSprite_setTextureRect(img->sprite, img->texture_rect);
}

void bsf_image_loopX(bsfImage *img)
{
    img->loopX = 1;
}

void bsf_image_loopY(bsfImage *img)
{
    img->loopY = 1;
}

void bsf_image_loop(bsfImage *img)
{
    img->loop = 1;
}

void bsf_image_stopLoop(bsfImage *img)
{
    img->loop = 0;
    img->loopX = 0;
    img->loopY = 0;
}