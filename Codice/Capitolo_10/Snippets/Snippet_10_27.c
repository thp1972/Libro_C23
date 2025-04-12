#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/* 
    se il preprocessore rileva che la corrente implementazione non è aderente
    allo standard C23 interromperà la compilazione e mostrerà in output
    un messaggio come il seguente (generato, per noi, da GCC):
    error: #error Questo programma funziona solo con compilatori aderenti allo standard C23
 */
#if __STDC_VERSION__ != 202311 
    #error Questo programma funziona solo con compilatori aderenti allo standard C23
#endif

    return (EXIT_SUCCESS);
}