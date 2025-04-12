/* DoWhile.c :: Uso dell'istruzione do/while :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 8;

    printf("a = [ ");
    do // parentesi non necessarie... scritte solo per maggiore chiarezza
    {
        printf("%d ", a--);
    }
    while (a >= 0); // finché a >= 0 esegue il ciclo

    printf("]\n");

    return (EXIT_SUCCESS);
}
