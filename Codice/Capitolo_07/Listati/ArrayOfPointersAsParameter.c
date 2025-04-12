/* ArrayOfPointersAsParameter.c :: Array di puntatori come parametri di una funzione per array 2d :: */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS_I 2
#define COLS_II 3
#define COLS_III 4
#define COLS_IV 5

// prototipo della funzione search
// equivalente --> int search(int **, int);
//             --> int search(int *ptr_to_data[], int rows);
//             --> int search(int **ptr_to_data, int rows);
int search(int *[], int);

int main(void)
{
    // array di 4 puntatori a int
    int *data[] =
    {
        (int[]) {1, 2}, // 2 colonne
        (int[]) {3, -4, 5}, // 3 colonne
        (int[]) {6, -7, 8, 9}, // 4 colonne
        (int[]) {10, 11, -12, 13, -14} // 5 colonne
    };

    // invocazione di search
    int res = search(data, ROWS);

    printf("La matrice data contiene %d numeri negativi!\n", res);

    return (EXIT_SUCCESS);
}

// definizione della funzione search
// equivalente --> int search(int **ptr_to_data, int rows) { ... }
int search(int *ptr_to_data[], int rows)
{
    int nr = 0;
    int cols_nr = 0; 
    
    // qui r++ fa spostare alla riga successiva della matrice perché
    // ptr_to_data è di tipo int **
    for (int r = 0; r < rows; r++)
    {
        switch(r) // necessario per sapere quante colonne ha la corrente riga
        {
            case 0: cols_nr = COLS_I; break;
            case 1: cols_nr = COLS_II; break;
            case 2: cols_nr = COLS_III; break;
            case 3: cols_nr = COLS_IV; break;
        }
        
        // qui c++ fa spostare alla colonna successiva della riga corrente perché
        // *(ptr_to_data + r) è di tipo int *        
        for (int c = 0; c < cols_nr; c++)
        {
            // sintassi alternativa puntatore/offset a quella propria degli array
            int val = *(*(ptr_to_data + r) + c);
            if (val < 0)
                nr++;
        }
    }
    return nr;
}
