#include "./include/Graphics.h"
#include "./include/System.h"
#include "./include/Window.h"
#include "./include/Constant.h"
#include <stdlib.h>


void init_all_const(void)
{
    BACKGROUND_COLOR = (bsfColor) {0, 0, 0};
    sfBACKGROUND_COLOR = sfColor_fromRGB(BACKGROUND_COLOR.red, BACKGROUND_COLOR.green, BACKGROUND_COLOR.blue);
    FRAMERATE = 60;

    KEY_CLOSE.list = NULL;
    KEY_CLOSE.size = 0;

    GARBAGE.images = NULL;
    GARBAGE.sprites = NULL;
    GARBAGE.textures = NULL;
    GARBAGE.nb_image = 0;
    GARBAGE.nb_sprite = 0;
    GARBAGE.nb_texture = 0;
}