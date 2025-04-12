#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // array non costante
    int data[] = {100, 200, 300};

    // array costante
    const int ro_data[] = {-1, -2, -3};

    // puntatore a costante di tipo int
    // assegnamento di un dato non costante
    const int *ptr_1 = data;
    *ptr_1 = 10; // error: assignment of read-only location '*ptr_1'    
    data[0] = -100; // OK data non è const

    // puntatore a costante di tipo int
    // assegnamento di un dato costante
    const int *ptr_2 = ro_data;
    *ptr_2 = 10; // error: assignment of read-only location '*ptr_2'
    ro_data[0] = 1; // error: assignment of read-only location 'ro_data[0]

    // OK i puntatori a costante possono puntare ad altri oggetti
    int other = 2;
    ptr_1 = ptr_2 = &other;

    return (EXIT_SUCCESS);
}

