#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // dichiarazione di un doppio puntatore...
    int number = 100;
    int *ptr_to_number = &number;
    int **ptr_to_ptr_to_number = &ptr_to_number;

    // un deriferimento
    // ritorna come valore l'indirizzo di memoria contenuto in ptr_to_number
    int *first_der = *ptr_to_ptr_to_number;

    // doppio deriferimento
    // ritorna come valore il numero 100 che è contenuto in number
    int value = **ptr_to_ptr_to_number;

    return (EXIT_SUCCESS);
}
