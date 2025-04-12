#include <stdio.h>
#include <stdlib.h>

#define A 1
#define B 1
#define C 1

int main(void)
{
    // una serie di #if / #endif innestati; saranno incluse tutte e tre le istruzioni di printf
#if A
    printf("Ramo A...\n");
#if B
    printf("Ramo B...\n");
#if C
    printf("Ramo C...\n");
#endif /* C */
#endif /* B */
#endif /* A */

    return (EXIT_SUCCESS);
}






