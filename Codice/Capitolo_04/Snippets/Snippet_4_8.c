#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // sottrazione tra due char: consentita perché i char sono standard integer types
    // ATTENZIONE: C e K prima della sottrazione sono convertiti in int e
    // poi il valore della sottrazione è convertito in char che è il tipo destinazione
    // dell'assegnamento
    char C = 'A'; // ASCII code 65
    char K = 'z'; // ASCII code 122
    char char_diff = C - K; // -57

    // sottrazione tra un rvalue e un lvalue
    int j = 100;
    bool b_diff = 25 - j; // 1

    return (EXIT_SUCCESS);
}
