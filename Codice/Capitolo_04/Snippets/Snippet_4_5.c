#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 11.3f;
    int b;

    // il valore di a è convertito in int e posto in b con perdita di informazione;
    // la parte frazionaria è infatti scartata
    b = a; // 11

    // il valore 120 è convertito in float e poi posto in a sempre di tipo float
    a = 120; // 120.000000

    return (EXIT_SUCCESS);
}
