#include <stdio.h>
#include <stdlib.h>

void makeDivision(double dividend, double divisor)
{
    // ritorno per evitare una divisione per 0 e l'istruzione printf 
    // successiva non sarà mai eseguita
    if (divisor == 0)
        return; // return è posto in questo punto del codice e non necessariamente alla fine

    printf("Il risultato della divisione tra %.2f e %.2f e': %.2f\n",
           dividend, divisor, dividend / divisor);
}

int main(void)
{
    return (EXIT_SUCCESS);
}



