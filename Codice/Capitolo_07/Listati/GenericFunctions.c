/* GenericFunctions.c :: Funzioni generiche :: */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// prototipo di swap
void g_swap(void *val_1, void *val_2, size_t size);

int main(void)
{
    int a = 10;
    int b = 20;

    float f = 10.20f;
    float g = 22.33f;

    printf("Valori di a e b prima dello swap\t[ %d ] [ %d] \n", a, b);

    // swap di tipi int
    g_swap(&a, &b, sizeof (int));
    printf("Valori di a e b dopo lo swap\t\t[ %d ] [ %d] \n", a, b);

    printf("Valori di f e g prima dello swap\t[ %.2f ] [ %.2f] \n", f, g);

    // swap di tipi float
    g_swap(&f, &g, sizeof (float));
    printf("Valori di f e g dopo lo swap\t\t[ %.2f ] [ %.2f] \n", f, g);

    return (EXIT_SUCCESS);
}

// definizione di swap
void g_swap(void *val_1, void *val_2, size_t size)
{
    void *tmp = malloc(size);
    memcpy(tmp, val_1, size);
    memcpy(val_1, val_2, size);
    memcpy(val_2, tmp, size);
    free(tmp);
}
