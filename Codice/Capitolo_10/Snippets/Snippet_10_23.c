#include <stdio.h>
#include <stdlib.h>

#if __has_include("stack.h") && __has_include(<assert.h>) 
    #include "stack.h"
    #include <assert.h>
#else
    #error ATTENZIONE header stack.h o assert.h non trovati...
#endif

int main(void)
{
#if CODE_NOT_IMPLEMENTED
    printf("Attenzione funzionalita' di stack non ancora implementate!\n");
#endif        
    return (EXIT_SUCCESS);
}






