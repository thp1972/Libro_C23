#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 /* dimensione dell'array */

int main(void)
{
    // i rimanenti 7 elementi dell'array avranno il valore 0
    int a_1[SIZE] = {1, 2, 3};

    // 11 elementi inizializzati: errore o warning a seconda del compilatore
    // per GCC: warning: excess elements in array initializer
    int a_2[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // lista di inizializzatori vuota: da C23 consentita
    int a_3[SIZE] = {};

    // l'array avrà 2 elementi quanti sono per l'appunto gli inizializzatori
    int a_4[] = {45, 78};

    return (EXIT_SUCCESS);
}
