/* Callback.c :: Puntatori a funzioni come callback:: */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NR_OF_ELEMS 10

// prototipi di funzione
void done(int res); // viene invocata solo se il risultato della somma è positivo
void fail(int code_nr); // viene invocata solo se il risultato della somma è negativo

// primo parametro   -> array di elementi da sommare
// secondo parametro -> funzione di callback da eseguire se la computazione è eseguita 
//                      correttamente
// terzo parametro   -> funzione di callback da eseguire se la computazione NON è eseguita 
//                      correttamente
void sum(int elems[], void(*done)(int), void(*fail)(int));

int main(void)
{
    // inizializzazione del generatore pseudo-casuale dei numeri
    srand((unsigned int) time(nullptr)); // da C23 preferibile a time(NULL)

    int elems[NR_OF_ELEMS];

    // inizializzazione elementi dell'array
    for (int i = 0; i < NR_OF_ELEMS; i++)
        elems[i] = (rand() % 1001) + (-500); // tra +500 e -500

    sum(elems, done, fail);

    return (EXIT_SUCCESS);
}

// definizioni delle funzioni
void done(int res)
{
    printf("Il risultato e' %d\n", res);
}

void fail(int code_nr)
{
    printf("Attenzione errore %d di computazione [ risultato < 0 ]\n", code_nr);
}

void sum(int elems[], void(*done)(int), void(*fail)(int))
{
    int total = 0;
    for (int ix = 0; ix < NR_OF_ELEMS; ix++)
        total += elems[ix];

    if (total >= 0)
        (*done)(total); // chiamo la callback riferita dal parametro done 
    else
        (*fail)(-1); // chiamo la callback riferita dal parametro fail 
}
