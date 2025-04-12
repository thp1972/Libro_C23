#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // p_1 punta a un blocco di memoria di 40 byte (se int di 4 byte)
    int *p_1 = malloc(10 * sizeof (int)); // indirizzo 0x770dc0

    // p_2 punta a un blocco di memoria di 20 byte (se int di 4 byte)
    int *p_2 = malloc(5 * sizeof (int)); // indirizzo 0x770e00

    // ora p_1 punta allo stesso blocco puntato da p_2;
    // abbiamo un memory leak perché il blocco di memoria originario puntato da p_1 non è
    // più referenziabile e dunque deallocabile con free
    p_1 = p_2; // indirizzo 0x770e00

    free(p_1); // non necessario free(p_2) perché entrambi puntano allo stesso blocco di memoria

    // p_1 è un dangling pointer; l'area di memoria da esso riferita non è più valida 
    // e pertanto accedere a essa in modifica è un grave errore e può portare a
    // comportamenti non definiti
    *p_1 = 100; // ATTENZIONE!!!

    return (EXIT_SUCCESS);
}







