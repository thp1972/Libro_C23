#include <stdio.h>
#include <stdlib.h>

int sum(double a, double b);

int main(void)
{
    // qua res avrà come valore 16 e non 16.6...
    int res = sum(5.8, 10.8);

    return (EXIT_SUCCESS);
}

int sum(double a, double b)
{
    double res = a + b;

    // qua il valore di res è convertito in int e pertanto c'è perdita di informazione poiché
    // a e b sono di tipo double
    return res;
}

