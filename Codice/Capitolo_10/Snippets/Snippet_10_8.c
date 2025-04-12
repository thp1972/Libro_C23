#include <stdio.h>
#include <stdlib.h>

// una macro parametrica
#define debug(expr) printf(#expr " = %d\n", expr)

int main(void)
{
    int a = 100;

    // in questo caso #expr sarà sostituita da "a"
    debug(a); /* debug sarà espansa come printf("a" " = %d\n", a); */

    int b = 200;

    // in questo caso #expr sarà sostituita da "b"
    debug(b); /* debug sarà espansa come printf("b" " = %d\n", b); */

    // in questo caso #expr sarà sostituita da "b / a"
    debug(b / a); /* debug sarà espansa come printf("b / a" " = %d\n", b / a); */

    return (EXIT_SUCCESS);
}






