#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // puntatore che riferisce un array monodimensionale
    int nr_of_el = 5;
    int data[nr_of_el];
    int *ptr_to_data = data;

    // puntatore che riferisce un array bidimensionale (un puntatore a un array di 5 colonne)
    int nr_of_rows = 5;
    int nr_of_cols = 5;
    int data_m[nr_of_rows][nr_of_cols];
    int (*ptr_to_data_m)[nr_of_cols] = data_m;

    // puntatore che riferisce un array bidimensionale (un array di 5 puntatori a int)
    int *data_o_m[nr_of_rows];
    int **ptr_to_data_o_m = data_o_m;

    return (EXIT_SUCCESS);
}
