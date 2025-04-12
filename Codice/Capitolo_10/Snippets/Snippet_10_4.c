#include <stdio.h>
#include <stdlib.h>

#define max(x, y) ((x) > (y) ? (x) : (y)) /* calcola il massimo tra due numeri */

int main(void)
{
    int j = 100, p = 50;

    // m conterrà come valore quello di j che è più grande del valore di p
    // m conterrà quindi il valore 101 per effetto dell'incremento di j avuto
    // durante la valutazione dell'espressione (j++) > (p)
    int m = max(j++, p); /* max sarà espansa come ((j++) > (p) ? (j++) : (p)) */

    // j_val conterrà 102 perché j è stato valutato 2 volte al termine della valutazione
    // di tutta la full expression che ricordiamo marca un sequence point
    int j_val = j;

    return (EXIT_SUCCESS);
}







