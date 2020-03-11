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

void size(int width, int height);
void event_manager(void);

void draw(void);
int background(int r, int g, int b);
int red(bsfColor color);
int set_red(bsfColor *color, int n);
int green(bsfColor color);
int blue(bsfColor color);

#endif