#include <stdio.h>
#include <stdlib.h>

#define LINUX

int main(void)
{
#if defined (WINDOWS)
    printf("Windows...\n");
#elif defined (MAC_OS)
    printf("Mac...\n");
#elif defined (AMIGA_OS)
    printf("Amiga...\n");
#elif defined (LINUX) /* quest'espressione sarà diversa da 0 */
    printf("Linux...\n");
#endif /* WINDOWS */

    return (EXIT_SUCCESS);
}






