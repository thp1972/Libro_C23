/* SimulatingPassByReference.c :: Pass by reference con i doppi puntatori :: */
#include <stdio.h>
#include <stdlib.h>

void foo(int **p);

int main(void)
{
    int a = 10;
    int *j = &a;

    printf("Indirizzo riferito da j [ %p ] PRIMA del passaggio dell'argomento\n", j);

    foo(&j); // passo l'indirizzo di memoria di j esso stesso puntatore...

    printf("Indirizzo riferito da j [ %p ] DOPO il passaggio dell'argomento e *p = &k;\n", 
           j);

    return (EXIT_SUCCESS);
}

void foo(int **p)
{
    static int k = 100;
    *p = &k; // j è interessato... simulazione del pass by reference
}
