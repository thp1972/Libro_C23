#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // somma tra interi
    int a = 10, b = 12, c = 14;
    int sum = a + b + c; // 36

    // somma tra un float e in int: il risultato è float 
    // j prima dell'addizione è convertito in float
    float f = 33.44f;
    int j = 100;
    float other_sum = f + j; // 133.44

    return (EXIT_SUCCESS);
}
