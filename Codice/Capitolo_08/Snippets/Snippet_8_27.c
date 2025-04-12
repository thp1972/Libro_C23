#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    union U // unione di tipo union U
    {
        char c;
        int i;
    } u = {.i = 500}; // inizializzatore designato

    return (EXIT_SUCCESS);
}

