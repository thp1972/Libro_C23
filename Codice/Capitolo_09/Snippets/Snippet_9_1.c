#include <stdio.h>
#include <stdlib.h>

void foo(void)
{
    // a è una variabile locale alla funzione foo
    int a = 100;

    // j è una variabile locale al sotto indicato blocco di codice
    {
        int j = a;
    }
}

int main(void)
{
    return (EXIT_SUCCESS);
}

