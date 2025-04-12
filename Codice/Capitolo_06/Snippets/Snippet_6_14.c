#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* prototipo della funzione subtraction */
int subtraction(int length, ...);

int main(void)
{
    // sottrazione con 6 elementi
    int res = subtraction(6, 369, 10, 15, 65, 88, 66);

    return (EXIT_SUCCESS);
}

/* definizione della funzione subtraction */
int subtraction(int length, ...)
{
    va_list ap; // dichiaro una variabile di tipo va_list

    // inizializzo ap e indico l'argomento dopo il quale trovare gli altri 
    // argomenti variabili; deve essere sempre chiamata prima di usare ap!
    va_start(ap, length);

    // I invocazione con ap
    int result = va_arg(ap, int); // 369

    // II invocazione con ap
    result = va_arg(ap, int); // 10

    // copia di ap
    va_list ap_copy;
    va_copy(ap_copy, ap);

    // III invocazione con ap
    result = va_arg(ap, int); // 15

    // IV invocazione con ap
    result = va_arg(ap, int); // 65

    // I invocazione con ap_copy
    int res = va_arg(ap_copy, int); // 15

    va_end(ap); // clean up di ap
    va_end(ap_copy); // clean up di ap_copy

    return result; // ATTENZIONE: valore non più valido. NON USARE.
}


