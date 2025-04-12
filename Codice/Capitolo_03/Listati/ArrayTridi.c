/* ArrayTridi.c :: Utilizzo di un array tridimensionale :: */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NR_OF_PAGES 3
#define NR_OF_ROWS 20
#define NR_OF_COLS 50

int main(void)
{
    // inizializzazione del generatore pseudo-casuale dei numeri
    srand((unsigned int) time(nullptr)); // da C23 preferibile a time(NULL)

    // vettore per le somme degli elementi di ciascuna tabella
    int sum[NR_OF_PAGES] = {}; // elementi inizializzati di default a 0

    // array 3D
    int data[NR_OF_PAGES][NR_OF_ROWS][NR_OF_COLS];

    // scrivo dei dati casuali nelle tre tabelle
    for (int j = 0; j < NR_OF_PAGES; j++) // indice pagina
    {
        for (int k = 0; k < NR_OF_ROWS; k++) // indice riga
        {
            for (int l = 0; l < NR_OF_COLS; l++) // indice colonna
            {
                data[j][k][l] = rand() % 1000; // numeri pseudo-casuali tra 0 e 999

                // operazione di somma: operatore += permette di scrivere in modo
                // abbreviato: sum[j] = sum[j] + data[j][k][l];
                sum[j] += data[j][k][l];
            }
        }
    }

    // mostro la somma dei valori per ciascuna tabella
    for (int j = 0; j < NR_OF_PAGES; j++)
    {
        printf("La tabella %d contiene valori per una somma totale di %d\n", j, sum[j]);
    }

    return (EXIT_SUCCESS);
}
