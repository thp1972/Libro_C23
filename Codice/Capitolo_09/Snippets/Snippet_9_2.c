#include <stdio.h>
#include <stdlib.h>

void bar(void)
{
    // dichiarazione all'inizio del blocco; dal C99 non più necessario
    int k = 10;

    printf("bar\n"); // bar

    // ok lecito a partire dal C99; tale dichiarazione si trova dopo
    // il codice della funzione printf 
    int a = 100;
}

int main(void)
{
    return (EXIT_SUCCESS);
}

