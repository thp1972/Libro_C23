#include <stdio.h>
#include <stdlib.h>

#define VALUE 100

// static storage duration; a e b inizializzate con il valore 0
struct S
{
    int a;
    int b;
} s;

// static storage duration; p inizializzato con il valore ((void *)0) 
int *p;

// static storage duration; a inizializzato con il valore 0
union U
{
    short a;
    int i;
    float f;
} u;

int var = 10;
// error: initializer element is not constant
// ext_a, che ha una durata statica in memoria, non può essere inizializzata
// con il valore di var che è un'espressione non costante
int ext_a = var;

// ok inizializzazione consentita
// ext_b, che ha una durata statica in memoria, può essere inizializzata con
// il valore di VALUE perché, essendo una macro, è considerata un'espressione costante
int ext_b = VALUE;

int main(void)
{
    // a, che è un oggetto scalare, è inizializzato con il valore 2
    int a = 2;

    // data, che è un oggetto aggregato, è inizializzato con i valori 1, 2 e 4
    int data[] = {1, 2, 4};

    // una struttura di tipo struct point
    struct point
    {
        int x;
        int y;
    };
    // p1 e p2 sono tipi aggregati e sono inizializzati, rispettivamente, con
    // una lista di inizializzatori e con un'espressione dello stesso tipo 
    // infatti p1 è di tipo struct point così come p2
    struct point p1 = {1, 2}, p2 = p1;
    
    // consentita l'inizializzazione degli elementi di nrs tramite delle espressioni
    // non costanti come è il caso dei valori ritornati dalle variabili c e d
    int c = 10, d = 11;
    int nrs[] = {c, d};

    // variabile automatica non inizializzata; valore indeterminato!
    int _c;
   
    return (EXIT_SUCCESS);
}







