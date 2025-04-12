/* CorrectionOfTheDanglingElse.c :: Problema dell'else pendente corretto :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 9, b = 3;

    if (a > 10)
    {
        if (b > 10)
            printf("a e b > 10\n"); // eseguita se a e b sono maggiori di 10 
    }
    else
        printf("a < 10\n");

    return (EXIT_SUCCESS);
}
