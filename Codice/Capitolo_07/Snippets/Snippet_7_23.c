#include <stdio.h>
#include <stdlib.h>

int sumArray(const int *elems, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        // se un elemento è negativo lo voglio rendere positivo...
        if (*elems < 0)
            *elems = -(*elems); // error: assignment of read-only location '*elems'
        sum += elems[i]; // ok elems è usato solo in lettura
    }

    return sum;
}

int main(void)
{
    int data[] = {-1, -2, -3, -4, -5, -6, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sumArray(data, sizeof data / sizeof (int));

    return (EXIT_SUCCESS);
}

