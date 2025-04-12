#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct date // una struttura di tipo struct date
    {
        unsigned int day : 5; // 5 bit -> valori da 0 a 31
        unsigned int month : 4; // 4 bit -> valori da 0 a 15
        unsigned int year : 11; // 11 bit -> valori da 0 a 2047
        bool isLeapYear : 1; // 1 bit -> valori 0 o 1
    };
    
    return (EXIT_SUCCESS);
}

