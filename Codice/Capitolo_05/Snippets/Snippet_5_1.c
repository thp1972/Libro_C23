#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 0;
    if (a++ <= 10) // l’espressione è vera: a è minore o uguale a 10
        b = a; // qua b varrà 11...

    return (EXIT_SUCCESS);
}
