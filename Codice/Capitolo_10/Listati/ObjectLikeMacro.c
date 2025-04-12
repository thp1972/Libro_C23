/* ObjectLikeMacro.c :: Un esempio di macro semplici :: */
#include <stdio.h>
#include <stdlib.h>

#define MSG "Questo programma stampera' il totale di due moltiplicazioni \
definite tramite\ndelle direttive #define"

#define SIZE_1 (10 * 2) 
#define SIZE_2 (10 * 3)
#define TOT_SIZE SIZE_1 + SIZE_2 /* totale di SIZE_1 con SIZE_2 */
#define PRINT_SIZE printf("Il totale di TOT_SIZE e' %d\n", TOT_SIZE)

int main(void)
{
    printf("%s\n", MSG); // espande MSG con l'equivalente letterale stringa    
    PRINT_SIZE; // espande PRINT_SIZE con gli equivalenti tokens   

#define NR 10 /* questa macro è utilizzabile da qui in poi ... */

    return (EXIT_SUCCESS);
}

void foo(void)
{
    // qua NR sarà visibile ed espansa con 10
    int nr = NR;
}
