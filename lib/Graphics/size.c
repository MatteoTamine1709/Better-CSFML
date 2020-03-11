#include "../include/Graphics.h"
#include "../include/System.h"
#include "../include/Window.h"
#include "../include/Constant.h"

void event_manager(void)
{
    while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
       if (EVENT.type == sfEvtClosed)
            sfRenderWindow_close(WINDOW);
    }
}

void size(int width, int height)
{
    WIDTH = width;
    HEIGHT = height;
    init_all_const();
    sfVideoMode mode = (sfVideoMode) {WIDTH, HEIGHT, FRAMERATE};
    WINDOW = sfRenderWindow_create(mode, "Better CSFML", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(WINDOW, FRAMERATE);

    while (sfRenderWindow_isOpen(WINDOW)) {
        event_manager();
        draw();
        sfRenderWindow_display(WINDOW);
    }
}