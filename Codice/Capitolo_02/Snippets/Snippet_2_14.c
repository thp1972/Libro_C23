#include <stdio.h>
#include <stdlib.h>

// funzione che non ritorna nulla e che non accetta argomenti
void foo(void) {}

int main(void)
{
    // invocazione di foo: il fatto che non ritorna alcun valore
    // la designa come un'espressione di tipo void
    foo();

    // esplicitamente scarto il valore di ritorno che per printf è di tipo int
    // sintassi: (void)expression
    (void) printf("Stampo qualcosa...\n"); // stampo qualcosa...

    // la funzione malloc alloca un blocco di memoria non inizializzato
    // della dimensione indicata dall'argomento passato e ritorna
    // un puntatore void* all'inizio del blocco;
    // il puntatore ritornato non ha un tipo!
    // void *ptr rappresenta l'indirizzo in memoria di un oggetto che non ha tipo
    void *ptr = malloc(sizeof (int));

    return (EXIT_SUCCESS);
}
