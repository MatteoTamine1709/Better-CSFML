#include "../include/Graphics.h"
#include "../include/System.h"
#include "../include/Window.h"
#include "../include/Constant.h"
#include <stdlib.h>

void bsf_key_close(int key)
{
    KEY_CLOSE.size++;
    KEY_CLOSE.list = realloc(KEY_CLOSE.list, KEY_CLOSE.size * sizeof(int));
    KEY_CLOSE.list[KEY_CLOSE.size - 1] = key;
}