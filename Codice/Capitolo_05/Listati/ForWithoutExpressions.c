/* ForWithoutExpressions.c :: Uso dell'istruzione for senza le espressioni :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 8;

    printf("a = [ ");
    for (;;) // ciclo infinito che è interrotto dal break 
    {
        if (a < 0)
            break; // senza quest'istruzione il ciclo diventa infinito
        printf("%d ", a--);
    }
    printf("]\n");

    return (EXIT_SUCCESS);
}
