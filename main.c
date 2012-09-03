#include "oil.h"
#include "oil-private.h"
#include <stdio.h>

int main(int argc, char **argv) {
    OILImage *im = oil_image_load("input.png");
    OILFormatOptions opt = {1, 256};

    if (!im) {
        printf("failed to load\n");
        return 1;
    }
    
    oil_image_save(im, "palette.png", &opt);
    oil_image_free(im);
    
    printf("success!\n");
    return 0;
}
