/* While.c :: Uso dell'istruzione while :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 8;

    printf("a = [ ");
    while (a >= 0) // finché a >= 0 esegue il ciclo
        printf("%d ", a--);

    printf("]\n");

    return (EXIT_SUCCESS);
}
