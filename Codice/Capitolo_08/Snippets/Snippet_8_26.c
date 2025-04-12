#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    union U // unione di tipo union U
    {
        char c;
        int i;
    } u = {'a'};

    // u.c non conterrà più 'a'
    u.i = 100;

    return (EXIT_SUCCESS);
}

