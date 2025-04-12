#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // costante: -8wb
    // tipo: _BitInt(4)
    // bit: 3 per i valori, 1 per il segno
    _BitInt(4) b1 = -8wb;


    // costante: 0b11wb
    // tipo: _BitInt(3)
    // bit: 2 per i valori, 1 per il segno
    _BitInt(3) b2 = 0b11WB;

    // costante: 3uwb
    // tipo: unsigned _BitInt(2)
    // bit: 2 per i valori, nessuno per il segno
    unsigned _BitInt(2) b3 = 3uwb;

    return (EXIT_SUCCESS);
}