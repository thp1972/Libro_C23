/* SharingMacroTypedefEtc.c :: Utilizzo di una funzione definita altrove :: */
#include <stdio.h>
#include <stdlib.h>

// inclusione dell'header A_3.h
#include "A_3.h"

int main(void)
{
    // uso un alias di tipo e una macro semplice definiti in A_3.h
    BigInt numbers[SIZE];

    // uso la struttura definita in A_3.h
    struct point p = {100, 100};

    // uso l'enumerazione definita in A_3.h
    enum colors red = RED;

    // uso setPixelAt dichiarata in A_3.h e definita in A_3.c
    setPixelAt(p, red);

    return (EXIT_SUCCESS);
}
