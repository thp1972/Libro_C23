#include <stdio.h>
#include <stdlib.h>

// STORAGE DURATION: static
// SCOPE:            file
// LINKAGE:          external
int data; // variabile esterna

int main(void)
{
    // STORAGE DURATION: automatic
    // SCOPE:            block
    // LINKAGE:          none
    int number; // variabile interna

    return (EXIT_SUCCESS);
}



