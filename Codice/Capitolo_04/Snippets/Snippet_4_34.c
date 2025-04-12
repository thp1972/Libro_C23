#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // valore decimale:    100
    // valore binario:     0000 0000 0110 0100
    // valore esadecimale: 64
    unsigned short value = 0x0064;

    // valore decimale:    3840
    // valore binario:     0000 1111 0000 0000
    // valore esadecimale: F00
    const unsigned short MASK = 0x0F00;

    // valore decimale:    3940
    // valore binario:     0000 1111 0110 0100
    // valore esadecimale: F64
    value = value | MASK; // imposto i bit 8, 9, 10 e 11 a 1

    return (EXIT_SUCCESS);
}
