/* BitFields.c :: Campi di bit :: */
#include <stdio.h>
#include <stdlib.h>

// prototipo di isLeapYear
bool isLeapYear(int year);

int main(void)
{
    struct date // una struttura di tipo struct date
    {
        unsigned int day : 5; // 5 bit -> valori da 0 a 31
        unsigned int month : 4; // 4 bit -> valori da 0 a 15
        unsigned int year : 11; // 11 bit -> valori da 0 a 2047
        unsigned int isLeapYear : 1; // 1 bit -> valori 0 o 1
    };

    // current_date è di tipo struct date
    struct date current_date;

    // valorizzazione dei campi di bit
    current_date.day = 29;
    current_date.month = 9;
    current_date.year = 2014;
    current_date.isLeapYear = isLeapYear(current_date.year);

    printf("La data corrente scelta e': %d/%d/%d\nL'anno %d %s bisestile\n",
           current_date.day,
           current_date.month,
           current_date.year,
           current_date.year,
           current_date.isLeapYear ? "e'" : "non e'"
           );

    return (EXIT_SUCCESS);
}

// definizione di isLeapYear
bool isLeapYear(int year)
{
    return (year % 4 == 0) &&
           (year % 100 != 0) ||
           (year % 400 == 0);

}
