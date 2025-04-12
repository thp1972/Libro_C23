#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nr = 4;
    struct IntegerData // una struttura di tipo struct IntegerData
    {
        int length;
        int min;
        int max;
        float average;
        int data[]; // array flessibile
    };

    // creo un puntatore a una struttura di tipo struct IntegerData e la valorizzo
    struct IntegerData *an_int = malloc(sizeof (struct IntegerData) + nr * sizeof (int));
    an_int->length = nr;
    an_int->data[0] = 100;
    an_int->data[1] = 200;
    an_int->data[2] = 300;
    an_int->data[3] = 400;
    an_int->min = an_int->data[0];
    an_int->max = an_int->data[3];
    an_int->average = (float) (an_int->data[0] + an_int->data[1] + an_int->data[2] + an_int->data[3]) / an_int->length;

    // copio la struttura puntata da *an_int nella struttura other_int
    // in questo caso solo i membri ordinari saranno copiati in other_int
    // other_int.length = 4
    // other_int.min = 100
    // other_int.max = 400
    // other_int.average = 250.000000
    // other_int.data[] = ?
    struct IntegerData other_int = *an_int;
    
    free(an_int); // deallocazione memoria puntata da an_int
    
    return (EXIT_SUCCESS);
}

