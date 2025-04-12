#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float *data[2];

    // violazione di strict aliasing:
    // puntatori di tipo diverso puntano alla stessa area di memoria

    // warning: dereferencing type-punned pointer will break strict-aliasing rules
    int *i = (int *) data;

    // warning: dereferencing type-punned pointer will break strict-aliasing rules
    short *s = (short *) data;

    // manipolazione dell'area di memoria con due puntatori a tipi differenti
    // qualsiasi risultato possibile perché il compilatore assume che il 
    // programmatore rispetti la regola dello strict aliasing e prova a fare
    // delle ottimizzazioni
    *i = 42;
    s[0] = 0;
    s[1] = 1;

    return (EXIT_SUCCESS);
}

