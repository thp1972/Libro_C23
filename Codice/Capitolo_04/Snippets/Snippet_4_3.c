#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b;
    // ordine di valutazione esplicita delle espressioni che useranno la variabile a
    b = a - 5; // prima quest’espressione...
    a = 11; // poi quest’espressione...

    int res = b + a; // 16

    return (EXIT_SUCCESS);
}
