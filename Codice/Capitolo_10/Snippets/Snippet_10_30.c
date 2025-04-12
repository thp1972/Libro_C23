#include <stdio.h>                              // riga 1
#include <stdlib.h>                             // riga 2
                                                // riga 3
int main(void)                                  // riga 4 
{                                               // riga 5
// cambio la numerazione di riga e il nome      // riga 6
// del file di codice sorgente                  // riga 7
#line 44 "other.c"                              // riga 8  
    printf("%d - %s \n",__LINE__, __FILE__);    // riga 44
    					                        // riga 45
    return (EXIT_SUCCESS);                      // riga 46
}                                               // riga 47