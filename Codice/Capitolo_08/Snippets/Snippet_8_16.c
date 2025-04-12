#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nr = 4;
    struct IntegerData // una struttura di tipo struct IntegerData
    {
        int length;
        int min;
        int max;
        float average;
        int data[1]; // struct hack
    };

    // in questo caso si usa nr - 1 perché l'array ha già un elemento indicato...
    struct IntegerData *an_int = malloc(sizeof (struct IntegerData) + (nr - 1) * sizeof (int));

    // questo è l'unico elemento che è garantito essere valido
    an_int->data[0] = 100;

    // attenzione sto scrivendo e leggendo fuori dai limiti massimi dell'array data
    // undefined behavior?
    an_int->data[1] = 200;
    int value = an_int->data[1];
    
    free(an_int); // deallocazione memoria puntata da an_int

    return (EXIT_SUCCESS);
}

