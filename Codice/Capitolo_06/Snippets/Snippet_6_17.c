#include <stdio.h>
#include <stdlib.h>

int case_1()
{
    int v = 100; // warning: control reaches end of non-void function
}

int case_2()
{
    int v = 100;
    return; // warning: 'return' with no value, in function returning non-void
}

void case_3()
{
    int v = 100;
    return v; // warning: 'return' with a value, in function returning void
}

int main(void)
{
    int v = case_1();
    v = case_2();
    v = case_3(); // error: void value not ignored as it ought to be

    return (EXIT_SUCCESS);
}



