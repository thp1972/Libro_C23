/* SwapWithPointers.c :: Scambio di valori con l'uso dei puntatori :: */
#include <stdio.h>
#include <stdlib.h>

/* prototipo di swap */
void swap(int *w, int *z);

int main(void)
{
    int a = 10, b = 20;
    printf("a e b prima dello swap: a=%d - b=%d\n", a, b);

    // passo i puntatori ad a e b
    swap(&a, &b);

    printf("a e b dopo lo swap: a=%d - b=%d\n", a, b);

    return (EXIT_SUCCESS);
}

/* definizione di swap */
void swap(int *w, int *z)
{
    int tmp = *w;
    *w = *z;
    *z = tmp;
}
