#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b;

    int res = (b = a - 5) + (a = 11);

    return (EXIT_SUCCESS);
}
