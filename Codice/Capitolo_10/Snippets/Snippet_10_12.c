#include <stdio.h>
#include <stdlib.h>

#define LINUX 1 /* attuale sistema operativo di compilazione... */
#define WINDOWS 0
#define AMIGA_OS 0
#define MAC_OS 0

#define CURRENT_OS LINUX

int main(void)
{
#if CURRENT_OS == WINDOWS
    printf("Windows...\n");
#elif CURRENT_OS == MAC_OS
    printf("Mac...\n");
#elif CURRENT_OS == AMIGA_OS
    printf("Amiga...\n");
#elif CURRENT_OS == LINUX /* quest'espressione sarà diversa da 0 */
    printf("Linux...\n");
#endif /* CURRENT_OS */

    return (EXIT_SUCCESS);
}






