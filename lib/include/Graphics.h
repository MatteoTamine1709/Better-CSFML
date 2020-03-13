#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#ifndef BETTER_CSFML_GRAPHICS_H_
#define BETTER_CSFML_GRAPHICS_H_

typedef struct bsfColor_s
{
    int red;
    int green;
    int blue;
} bsfColor;

typedef struct bsfImage_s
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect texture_rect;
    int loopX;
    int loopY;
    int loop;
} bsfImage;

void bsf_size(int width, int height);
void event_manager(void);

void draw(void);
void setup(void);
void quit(void);

int bsf_background(int r, int g, int b);
int bsf_red(bsfColor color);
int bsf_set_red(bsfColor *color, int n);
int bsf_green(bsfColor color);
int bsf_blue(bsfColor color);

bsfImage *bsf_createImage(char *texture_src, int x, int y);
void bsf_image_pos(bsfImage *img, int x, int y);
void bsf_image(bsfImage *img);
void bsf_image_move(bsfImage *img, int xOffset, int yOffset);
void bsf_image_scale(bsfImage *img, float x, float y);
void bsf_image_texture_rect(bsfImage *img, sfIntRect rect);
void bsf_image_loopX(bsfImage *img);
void bsf_image_loopY(bsfImage *img);
void bsf_image_loop(bsfImage *img);
void bsf_image_stopLoop(bsfImage *img);

#endif