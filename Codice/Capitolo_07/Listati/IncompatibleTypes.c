/* IncompatibleTypes.c :: Tipi incompatibili con i puntatori :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i_number = 100;
    float f_number = 100.44f;

    int *ptr_i_number = &i_number; // OK tipi compatibili
    printf("Valore di i_number: %d\n", *ptr_i_number);

    ptr_i_number = &f_number; // ATTENZIONE tipi non compatibili
    printf("Valore di f_number: %f\n", *ptr_i_number);

    return (EXIT_SUCCESS);
}
