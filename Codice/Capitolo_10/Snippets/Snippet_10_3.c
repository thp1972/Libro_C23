#include <stdio.h>
#include <stdlib.h>

// cube scritta in modo errato!!!
#define cube(x) (x) * (x) * (x) /* calcola il cubo di un numero */

int main(void)
{
    int j = 10;
    int val = 10000;

    // m avrà come valore 100000!
    int m = val / cube(j); /* cube sarà espansa come (j) * (j) * (j) */

    return (EXIT_SUCCESS);
}







