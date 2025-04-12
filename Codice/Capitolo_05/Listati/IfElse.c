/* IfElse.c :: Uso dell'istruzione if/else :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 5;

    if (a >= 10)
        printf("a >= 10\n"); // eseguita se a è maggiore o uguale a 10 
    else
        printf("a < 10\n"); // eseguita in caso contrario 

    return (EXIT_SUCCESS);
}
