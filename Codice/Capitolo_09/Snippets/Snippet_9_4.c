#include <stdio.h>
#include <stdlib.h>

// variabili esterne; dichiarate al di fuori di ogni funzione
int number;
int data;

void foo(void); // prototipo di foo

int main(void)
{
    // ok number e data sono visibili perché globali
    number = 10;
    data = 15;
    foo();

    return (EXIT_SUCCESS);
}

void foo(void) // definizione di foo
{
    // ok number e data sono visibili perché globali
    // a conterrà il valore 25...
    int a = number + data;
} 


