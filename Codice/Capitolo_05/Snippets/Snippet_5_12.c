#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val;
    int dim = 10;
    goto label; // error: jump into scope of identifier with variably modified type
    int a[dim];

    a[2] = 100;

label: // etichetta
    val = 10;

    return (EXIT_SUCCESS);
}
