/*
** EPITECH PROJECT, 2020
** test
** File description:
** main
*/

#include "../include/better_csfml.h"

int main(int ac, char **av)
{

    size(1000, 1000);
    return (0);
}

void draw(void)
{
    background(red(BACKGROUND_COLOR), 156, 0);
    set_red(&BACKGROUND_COLOR, red(BACKGROUND_COLOR) + 1);
    if (red(BACKGROUND_COLOR) >= 255)
        set_red(&BACKGROUND_COLOR, 0);

}