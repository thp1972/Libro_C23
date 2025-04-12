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
    // puntatore a una funzione di tipo T
    int(*ptr_to_f)(int, int) = sum;

    // puntatore a una funzione di tipo W
    double(*ptr_to_f_2)(void) = foo;

    // puntatore a una funzione di tipo T <---> puntatore a una funzione di tipo W
    // DEFINITO
    ptr_to_f = ptr_to_f_2;

    // ptr_to_f riconvertito nuovamente in ptr_to_f_2
    // COMPORTAMENTO 'RIPRISTINATO' ptr_to_f_2 è di tipo (void) -> double e 
    // referenzia correttamente il codice da invocare
    ptr_to_f_2 = ptr_to_f;

    // puntatore a funzione di tipo (float, float) -> float che contiene
    // un riferimento a una funzione di tipo (int, int) -> int
    // DEFINITO
    float (*ptr_to_f_3)(float, float) = sum;

    // invocazione di sum per il tramite di ptr_to_f_3
    // il tipo della funzione riferita è diverso dal tipo della funzione di cui
    // l'identificatore ptr_to_f_
    // COMPORTAMENTO NON DEFINITO
    (*ptr_to_f_3)(5, 6);

    return (EXIT_SUCCESS);
}

