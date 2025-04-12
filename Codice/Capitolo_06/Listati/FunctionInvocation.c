/* FunctionInvocation.c :: Mostra come invocare una funzione :: */
#include <stdio.h>
#include <stdlib.h>

// definizione della funzione cube
long cube(long number)
{
    long res; // variabile locale e privata alla funzione cube
    res = number * number * number; // algoritmo
    return res; // ritorna al chiamante il risultato
}

int main(void)
{
    long number;

    printf("Digita un numero cui far calcolare il suo cubo tra -1000 e 1000: ");
    scanf("%ld", &number);
    while (number < -1000 || number > 1000)
    {
        printf("\007Il numero deve essere compreso tra -1000 e 1000!\n");
        printf("Digita un numero cui far calcolare il suo cubo tra -1000 e 1000: ");
        scanf("%ld", &number);
    }

    printf("Il cubo di %ld e' %ld\n", number, cube(number));

    return (EXIT_SUCCESS);
}
