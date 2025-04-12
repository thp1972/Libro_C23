#include <stdio.h>
#include <stdlib.h>

// vari prototipi di funzione…
int sub_P(int a, int b);
double sqrt_P(double j);

int main(void)
{
    // puntatore a funzione di tipo (int, int) -> int
    int (*ptr_to_func)(int, int);

    ptr_to_func = sub_P; // ok, stesso tipo
    ptr_to_func = sqrt_P; // no, non dello stesso tipo
    ptr_to_func = sub_P(1, 2); // no, nessun indirizzo ritornato

    return (EXIT_SUCCESS);
}

int sub_P(int a, int b)
{
    printf("Attenzione funzione non ancora implementata!\n");
    return 0; // non ancora implementata!!!
}

double sqrt_P(double j)
{
    printf("Attenzione funzione non ancora implementata!\n");
    return 0.0; // non ancora implementata!!!
}