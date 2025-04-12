#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 100;

    /* le due istruzioni printf stampano i valori su un’unica linea perché la prima istruzione
    printf non va a capo */
    printf("%d - %d - ", a, b); /* 10 - 100 - */
    int c = 1000;
    printf("%d\n", c); /* 1000 */
    /* altre istruzioni... */

    return (EXIT_SUCCESS);
}
