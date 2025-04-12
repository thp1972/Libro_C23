#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct HSB_color // struttura di tipo struct HSB_color
    {
        int hue;
        int saturation;
        int brightness;
    };

    struct RGB_color // struttura di tipo struct RGB_color
    {
        int red;
        int green;
        int blue;
    };

    struct RGB_color fuchsia = {255, 0, 255};
    struct RGB_color silver = {192, 192, 192};
    struct HSB_color fuchsia_2 = {300, 100, 100};

    // copia permessa: fuchsia e silver sono dello stesso tipo ossia struct color
    silver = fuchsia;

    // error: incompatible types when assigning to type 'struct RGB_color' from type 'struct 
    // HSB_color'
    silver = fuchsia_2;

    // alcune strutture senza tag; anche se hanno gli stessi membri sono strutture
    // di "differente" tipo ossia di tipi senza nome
    struct
    {
        int j[2];
        int k;
    } a = { 
            {2, 2}, // primo membro: un array, necessaria un'altra lista di inizializzatori
            1000 // secondo membro
           }, 
      b = {{4, 4}, 2000}; // scrittura compatta ma equivalente

    struct
    {
        int j[2];
        int k;
    } c = {{8, 8}, 3000};

    // copia permessa: a e b sono definite contestualmente alla struct senza tag
    a = b;

    // error: incompatible types when assigning to type 'struct <anonymous>' 
    // from type 'struct <anonymous>'
    b = c;

    return (EXIT_SUCCESS);
}

