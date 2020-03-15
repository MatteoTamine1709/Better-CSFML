#include "../include/better_csfml.h"

bsfImage *image;
bsfImage *image2;

int main(int ac, char **av)
{
    bsf_size(1500, 1000);
    return (0);
}

void setup(void)
{
    bsf_background(255, 0, 0);
    image = bsf_createImage("towers.png", 200, 200);
    bsf_image_texture_rect(image, (sfIntRect) {0, 0, 120, 120});
    image2 = bsf_createImage("towers.png", 200, 200);
    bsf_image_texture_rect(image2, (sfIntRect) {130, 0, 120, 120});
    bsf_image_loop(image2);
    bsf_image_loop(image);
    garbage_add_image(image);
    garbage_add_image(image2);
    bsf_key_close(sfKeyEscape);
}

void draw(void)
{
    bsf_background(255, 0, 0);
    bsf_image(image);
    bsf_image_move(image, -5, 2);
    bsf_image(image2);
    bsf_image_move(image2, 5, -2);

}