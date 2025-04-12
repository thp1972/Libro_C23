/* PreprocessingDirectives.c :: Alcune direttive... :: */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

// ??= sequenza di tre caratteri che sta per # (fino a C17)
??=define NR 10

int main(void)
{
    // due linee "fisiche" separate dal carattere \ e new-line
    printf("Un programma che mostra come effettuare un ciclo che\
 consente di scansionare\nogni elemento di un determinato array!!!\n");

    // array data
    int data[SIZE] = {1, 2, 3, 4, NR};

    // due letterali stringa adiacenti
    printf("L'array data contiene i" " seguenti valori: [ ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ",/* array data */data[i]);

    printf("]\n");

    return (EXIT_SUCCESS);
}
