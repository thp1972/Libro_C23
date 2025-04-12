#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 0100 0000
    unsigned char number = 64;

    // 0000 0001
    unsigned char positions = 1;

    // 1000 0000
    unsigned char result = (unsigned char) (number << positions); // 128 o 64 * 2^1

    // 0100 0000 --->  64
    // 0000 0001 --->   1
    // ---------       <<
    // 1000 0000 ---> 128

    return (EXIT_SUCCESS);
}
