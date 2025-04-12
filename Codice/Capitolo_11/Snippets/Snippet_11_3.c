#include <stdio.h>
#include <stdlib.h>

#define LEN 10
#define MIN_LEN 5
#define MAX_LEN 25

int main(void)
{
    // in questo caso la dimensione di name è uguale alla lunghezza del letterale
    // stringa più 1 per il carattere '\0'
    char name[LEN + 1] = "Pellegrino";

    // in questo caso la dimensione di city è rilevata automaticamente dal compilatore...
    char city[] = "Roma";

    // in questo caso la dimensione di job è superiore rispetto alla dimensione del
    // letterale stringa
    char job[MAX_LEN] = "Software Developer";

    // in questo caso la dimensione di last_name è inferiore rispetto alla dimensione 
    // del letterale stringa 
    char last_name[MIN_LEN] = "Principe";

    // in questo caso la dimensione di preferred_color è uguale alla lunghezza del
    // letterale stringa ma non tiene conto del carattere '\0'
    char preferred_color[3] = "RED";

    // nation è esplicitamente inizializzato con un array di caratteri...
    char nation[] = {'i', 't', 'a', 'l', 'y'};

    nation[0] = 'I'; // OK, nessun problema si può modificare un elemento dell'array

    // error: assignment to expression with array type
    nation = "Italia";

    return (EXIT_SUCCESS);
}







