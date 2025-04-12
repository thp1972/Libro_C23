#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int b = 11;
    int c = 20;

    // qua equivalente con a = a * (b + c)
    a *= b + c; // 310

    a = 10;
    // qua si vede, nel risultato, la non equivalenza con a = a * b + c
    a = a * b + c; // 130

    return (EXIT_SUCCESS);
}
