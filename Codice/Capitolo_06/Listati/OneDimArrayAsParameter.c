/* OneDimArrayAsParameter.c :: Array a una dimensione come parametro :: */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 6 

/* prototipo della funzione subtraction */
int subtraction(int data[], int length);

int main(void)
{
    int some_data[] = {369, 10, 15, 65, 88, 66};

    int res = subtraction(some_data, SIZE);

    printf("Il risultato della sottrazione di tutti gli elementi di some_data e': %d\n", res);

    return (EXIT_SUCCESS);
}

/* definizione della funzione subtraction */
int subtraction(int data[], int length)
{
    int result = data[0];

    for (int i = 1; i < length; i++)
        result -= data[i];

    return result;
}
