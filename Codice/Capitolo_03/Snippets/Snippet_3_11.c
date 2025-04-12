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
        { // prima tabella
            {10, 100}, // prima riga
            {-10, -1000} // seconda riga
        },
        { // seconda tabella
            {44},
            {55}
        },
        // terza tabella utilizzo di un inizializzatore designato
        // e vi pongo 999 alla riga 0 e colonna 0
        [2][0][0] = 999
    };

    // accesso alla prima colonna della seconda riga della seconda tabella
    // element conterrà il valore 55
    int element = data[1][1][0];

    // scrittura nella seconda colonna della prima riga della terza tabella
    data[2][0][1] = -630;

    return (EXIT_SUCCESS);
}
