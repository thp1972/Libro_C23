#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // valore decimale:    100
    // valore binario:     0000 0000 0110 0100
    // valore esadecimale: 64
    unsigned short value = 0x0064;

    // valore decimale:    4
    // valore binario:     0000 0000 0000 0100
    // valore esadecimale: 4
    const unsigned short MASK = 0x0004;

    // operatore di uguaglianza non necessario; scritto solo per 
    // dare maggiore risalto al test
    bool is_bit_2_setted = (value & MASK) == MASK; // 1 - VERO
    bool is_bit_3_setted = (value & MASK << 1) == MASK << 1; // 0 - FALSO

    return (EXIT_SUCCESS);
}
