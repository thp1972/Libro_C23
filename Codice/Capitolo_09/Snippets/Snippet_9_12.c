#include <stdio.h>
#include <stdlib.h>

// void      -> type specifier
// foo(void) -> declarator
void foo(void)
{
    // static -> storage class
    // const  -> type qualifier
    // int    -> type specifier
    // number -> declarator
    // 100    -> initializer
    static const int number = 100;

    // signed  -> type specifier
    // short   -> type specifier
    // int     -> type specifier
    // data[]  -> declarator
    // {1,2,3} -> initializers list
    signed short int data[] = {1, 2, 3};

    // int           -> type specifier
    // restrict      -> type qualifier
    // *ptr_to_value -> declarator
    int *restrict ptr_to_value;

    // float -> type specifier
    // a     -> declarator
    // b     -> declarator
    // c     -> declarator
    float a, b, c;
}

int main(void)
{
    return (EXIT_SUCCESS);
}



