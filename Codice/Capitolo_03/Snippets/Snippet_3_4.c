#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 /* dimensione dell'array */

int main(void)
{
    // elemento 0 = 1000, elemento 1 = 0, elemento 2 = 11
    // elemento 3 = 3; elemento 4 = 5; elemento 5 = 0, elemento 6 = 0
    // elemento 7 = 0, elemento 8 = 0; elemento 9 = 0
    int a[SIZE] = {5000, [3] = 100, [2] = 11, 3, 5, [0] = 1000};

    // elemento 0 = 1; elemento 1 = 2; elemento 2 = 0
    // elemento 3 = 0; elemento 4 = 10; elemento 5 = 0; elemento 6 = 6
    int a_2[] = {1, 2, [6] = 6, [4] = 10};

    return (EXIT_SUCCESS);
}
