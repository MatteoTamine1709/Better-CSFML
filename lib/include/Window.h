#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#ifndef BETTER_CSFML_WINDOW_H_
#define BETTER_CSFML_WINDOW_H_

typedef struct bsfKeyClose_s
{
    int size;
    int *list;
} bsfKeyClose;

void bsf_key_close(int key);

#endif