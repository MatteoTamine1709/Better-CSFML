#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#ifndef BETTER_CSFML_CONSTANT_H_
#define BETTER_CSFML_CONSTANT_H_

int WIDTH;
int HEIGHT;
int FRAMERATE;
sfEvent EVENT;
bsfColor BACKGROUND_COLOR;
sfColor sfBACKGROUND_COLOR;
sfRenderWindow *WINDOW;
bsfKeyClose KEY_CLOSE;


void init_all_const(void);

#endif