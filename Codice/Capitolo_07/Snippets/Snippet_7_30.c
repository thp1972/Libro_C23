#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 100;
    float c = 222.3f;

    // puntatore a un tipo T
    int *ptr_to_a = &a;

    // puntatore a un tipo W
    float *ptr_to_c = &c;

    // puntatore a un tipo T <---> puntatore a un tipo W
    // DEFINITO se allineamento in memoria corretto
    ptr_to_a = ptr_to_c;

    // ptr_to_a riconvertito nuovamente in ptr_to_c
    // se allineamento in memoria corretto *ptr_to_c darà come valore 222.3
    // ossia il suo valore in virgola mobile
    ptr_to_c = ptr_to_a;

    return (EXIT_SUCCESS);
}

