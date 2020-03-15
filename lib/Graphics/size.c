#include "../include/Graphics.h"
#include "../include/System.h"
#include "../include/Window.h"
#include "../include/Constant.h"

int close_key_pressed(void)
{
    for (int i = 0; i < KEY_CLOSE.size; i++)
        if (sfKeyboard_isKeyPressed(KEY_CLOSE.list[i]) == sfTrue)
            return (1);
    return (0);
}

void event_manager(void)
{
    while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
       if (EVENT.type == sfEvtClosed || close_key_pressed())
        quit();
    }
}

void bsf_size(int width, int height)
{
    int setup_var = 1;

    WIDTH = width;
    HEIGHT = height;
    init_all_const();
    sfVideoMode mode = (sfVideoMode) {WIDTH, HEIGHT, FRAMERATE};
    WINDOW = sfRenderWindow_create(mode, "Better CSFML", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(WINDOW, FRAMERATE);

    while (sfRenderWindow_isOpen(WINDOW)) {
        if (setup_var == 1) {
            setup();
            setup_var = 0;
        }
        event_manager();
        draw();
        sfRenderWindow_display(WINDOW);
    }
    garbage_collector();
}