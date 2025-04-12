#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int res, a = 10, b = 9;

    // a e b sono, rispettivamente, incrementati e decrementati prima che i loro valori
    // vengano computati
    res = ++a - --b; // 3

    // qua a vale 11 e b vale 8
    int after = a + b; // 19

    return (EXIT_SUCCESS);
}
