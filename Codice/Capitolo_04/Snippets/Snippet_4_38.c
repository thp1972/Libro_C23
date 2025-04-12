#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // valore decimale:    11393254
    // valore binario:     0000 0000 1010 1101 1101 1000 1110 0110
    // valore esadecimale: ADD8E6
    unsigned int color = 0xADD8E6; // Light blue RGB

    // valore decimale:    255
    // valore binario:     1111 1111
    // valore esadecimale: FF
    const unsigned char MASK = 0xFF;

    // valore decimale:    230
    // valore binario:     1110 0110
    // valore esadecimale: E6
    unsigned char BLUE = (unsigned char) color & MASK; // E6

    // valore decimale:    216
    // valore binario:     1101 1000
    // valore esadecimale: D8
    unsigned char GREEN = (unsigned char) (color >> 8) & MASK; // D8

    // valore decimale:    173
    // valore binario:     1010 1101 
    // valore esadecimale: AD
    unsigned char RED = (unsigned char) (color >> 16) & MASK; // AD

    return (EXIT_SUCCESS);
}
