#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // questa struttura rappresenta un rettangolo come una coppia di punti
    // che individuano gli angoli diagonalmente opposti
    struct rect // una struttura di tipo struct rect
    {
        int width;
        int height;
        struct // struttura anonima
        {
            int x1;
            int y1;
        };
        struct// struttura anonima
        {
            int x2;
            int y2;
        };
    } a_rect =
    {
        0,0, // membri width e height
        {10,10}, // membri x1 e y1 della struttura anonima
        {50,50} // membri x2 e y2 della struttura anonima
    };
    
    return (EXIT_SUCCESS);
}

