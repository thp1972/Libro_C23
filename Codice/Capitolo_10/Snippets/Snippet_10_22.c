#include <stdio.h>
#include <stdlib.h>

#define VERSION 3

#if VERSION == 1
    #define INC_FILE "stack_v1.h"
#elif VERSION == 2
    #define INC_FILE "stack_v2.h" 
#elif VERSION == 3
    #define INC_FILE "stack_v3.h"
#else
    #define INC_FILE "stack_beta.h"
#endif
#include INC_FILE /* sarà: #include "stack_v3.h" */

int main(void)
{
#if CODE_NOT_IMPLEMENTED
    printf("Attenzione funzionalita' di stack non ancora implementate!\n");
#endif
    return (EXIT_SUCCESS);
}






