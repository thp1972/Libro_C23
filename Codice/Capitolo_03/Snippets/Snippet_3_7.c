#include <stdio.h>
#include <stdlib.h>

#define NR_OF_ROWS 3
#define NR_OF_COLS 3

int main(void)
{
    // matrice di 3x3 elementi
    int data[NR_OF_ROWS][NR_OF_COLS] =
    {
        {10, 100}, // prima riga - meno inizializzatori ultimo elemento valore 0
        {-10, -100, -1000, 99999} // seconda riga - più inizializzatori warning o errore?
                                  // con GCC: warning: excess elements in array initializer
        // terza riga omessa: tutti gli elementi conterranno il valore 0
    };

    // matrice di 3x3 elementi: utilizziamo solo le { } esterne
    int other_data[NR_OF_ROWS][NR_OF_COLS] =
    {
        1, 2, 3, 4, 5, 6, 7, 8, 9
        // con GCC: warning: missing braces around initializer [-Wmissing-braces]
    };

    // crea una matrice di 2x2 elementi utilizzando gli inizializzatori designati
    int table[2][2] =
    {
        [0][1] = 1000, /* riga 0 colonna 1 valore 1000 */
        [1][0] = 500   /* riga 1 colonna 0 valore 500  */
    };

    // crea una matrice di 5x5 elementi utilizzando un empty initializer
    // tutti i 25 elementi conterranno il valore 0
    int empty_table[5][5] = {};

    return (EXIT_SUCCESS);
}
