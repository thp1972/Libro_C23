/* VariableArgumentsList.c :: Funzioni con argomenti di lunghezza variabile :: */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* prototipo della funzione subtraction */
int subtraction(int length, ...);

int main(void)
{
    // sottrazione con 6 elementi
    int res = subtraction(6, 369, 10, 15, 65, 88, 66);
    printf("Il risultato della sottrazione con 6 elementi e': %d\n", res);

    // sottrazione con 3 elementi
    res = subtraction(3, 100, 50, 20);
    printf("Il risultato della sottrazione con 3 elementi e': %d\n", res);

    return (EXIT_SUCCESS);
}

/* definizione della funzione subtraction */
int subtraction(int length, ...)
{
    va_list ap; // dichiaro una variabile di tipo va_list

    // inizializzo ap e indico l'argomento dopo il quale trovare gli altri 
    // argomenti variabili; deve essere sempre chiamata prima di usare ap!
    va_start(ap, length);

    // valore primo argomento
    int result = va_arg(ap, int);

    for (int i = 1; i < length; i++)
        result -= va_arg(ap, int); // successivo argomento...

    va_end(ap); // clean up di ap

    return result;
}
