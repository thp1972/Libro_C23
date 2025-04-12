#include <stdio.h>
#include <stdlib.h>

// prototipo di foo
void foo(void);

// number può essere usata solo da main e da altre funzioni poste
// nello stesso file dove number stesso è stato definito
static int number;

int main(void)
{
    foo(); // I invocazione
    foo(); // II invocazione

    return (EXIT_SUCCESS);
}

// definizione di foo
void foo(void)
{
    // data ha una durata in memoria permanente e conserva il suo valore
    // tra la I e la II invocazione della sua funzione avvenuta da main
    static int data = 2000;
    int a = number; // ok number è visibile...
}



