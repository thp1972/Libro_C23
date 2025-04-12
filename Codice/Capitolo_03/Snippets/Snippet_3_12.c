#include <stdio.h>
#include <stdlib.h>

int dim = 3;
// 3.
// error: variably modified 'expr' at file scope
int expr[dim];

int main(void)
{
    int num = 10;
    //  1.
    // error: variable-sized object may not be initialized
    int data[num] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 2.
    //  error: storage size of 'other_data' isn't constant
    static int other_data[num];

    // 4.
    // warning: a member of a structure or union cannot have a variably modified type
    int n = 5;
    struct tag
    {
        int z[n]; // z, nella struct, non è un identificatore ordinario 
    };

    return (EXIT_SUCCESS);
}
