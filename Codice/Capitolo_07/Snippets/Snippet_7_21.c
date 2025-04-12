#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // array non costante
    int data[] = {100, 200, 300};

    // array costante
    const int ro_data[] = {-1, -2, -3};

    // puntatore costante a un int
    // assegnamento di un dato non costante
    int *const ptr_1 = data;
    *ptr_1 = 10; // OK il puntatore non è un puntatore a costante   
    data[0] = -100; // OK data non è const

    // puntatore costante a un int
    // assegnamento di un dato costante
    int *const ptr_2 = ro_data; // warning: initialization discards 'const' qualifier from pointer 
                                // target type
    *ptr_2 = 10; // modifica di un dato costante con *ptr_2; comportamento non definito
    ro_data[0] = 1; // error: assignment of read-only location 'ro_data[0]

    int other = 2;
    ptr_1 = &other; // error: assignment of read-only variable 'ptr_1'
    ptr_2 = &other; // error: assignment of read-only variable 'ptr_2'

    return (EXIT_SUCCESS);
}

