#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// oggetti di tipo _BitInt
		
    // dichiarazione di un intero con segno esattamente a 7 bit
    // range di valori ammissibili: da -64 a 63
    // un bit rappresenta il segno mentre gli altri nove i valori
    _BitInt(7) a = -64;

    // dichiarazione di un intero senza segno esattamente a 11 bit
    // range di valori ammissibili: da 0 a 2047
    // tutti i bit rappresentano i valori
    unsigned _BitInt(11) b = 2047;

    return (EXIT_SUCCESS);
}







