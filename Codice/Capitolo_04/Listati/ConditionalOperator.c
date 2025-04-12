/* ConditionalOperator.c :: Uso dell'operatore condizionale :: */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 9 
#define NR_ROWS 3
#define NR_COLS 3 

int main(void)
{
    // matrice per la ricerca 
    int values[NR_ROWS][NR_COLS] = 
    {
        {10, 100, 30},
        {-22, -11, 66},
        {105, 204, 333}
    };

    int filter_value = 33; // valore da confrontare 
    int found_values[SIZE] = {}; // valori trovati

    // ciclo per la ricerca 
    for (int i = 0; i < NR_ROWS; i++)
    {
        for (int j = 0; j < NR_COLS; j++)
        {
            int value = values[i][j];
            // posiziono il valore trovato nell'array spostandomi  
            // alla corretta posizione 
            if (value % 2 == 0)
                found_values[i * NR_COLS + j] = value > filter_value ? value : 0;
        }
    }
    // valori trovati 
    for (int i = 0; i < SIZE; i++)
        printf("Indice %d ---> [ %3d ]\n", i, found_values[i]);

    return (EXIT_SUCCESS);
}
