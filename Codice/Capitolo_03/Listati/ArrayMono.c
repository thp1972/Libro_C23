/* ArrayMono.c :: Dato un array ne stampa solo i valori dispari :: */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
    // array di interi di 10 numeri
    int numbers[SIZE] = {122, 4, 66, 7, 33, 1, 2, 30, 45, 10};
    
    for(int ix = 0; ix < SIZE; ix++)
    {
        if(numbers[ix] % 2 != 0)
            printf("Il numero %d e' dispari\n", numbers[ix]);
    }    

    return (EXIT_SUCCESS);
}	
