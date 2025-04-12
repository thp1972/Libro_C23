#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // valore decimale:    100
    // valore binario:     0000 0000 0110 0100
    // valore esadecimale: 64
    unsigned short value = 0x0064;

    // valore decimale:    96
    // valore binario:     0000 0000 0110 0000
    // valore esadecimale: 60
    const unsigned short MASK = 0x0060;

    // valore decimale:    4
    // valore binario:     0000 0000 0000 0100
    // valore esadecimale: 4
    value = value & ~MASK; // cancello i bit 5 e 6

    return (EXIT_SUCCESS);
}
