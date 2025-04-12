#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 0100 0000
    unsigned char number = 64;

    // 0000 0010
    unsigned char positions = 2;

    // 0001 0000
    unsigned char result = (unsigned char) (number >> positions); // 16 o 64 / 2^2

    // 0100 0000 ---> 64
    // 0000 0010 --->  2
    // ---------      >>
    // 0001 0000 ---> 16
    
    return (EXIT_SUCCESS);
}
