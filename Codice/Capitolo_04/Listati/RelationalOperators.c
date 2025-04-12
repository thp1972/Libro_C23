/* RelationOperators.c :: Uso degli operatori relazionali :: */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3 
#define NR_ROWS 3
#define NR_COLS 3 

int main(void)
{
    // matrice per la ricerca 
    int values[NR_ROWS][NR_COLS] = 
    {
        {10, 20, 30},
        {-22, -11, -18},
        {105, 205, -963}
    };

    int filter_values[SIZE] = {33, 13, 56}; // valori da confrontare 

    int how_many = 0; // tiene traccia delle occorrenze trovate  

    // ciclo per la ricerca 
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < NR_ROWS; i++)
        {
            for (int j = 0; j < NR_COLS; j++)
            {
                int value1 = values[i][j];
                int value2 = filter_values[k];

                printf("Il valore %4d e' minore del valore %3d ?", value1, value2);

                if (value1 < value2)
                {
                    how_many++; // incrementiamo di 1 la variabile 
                    printf(" VERO\n");
                }
                else
                    printf(" FALSO\n");
            }
        }
    }
    printf("Numero valori trovati: %d\n", how_many);

    return (EXIT_SUCCESS);
}

