/* FunctionPrototype.c :: Definizione di un prototipo di funzione :: */
#include <stdio.h>
#include <stdlib.h>

/* prototipo di funzione di cube: dichiarazione esplicita */
long cube(long number);

int main(void)
{
    long res = cube(5);    
    printf("Il cubo di 5 e': %ld\n", res);
    return (EXIT_SUCCESS);
}

/* definizione della funzione cube */
long cube(long number)
{
    long res; /* variabile locale e privata alla funzione cube */
    res = number * number * number; /* algoritmo */
    return res; /* ritorna al chiamante il risultato */
}
