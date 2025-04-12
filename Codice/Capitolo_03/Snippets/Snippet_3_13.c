#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 /* dimensione dell'array */

int main(void)
{
    // vettori read-only
    const int data[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    constexpr short size = 3;
    constexpr int other_data[size] = {1, 2, 3};

    data[1] = 100; // error: assignment of read-only location 'data[1]'
    other_data[1] = -3; // error: assignment of read-only location 'other_data[1]'

    return (EXIT_SUCCESS);
}
