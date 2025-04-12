/* ComplexExpressionsWithFor.c :: Uso dell'istruzione for con espressioni complesse :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int var1 = 3, var2 = 2;

    printf("a\tz\n");
    for (int a = var1 * 2 + var2, z = 0; a >= 0; a--, z++)
        printf("%d\t%d\n", a, z);

    return (EXIT_SUCCESS);
}


