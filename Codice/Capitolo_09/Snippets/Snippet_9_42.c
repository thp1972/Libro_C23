#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // un oggetto di tipo unione; un’unione di tipo union type
    union type
    {
        struct
        {
            int i;
            long l;
        } int_T;
        struct
        {
            float f;
            double d;
        } float_T;
    };

    return (EXIT_SUCCESS);
}