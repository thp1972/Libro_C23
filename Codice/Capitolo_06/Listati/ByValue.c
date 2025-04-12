/* ByValue.c :: Passaggio degli argomenti per valore :: */
#include <stdio.h>
#include <stdlib.h>

/* prototipo di swap */
void swap(int a, int b);

int main(void)
{
    int a = 10, b = 20;
    printf("a e b prima dello swap: a=%d - b=%d\n", a, b);

    swap(a, b); /* swap di a e b */

    printf("a e b dopo lo swap: a=%d - b=%d\n", a, b);

    return (EXIT_SUCCESS);
}

/* definizione di swap */
void swap(int w, int z) /* ATTENZIONE gli argomenti non sono modificati!!! */
{
    int tmp = w;
    w = z;
    z = tmp;
}
