/*
** EPITECH PROJECT, 2020
** test
** File description:
** main
*/

#include "../include/better_csfml.h"

bsfImage *image;

int main(int ac, char **av)
{
    bsf_size(1000, 500);
    return (0);
}

void setup(void)
{
    bsf_background(255, 0, 0);
    image = bsf_createImage("towers.png", 200, 200);
    bsf_image_texture_rect(image, (sfIntRect) {0, 0, 120, 120});
    bsf_image_loop(image);
    bsf_key_close(sfKeyEscape);
}

void draw(void)
{
    bsf_background(255, 0, 0);
    bsf_image(image);
    bsf_image_move(image, -5, 2);

}