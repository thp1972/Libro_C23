/* TwoDimArrayAsParameter.c :: Array a 2 dimensioni come parametro :: */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 5

/* prototipo della funzione search */
int search(int data[][COLS], int rows);

int main(void)
{
    int data[][COLS] =
    {
        {1, 2, 3, 4, 5},
        {-4, -6, 10, 2, 9},
        {100, -100, 33, 34, 24}
    };

    // invocazione di search
    int res = search(data, ROWS);

    printf("La matrice data contiene %d numeri negativi!\n", res);

    return (EXIT_SUCCESS);
}

/* definizione della funzione search */
int search(int data[][COLS], int rows)
{
    int nr = 0;

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            int val = data[r][c];
            if (val < 0)
                nr++;
        }
    }
    return nr;
}
