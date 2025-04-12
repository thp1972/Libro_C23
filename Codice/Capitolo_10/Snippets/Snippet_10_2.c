#include <stdio.h>
#include <stdlib.h>

// cube scritta in modo errato!!!
#define cube(x) x * x * x /* calcola il cubo di un numero */

int main(void)
{
    int j = 10;

    // m avrà come valore 73!
    int m = cube(j + 3); /* cube sarà espansa come j + 3 * j + 3 * j + 3 */

    return (EXIT_SUCCESS);
}







