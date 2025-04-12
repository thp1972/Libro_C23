#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int main(void)
{
    // un oggetto di tipo _Complex
    // I è una macro definita nell'header <complex.h> e rappresenta l'unità immaginaria i   
    // laddove l’unità immaginaria è un numero i tale che i2 = -1
    double _Complex dc = 5.0 - 3.0 * I; // parte reale = 5.0; parte immaginaria = -3.0i

    return (EXIT_SUCCESS);
}







