#include "lavi_platform.h"



void lavi_main(int argc, char **argv)
{
    lavi_api api;
    lavi_init(&api);

    while (!api.quit) {
        lavi_update();
   
        if (api.keys[LAVI_VK_ALT].is_pressed) {
            printf("PRESSED\n");
        }
        if (api.keys[LAVI_VK_ALT].is_released) {
            printf("RELEASED\n");
        }

     }

}
