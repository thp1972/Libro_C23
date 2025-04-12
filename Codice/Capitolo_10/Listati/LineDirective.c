/* LineDirective.c :: Un caso d'uso della direttiva #line :: */
#include <stdio.h>                              
#include <stdlib.h>                            

void foo(void);
void bar(void);

int main(void)
{
    foo();
    bar();
    return (EXIT_SUCCESS);
}

#line __LINE__ "void foo(void)"
void foo(void)
{
    int a = j;
}

#line __LINE__ "void bar(void)"
void bar(void)
{
    int a = j;
}