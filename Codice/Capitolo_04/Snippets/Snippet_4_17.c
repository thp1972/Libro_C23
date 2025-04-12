#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 /* dimensione dell'array */

int main(void)
{
    int vector[SIZE] = {0};
    int ix = 5;

    // qui ix sarà 5 senza nessuna ambiguità poiché il suo incremento con l’operatore ++
    // lo effettuiamo in un sequence point successivo
    vector[ix] = 2 + ix;
    ix++;

    return (EXIT_SUCCESS);
}
