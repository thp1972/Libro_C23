/* For.c :: Uso dell'istruzione for :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("a = [ ");
    for (int a = 8; a >= 0; a--) // finché a >= 0 esegue il ciclo 
        printf("%d ", a);

    printf("]\n");

    return (EXIT_SUCCESS);
}
