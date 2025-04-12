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

    // puntatore a un tipo T <---> un int
    // DEFINITO DALL'IMPLEMENTAZIONE
    // GCC però non lo consente: 
    // error: initialization of 'int *' from 'int' makes pointer from integer without a cast
    int *ptr_to_int = 0x22334455;

    // un int <---> puntatore a un tipo T
    // DEFINITO DALL'IMPLEMENTAZIONE 
    // GCC però non lo consente:
    // error: initialization of 'int' from 'int *' makes integer from pointer without a cast 
    int any = ptr_to_a;

    // puntatore a una funzione di tipo T <---> un int
    // DEFINITO DALL'IMPLEMENTAZIONE
    // GCC però non lo consente:
    // assignment to 'int (*)(int,  int)' from 'int' makes pointer from 
    // integer without a cas
    ptr_to_f = 0x66777788;

    double(*ptr_to_f_2)(void) = foo;
    // un int <---> puntatore a una funzione di tipo T
    // DEFINITO DALL'IMPLEMENTAZIONE
    // GCC però non lo consente:
    // error: initialization of 'int' from 'double (*)(void)' makes integer from 
    // pointer without a cast
    int any_2 = ptr_to_f_2;

    return (EXIT_SUCCESS);
}

