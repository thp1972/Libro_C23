/* Operations.c :: Esegue delle operazioni con la libreria MyMath :: */
#include <stdio.h>
#include <stdlib.h>
#include <MyMath.h>

int main(void)
{
    int res = power(2, 3);
    printf("2 elevato alla terza potenza: [%d]\n", res);
    return (EXIT_SUCCESS);
}
