/* FlexibleArrayMember.c :: Membro array flessibile :: */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // inizializzazione del generatore pseudo-casuale dei numeri
    srand((unsigned int) time(NULL));

    int nr = 4;
    struct IntegerData // una struttura di tipo struct IntegerData
    {
        int length;
        int min;
        int max;
        float average;
        int data[]; // array flessibile
    };

    // an_int è un puntatore a una struttura di tipo struct IntegerData
    struct IntegerData *an_int = malloc(sizeof (struct IntegerData) + nr * sizeof (int));

    // valorizzazione membro length
    an_int->length = nr;

    // valorizzazione membri dell'array data
    for (int i = 0; i < an_int->length; i++)
        an_int->data[i] = rand() % 1000;

    // valorizzazione min e max
    int min = an_int->data[0];
    int max = an_int->data[0];
    for (int i = 1; i < an_int->length; i++)
    {
        min = an_int->data[i] < min ? an_int->data[i] : min;
        max = an_int->data[i] > max ? an_int->data[i] : max;
    }
    an_int->min = min;
    an_int->max = max;

    // valorizzazione average
    int tot = 0;
    for (int i = 0; i < an_int->length; i++)
        tot += an_int->data[i];
    an_int->average = (float)tot / an_int->length;

    // mostra i dati valorizzati nella struttura
    printf("length:\t %d\n", an_int->length);
    printf("min:\t %d\n", an_int->min);
    printf("max:\t %d\n", an_int->max);
    printf("average: %.2f\n", an_int->average);
    printf("data[]:  ");    
    for (int i = 0; i < an_int->length; i++)
        printf("%d ", an_int->data[i]); 
    printf("\n");

    free(an_int); // deallocazione memoria puntata da an_int

    return (EXIT_SUCCESS);
}
