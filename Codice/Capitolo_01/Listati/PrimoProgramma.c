/* PrimoProgramma.c :: Struttura di un generico programma :: */
#include <stdio.h>
#include <stdlib.h>

#define MULTIPLICAND 10
#define MULTIPLIER  20

// prototipo di una funzione
int mult(int a, int b);

// entry point del programma
int main(void)
{
    // dichiarazione e inizializzazione contestuale
    // di più variabili di diverso tipo
    char text_1[] = "Primo programma in C:",
         text_2[] = " Buon divertimento!";
    int a = 10, b = 20;

    float f; // dichiarazione
    f = 44.5f; // inizializzazione

    // stampa qualcosa...
    printf("%s%s\n", text_1, text_2);
    printf("Stamperò un test condizionale tra a=%d e b=%d:\n", a, b);

    if (a < b) // se a < b stampa quello che segue...
    {
        printf("a < b VERO!");
    }
    else /* altrimenti stampa quest'altra stringa */
    {
        printf("a > b VERO!");
    }

    printf("\nStamperò un ciclo iterativo, dove leggerò ");
    printf("per 10 volte il valore di a\n");

    /*
     * ciclo for  
     */
    for (int i = 0; i < 10; i++)
    {
        printf("Passo %d ", i);
        printf("--> a=%d\n", a);
    }

    printf("Ora eseguirò una moltiplicazione tra %d e %d\n", MULTIPLICAND, MULTIPLIER);
    int res = mult(MULTIPLICAND, MULTIPLIER); // invocazione di una funzione
    printf("Il risultato di %d x %d è: %d\n", MULTIPLICAND, MULTIPLIER, res);

    /*
        // esce dalla funzione main
     */
    return (EXIT_SUCCESS);
}

/****************************************
 * Funzione: mult                       *
 * Scopo: moltiplicazione di due valori *
 * Parametri: a, b -> int               *
 * Ritorno: int                         *
 ****************************************/
int mult(int a, int b)
{
    return a * b;
}
