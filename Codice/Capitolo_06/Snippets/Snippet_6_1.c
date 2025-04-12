#include <stdio.h>
#include <stdlib.h>

// definizione della funzione cube
long cube(long number)
{
    long res; // variabile locale e privata alla funzione cube
    res = number * number * number; // algoritmo
    return res; // ritorna al chiamante il risultato della computazione
}

int main(void)
{
    return (EXIT_SUCCESS);
}
