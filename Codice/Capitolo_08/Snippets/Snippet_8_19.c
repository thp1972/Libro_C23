#include <stdio.h>
#include <stdlib.h>

#define NRS 5

int main(void)
{
    int nr = 4;
    struct IntegerData // una struttura di tipo struct IntegerData
    {
        int length;
        int min;
        int max;
        float average;
        int data[]; // array flessibile
    };

    // struttura con membro array flessibile membro di un array di struct IntegerData
    struct IntegerData ids[NRS]; // warning: invalid use of structure with flexible array 
                                 // member

    // struttura con membro array flessibile membro di un'altra struttura
    struct IWrapper
    {
        struct IntegerData an_int; // warning: invalid use of structure with flexible array
                                   // member
    };
    
    return (EXIT_SUCCESS);
}

