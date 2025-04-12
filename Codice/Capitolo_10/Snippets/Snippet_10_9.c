#include <stdio.h>
#include <stdlib.h>

// una macro parametrica che consente di creare una serie di funzioni min ciascuna
// con il proprio identificatore e capace a processare lo specifico tipo di dato
#define makeMin(type)          \
type type##Min(type x, type y) \
{                              \
    return x < y ? x : y;      \
}

// makeMin sarà espansa come:
// int intMin(int x, int y) { return x < y ? x : y; }
makeMin(int)

// makeMin sarà espansa come:
// double doubleMin(double x, double y) { return x < y ? x : y; }
makeMin(double)

int main(void)
{
    int a = 10, b = 11;
    int min_1 = intMin(a, b); // 10

    double m = 10.11, n = 22.11;
    double min_2 = doubleMin(m, n); // 10.11

    return (EXIT_SUCCESS);
}






