#include <stdio.h>
#include <stdlib.h>

#define FEATURE_A
#define FEATURE_B
#define FEATURE_C

int main(void)
{
#ifndef FEATURE_A
    printf("FEATURE A non disponibile...\n");
#elifndef FEATURE_B
    printf("FEATURE B non disponibile...\n");
#elifndef FEATURE_C
    printf("FEATURE C non disponibile...\n");
#else
    printf("Tutte le FEATURE disponibili...\n");
#endif
    return (EXIT_SUCCESS);
}
