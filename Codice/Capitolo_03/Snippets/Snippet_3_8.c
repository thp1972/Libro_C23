#include <stdio.h>
#include <stdlib.h>

#define NR_OF_ROWS 3 
#define NR_OF_COLS 3 

int main(void)
{
    // matrice di 3x3 elementi
    int data[NR_OF_ROWS][NR_OF_COLS] =
    {
        {10, 100, 1000},
        {-10, -100, -1000},
        {1, 11, 1111}
    };

    // accesso alla seconda colonna della seconda riga: valore -100
    int element = data[1][1];

    // scrittura nella terza colonna della terza riga: sostituisce il valore 
    // 1111 con il valore 0
    data[2][2] = 0;

    return (EXIT_SUCCESS);
}
