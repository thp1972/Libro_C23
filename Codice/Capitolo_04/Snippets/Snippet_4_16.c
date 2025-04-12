#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 /* dimensione dell'array */

int main(void)
{
    int vector[SIZE] = {};
    int ix = 5;

    vector[ix] = 2 + ix++; // ordine di valutazione non definito

    return (EXIT_SUCCESS);
}
