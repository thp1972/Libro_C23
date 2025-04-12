#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j = 0;
    int a = 10, b = 11, c = 12; // separatore

    // operatore
    j = (a++, b = a - 5, c = c + b); // 18

    // separatore
    printf("%d %d %d %d\n", j, a, b, c); // 18 11 6 18

    return (EXIT_SUCCESS);
}
