#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // array di 4 puntatori a int
    int *data[] =
    {
        (int[]) {1, 2}, // 2 colonne
        (int[]) {3, 4, 5}, // 3 colonne
        (int[]) {6, 7, 8, 9}, // 4 colonne
        (int[]) {10, 11, 12, 13, 14} // 5 colonne
    };

    return (EXIT_SUCCESS);
}
