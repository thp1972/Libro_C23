#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    struct S
    {
        double d;
        char c_1;
        char c_2;
    } s = {44.44, 'A', 'Z'};

    size_t size_of_s = sizeof s; // 16 byte!!!

    return (EXIT_SUCCESS);
}

