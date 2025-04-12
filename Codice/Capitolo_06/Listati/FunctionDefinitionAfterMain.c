/* FunctionDefinitionAfterMain.c :: Definizione di cube dopo main :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long res = cube(5); /* dichiarazione implicita... */    
    printf("%ld\n", res);
    return 0;

    return (EXIT_SUCCESS);
}

/* definizione della funzione cube */
long cube(long number)
{
    long res; /* variabile locale e privata alla funzione cube */
    res = number * number * number; /* algoritmo */
    return res; /* ritorna al chiamante il risultato */
}