/* PointersAndPassByValue.c :: Pass by value e puntatori :: */
#include <stdio.h>
#include <stdlib.h>

void foo(int *p);

int main(void)
{
    int a = 10;
    int *j = &a;

    printf("Indirizzo riferito da j [ %p ] PRIMA del passaggio dell'argomento.\n", j);

    foo(j); // passo un puntatore...

    printf("Indirizzo riferito da j [ %p ] DOPO il passaggio dell'argomento e p = &k;.\n", j);

    return (EXIT_SUCCESS);
}

void foo(int *p)
{
    int k = 100;
    p = &k; // ok j non è interessato... pass by value
}
