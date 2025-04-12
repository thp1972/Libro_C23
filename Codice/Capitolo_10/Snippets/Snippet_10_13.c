#include <stdio.h>
#include <stdlib.h>

int main(void)
{
#if __STDC_VERSION__ == 202311  
    printf("Ok standard C23: possiamo usare le sue caratteristiche...\n");
#else /* queste righe saranno incluse solo se l'#if sarà uguale a 0 */
    printf("ERRORE no standard C23: non possiamo usare le sue caratteristiche...\n");
#endif

    return (EXIT_SUCCESS);
}






