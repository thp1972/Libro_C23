#include <stdio.h>
#include <stdlib.h>

// 0 = disattiva debug; 1 = attiva debug
#define DEBUG 1
#define SIZE 10

int main(void)
{
    int data[SIZE] = {1, 2, 44, 55, 11, 2, 4, 5, 6, -1};
    int sum = 0;

    char c = '1';

    for (int i = 0; i < SIZE; i++)
    {
#if DEBUG /* se DEBUG è diversa da 0 fammi vedere i valori degli elementi di data */
        printf("Valore di data[%d] = %d\n", i, data[i]);
#endif /* DEBUG */
        sum += data[i];
    }

    return (EXIT_SUCCESS);
}






