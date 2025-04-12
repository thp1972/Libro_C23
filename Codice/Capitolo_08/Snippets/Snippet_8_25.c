#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    struct S // struttura di tipo struct S
    {
        char c;
        int i;
    } s = {'a', 33};

    // 8 byte; 1 per il tipo char, 3 di padding, 4 per il tipo int
    size_t size_s = sizeof s; // 8

    union U // unione di tipo union U
    {
        char c;
        int i;
    } u = {'a'};

    // 4 byte; pari al tipo maggiore ossia int che è di 4 byte
    size_t size_u = sizeof u; // 4

    return (EXIT_SUCCESS);
}

