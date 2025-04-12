#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 0001 1110
    unsigned char number_1 = 30;

    // 0001 0100
    unsigned char number_2 = 20;

    // 0001 1110
    unsigned char result = (unsigned char) number_1 ^ number_2; // 10

    // 0001 1110 ---> 30
    // 0001 0100 ---> 20
    // ---------       ^
    // 0000 1010 ---> 10

    return (EXIT_SUCCESS);
}
