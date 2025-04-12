#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //  0000 1010            
    unsigned char number = 10;

    //  1111 0101
    unsigned char result = (unsigned char) ~number; // 245

    // 0000 1010 ---> 10
    // ---------       ~
    // 1111 0101 ---> 245

    return (EXIT_SUCCESS);
}
