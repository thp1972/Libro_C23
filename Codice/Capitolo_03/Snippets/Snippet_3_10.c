#include <stdio.h>
#include <stdlib.h>

#define NR_OF_PAGES 3
#define NR_OF_ROWS 2
#define NR_OF_COLS 3

int main(void)
{
    // array 3D con 3 tabelle di 2x3 elementi
    int data[NR_OF_PAGES][NR_OF_ROWS][NR_OF_COLS] =
    {
        {
            // prima tabella
            // meno inizializzatori, ultimi elementi avranno valore 0
            {10, 100}, // prima riga
            {-10, -1000} // seconda riga
        },
        {
            // seconda tabella
            // meno inizializzatori, gli altri elementi avranno valore 0
            {44}, // prima riga
            {55} // seconda riga
        },
        // terza tabella: utilizzo di un inizializzatore designato
        // pongo 999 alla riga 0 e colonna 0  
        // gli altri elementi avranno valore 0
        [2][0][0] = 999 // prima riga
        // seconda riga omessa: tutti gli elementi conterranno il valore 0
    };

    return (EXIT_SUCCESS);
}
