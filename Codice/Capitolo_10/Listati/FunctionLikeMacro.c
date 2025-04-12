/* FunctionLikeMacro.c :: Un esempio di macro parametriche :: */
#include <stdio.h>
#include <stdlib.h>

// una serie di macro parametriche
#define max(x, y) ((x) > (y) ? (x) : (y)) /* calcola il massimo tra due numeri */
#define cube(x) ((x) * (x) * (x)) /* calcola il cubo di un numero */
#define c_print(c) printf("%c\n", c) /* visualizza un carattere... */
#define i_print(i) printf("%d\n", i) /* visualizza un intero... */
#define nl() printf("\n") /* stampa un carattere di new-line */

int main(void)
{
    printf("Di seguito il risultato dell'invocazione di alcune macro parametriche:");
    nl(); /* nl sarà espansa come printf("\n") */

    int j = 10, p = 11;

    // m conterrà come valore 11 perché p è maggiore di j!
    int m = max(j, p); /* max sarà espansa come ((j) > (p) ? (j) : (p)) */

    // c conterrà come valore 1000 che è il cubo di j
    int c = cube(j); /* cube sarà espansa come ((j) * (j) * (j)) */

    char a_char = 'A';
    c_print(a_char); /* c_print sarà espansa come printf("%c\n", a_char) */
    i_print(j); /* i_print sarà espansa come printf("%d\n", j) */

    return (EXIT_SUCCESS);
}
