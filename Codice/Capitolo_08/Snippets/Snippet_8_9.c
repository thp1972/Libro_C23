#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    struct S
    {
        char c_1;
        double d;
        char c_2;
    } s = {'A', 44.44, 'Z'};
    
    size_t size_of_s = sizeof s; // 24 byte!!!

    return (EXIT_SUCCESS);
}

