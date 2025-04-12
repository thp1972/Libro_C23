/* Recursion.c :: Esempio di ricorsione: fattoriale di un numero :: */
#include <stdio.h>
#include <stdlib.h>

// prototipo della funzione factorial
unsigned long factorial(unsigned long number);

int main(void)
{
    long number, result;
    printf("*** Calcolo del fattoriale di un numero ***\n\n");
    printf("Digita un numero [q per uscire]: ");
    while (scanf("%ld", &number) == 1)
    {
        if (number < 0)
            printf("Digita solo numeri maggiori o uguali a 0.\n");
        else if (number > 18)
            printf("Digita solo numeri minori o uguali a 18.\n");
        else
        {
            result = factorial(number);
            printf("Il fattoriale di %lu e' %lu.\n", number, result);
        }
        printf("Digita un numero [q per uscire]: ");
    }
    printf("\n*** Computazione terminata ***\n");

    return (EXIT_SUCCESS);
}

// definizione della funzione factorial
unsigned long factorial(unsigned long number)
{
    if (number <= 1) // caso base 
        return 1;
    else // passo ricorsivo 
        return number * factorial(number - 1);
}
