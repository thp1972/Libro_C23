#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 /* dimensione dell'array */

int main(void)
{
    // array di int di 10 elementi
    int c[SIZE] = {[6] = 2450};
    int u = 2, z = 4;
    c[1] = 333; // scrivo alla posizione con indice 1

    int x = c[u + z]; // leggo alla posizione con indice 6

    // per lo standard l'accesso ad un indice di un array 
    // fuori dai limiti dà risultati non definiti
    c[10] = 1000; // index may have a value of '10' which is out of bounds

    return (EXIT_SUCCESS);
}
