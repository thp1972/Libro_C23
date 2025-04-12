#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // dichiarazione della variabile i direttamente come prima espressione:
    // C11 consentito    
    for (int i = 0; i < 10; i++)
        ; // fai qualcosa...

    return (EXIT_SUCCESS);
}
