#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // valore decimale:    100
    // valore binario:     0000 0000 0110 0100
    // valore esadecimale: 64
    unsigned short value = 0x0064;

    // valore decimale:    240
    // valore binario:     0000 0000 1111 0000
    // valore esadecimale: F0
    const unsigned short MASK = 0x00F0;

    // valore decimale:    148
    // valore binario:     0000 0000 1001 0100
    // valore esadecimale: 94
    value = value ^ MASK; // commuto i bit 4, 5, 6 e 7

    return (EXIT_SUCCESS);
}
