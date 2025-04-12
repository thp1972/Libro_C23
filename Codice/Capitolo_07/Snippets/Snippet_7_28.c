#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

double foo(void)
{
    return 1.0;
}

int main(void)
{
    int a = 100;
    int b = 200;

    // puntatore a un tipo T
    int *ptr_to_a = &a;

    // puntatore a una funzione di tipo T
    int(*ptr_to_f)(int, int) = sum;

    // puntatore a un tipo void
    void *v_ptr = &b;

    // puntatore a un tipo T <---> void *
    // DEFINITO
    int *a_ptr = v_ptr;

    // void * <---> puntatore a un tipo T
    // DEFINITO
    void *v2_ptr = ptr_to_a;

    // puntatore a una funzione di tipo T <---> void *
    // COMPORTAMENTO NON DEFINITO
    ptr_to_f = v_ptr;

    double(*ptr_to_f_2)(void) = foo;
    // void * <--- > puntatore a una funzione di tipo T
    // COMPORTAMENTO NON DEFINITO
    void *v3_ptr = ptr_to_f_2;

    return (EXIT_SUCCESS);
}

