#include <stdio.h>
#include <stdlib.h>

// una macro parametrica con due argomenti
#define min(x, y) ((x) < (y) ? (x) : (y))

int main(void)
{
    int a = 10, b = 11;

    // omesso il primo argomento; 
    // il suo corrispettivo parametro, ossia x, sarà eliminato dalla lista di sostituzione
    // il sorgente non sarà compilabile perché la macro espansa non sarà valida
    // error: expected expression before ')' token
    int min_1 = min(, b); /* min sarà espansa come (() < (b) ? () : (b)); */

    // omesso il secondo argomento;
    // il suo corrispettivo parametro, ossia y, sarà eliminato dalla lista di sostituzione
    // il sorgente non sarà compilabile perché la macro espansa non sarà valida
    // error: expected expression before ')' token
    int min_2 = min(a,); /* min sarà espansa come  ((a) < () ? (a) : ()); */

    // attenzione l'omissione di tutti e due gli argomenti senza indicazione
    // del carattere , di separazione fa generare un errore anche da parte del
    // preprocessore:  error: macro "min" requires 2 arguments, but only 1 given
    int min_3 = min(); /* min sarà espansa come  (() < () ? () : ()); */

    // omessi il primo e il secondo argomento;
    // i suoi corrispettivi parametri, ossia x e y, saranno eliminati dalla 
    // lista di sostituzione
    // il sorgente non sarà compilabile perché la macro espansa non sarà valida
    // error: expected expression before ')' token
    int min_4 = min(,); /* min sarà espansa come (() < () ? () : ()); */

    return (EXIT_SUCCESS);
}






