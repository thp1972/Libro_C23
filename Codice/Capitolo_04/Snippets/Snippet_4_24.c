#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 10;

    // l'espressione dell'operando di sinistra viene valutata completamente
    // prima della valutazione dell'espressione dell'operando di destra
    int res = x++ < 11 && x + 1 == 12; // 1

    return (EXIT_SUCCESS);
}
