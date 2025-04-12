#include <stdio.h>
#include <stdlib.h>

#define DEBUG

int main(void)
{
#ifdef RELEASE // configurazione di debug
    #define LOG_LVL 1
#elifdef TEST // configurazione di test
    #define LOG_LVL 2
#elifdef DEBUG // configurazione di rilascio
    #define LOG_LVL 2
#endif

    return (EXIT_SUCCESS);
}






