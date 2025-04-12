/* PointerToArrayAsParameter.c :: Puntatori come parametri di una funzione per array 2d :: */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 5

/* prototipo della funzione search */
// equivalente -> int search(int (*ptr_to_data)[COLS], int rows);
int search(int (*)[COLS], int);

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
int search(int (*ptr_to_data)[COLS], int rows)
{
    int nr = 0;

    // qui r++ fa spostare alla riga successiva della matrice perché
    // ptr_to_data è di tipo int (*)[5] 
    for (int r = 0; r < rows; r++)
    {
        // qui c++ fa spostare alla colonna successiva della riga corrente perché
        // *(ptr_to_data + r) è di tipo int *        
        for (int c = 0; c < COLS; c++)
        {
            // sintassi alternativa puntatore/offset a quella propria degli array
            int val = *(*(ptr_to_data + r) + c);
            if (val < 0)
                nr++;
        }
    }
    return nr;
}
