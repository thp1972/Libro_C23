#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    struct date // una struttura di tipo struct date
    {
        unsigned int day : 5; // 5 bit -> valori da 0 a 31
        unsigned int month : 4; // 4 bit -> valori da 0 a 15
        unsigned int : 7; // 7 bit di padding
        unsigned int year : 11; // 11 bit -> valori da 0 a 2047
        unsigned int : 0; // isLeapYear inizierà alla successiva unità di storage
        unsigned int isLeapYear : 1; // 1 bit -> valori 0 o 1
    } current_date = {29, 9, 2014, 0};

    size_t s = sizeof current_date; // 8 byte

    return (EXIT_SUCCESS);
}

