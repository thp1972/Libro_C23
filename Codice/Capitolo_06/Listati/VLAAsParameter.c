/* VLAAsParameter.c :: VLA come parametro :: */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 5 

// prototipo della funzione sum
// equivalente a:
// 1) int sum(int r, int c, int data[][c]);
// 2) int sum(int r, int c, int data[r][c]);
// 3) int sum(int r, int c, int data[*][*]);
int sum(int r, int c, int data[][*]);

int main(void)
{
    int some_data[ROWS][COLS] = 
    {
        {10, 100, 1000, 10000, 99},
        {1, 10, 100, 1000, 9},
        {210, 2100, 21000, 210000, 299}
    };

    // invocazione di sum
    int res = sum(ROWS, COLS, some_data);
    // stampo la somma del primo array di 3*5
    printf("La somma degli elementi dell'array some_data di 3*5 elementi e': %d\n", res);

    int r = 2, c = 3;
    int other_data[r][c];

    // inizializzazione del VLA I riga
    other_data[0][0] = -33;
    other_data[0][1] = -66;
    other_data[0][2] = -99;

    // inizializzazione del VLA II riga
    other_data[1][0] = -55;
    other_data[1][1] = -77;
    other_data[1][2] = -133;

    res = sum(r, c, other_data);
    // stampo la somma del secondo array di 2*3
    printf("La somma degli elementi dell'array other_data di 2*3 elementi e': %d\n", res);

    return (EXIT_SUCCESS);
}

// definizione della funzione sum
// equivalente a:
// 1) int sum(int r, int c, int data[r][c])
int sum(int r, int c, int data[][c])
{
    int res = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res += data[i][j];
        }
    }
    return res;
}
