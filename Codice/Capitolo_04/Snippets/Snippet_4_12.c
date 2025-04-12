#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a = 7.0, b = 5.0;
    // ATTENZIONE: errore di compilazione: 
    // error: invalid operands to binary % (have 'double' and 'double')
    //double res = a % b;

    int j = 10, k = -3;
    int mod = j % k; // 1 perché j è positivo

    int n = -7, m = 5;
    int other_mod = n % m; // -2 perché n negativo

    return (EXIT_SUCCESS);
}
