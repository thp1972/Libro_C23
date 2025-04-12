#include <stdio.h>
#include <stdlib.h>

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
    } an_int =
    {
        4,
        100,
        500,
        250.00f,
        {100, 200, 300, 400, 500} // error: non-static initialization of a flexible array member
    };
    
    return (EXIT_SUCCESS);
}

