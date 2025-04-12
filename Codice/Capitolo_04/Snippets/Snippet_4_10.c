#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 100, b = 3;
    // risultato intero: la parte frazionaria è stata troncata
    int res = a / b; // 33 

    // b è esplicitamente convertito in float cosicché tutta l'espressione
    // viene valutata in virgola mobile per le consuete regole di promozione
    // dei tipi; infatti a viene convertita in float e dunque la divisione 
    // avviene tra 100.000000 / 3.000000
    float f_res = a / (float) b; // 33.333332

    // ATTENZIONE divisione per 0
    // l'esecuzione con GCC causa un blocco del programma e un warning: division by zero
    int div_0 = 100 / 0;

    return (EXIT_SUCCESS);
}
