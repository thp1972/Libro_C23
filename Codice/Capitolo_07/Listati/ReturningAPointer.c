/* ReturningAPointer.c :: Ritorno di un puntatore a una variabile locale :: */
#include <stdio.h>
#include <stdlib.h>

int *foo(void);
void bar(void);

int main(void)
{
    int *p = foo();

    printf("Valore di j per il tramite di *p: %d\n", *p);

    bar(); // invoco un'altra funzione

    printf("Valore di j per il tramite di *p: %d\n", *p);

    return (EXIT_SUCCESS);
}

int *foo(void)
{
    int j = 1000;
    printf("Indirizzo di j in foo: %p\n", &j);
    return &j;
}

void bar(void)
{
    int b = 2000;
    printf("Indirizzo di b in bar: %p\n", &b);
}
