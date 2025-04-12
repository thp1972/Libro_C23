#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
     la dichiarazione della variabile i è posta fuori dal costrutto for
     nel costrutto for la prima espressione è una mera espressione
     */
    int i;
    for (i = 0; i < 10; i++)
        ; /* fai qualcosa... */

    return (EXIT_SUCCESS);
}
