/* SharingVariables.c :: Utilizzo di una variabile definita altrove :: */
#include <stdio.h>
#include <stdlib.h>

// inclusione dell'header A_1.h
#include "A_1.h"

int main(void)
{
    printf("Il valore di data e': %d\n", data);

    return (EXIT_SUCCESS);
}

