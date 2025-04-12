#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    int a;
    const int b = 100;

    a = 100; // OK lvalue modificabile
    b = 1111; // error: assignment of read-only variable 'b'
    245 = a; // error: lvalue required as left operand of assignment
    a + b = 22; // lvalue required as left operand of assignment

    return (EXIT_SUCCESS);
}
