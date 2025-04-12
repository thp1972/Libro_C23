#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = 122; // c vale 'z'
    c -= 1; // c ora vale 'y' che ha il codice numerico 121
    char c_2 = ' '; // c_2 vale 32
    char c_3 = c - c_2; // c_3 vale 'Y' ossia 89 che è dato da 121 - 32  

    return (EXIT_SUCCESS);
}
