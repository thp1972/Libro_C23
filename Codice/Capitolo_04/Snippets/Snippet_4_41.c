#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[] = {1, 2, 3};
    int ix = 0;

    // ok ix è incrementato solo una volta
    a[ix++] *= 10 + 20; // 30

    ix = 0;

    // qua ix è incrementato e utilizzato nell'ambito della stessa espressione di
    // assegnamento; tuttavia non sappiamo quale ordine di valutazione 
    // degli operandi il compilatore attuerà per primo; l'operazione su ix è quindi non definita
    a[ix++] = a[ix++] * (10 + 20); // ???

    return (EXIT_SUCCESS);
}
