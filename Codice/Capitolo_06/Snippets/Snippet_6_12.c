#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

/* prototipo della funzione subtraction */
int subtraction(int data[], int length);

int main(void)
{
    // invoco la funzione subtraction passando "al volo" un array
    // non è necessario indicare NR_OF_ELEMENTS in int[] in quanto
    // la lista di inizializzatori fornita è utilizzata dal compilatore per
    // determinare la quantità di elementi del correlativo array
    int res = subtraction((int []){1, 2, 3, 4, 5, 6}, SIZE);

    // ATTENZIONE: un array letterale, non può essere di tipo VLA
    // error: compound literal has variable size
    int dim = 6;
    int res_2 = subtraction((int [dim]){-1, -2, -3, -4, -5, -6}, SIZE);

    // ATTENZIONE: un array letterale deve sempre indicare una lista
    // di inizializzatori esplicita oppure vuota
    // rror: expected expression before ',' token
    int res_3 = subtraction((int [6]), SIZE);

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


