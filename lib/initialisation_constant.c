#include "./include/Graphics.h"
#include "./include/System.h"
#include "./include/Window.h"
#include "./include/Constant.h"


void init_all_const(void)
{
    BACKGROUND_COLOR = (bsfColor) {0, 0, 0};
    sfBACKGROUND_COLOR = sfColor_fromRGB(BACKGROUND_COLOR.red, BACKGROUND_COLOR.green, BACKGROUND_COLOR.blue);
    FRAMERATE = 60;
}