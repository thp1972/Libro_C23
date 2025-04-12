#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 3;
    int b = 2;
    int j = 1;

    for (a++; b < a++ +10; j = ++b)
    {
        printf("%d - % d - %d\n", a, b, j);
        if (a == 7) // interrompi il ciclo altrimenti sarebbe infinito...
            break;
    }

    return (EXIT_SUCCESS);
}
