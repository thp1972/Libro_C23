/* ForWithoutBody.c :: Uso dell'istruzione for senza un loop body :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val_max = 100, i = 0;

    for (i = 0; i < val_max; i++) // ciclo senza corpo 
        ; // istruzione nulla
    printf("i = %d\n", i); // i vale 100!!! 

    return (EXIT_SUCCESS);
}
