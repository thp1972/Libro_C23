#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int expr1 = 0xFD;
    int expr2 = 0xFD;

    int res = expr1 <= expr2; // 1 ossia vero

    return (EXIT_SUCCESS);
}
