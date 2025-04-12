#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number_1; // CORRETTO 
    int number 1; // ERRORE - l’identificatore è separato da un carattere di spazio
    int 1number;  // ERRORE - l’identificatore inizia con un carattere numerico

    // a e A sono variabili DIVERSE!!! 
    int a;
    int A;

    return (EXIT_SUCCESS);
}
