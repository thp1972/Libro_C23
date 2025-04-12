#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(void)
{
    int data[SIZE] = {1, 2, 3, 4, 5, 6};

    int res = 1;

    // in questo caso sarebbe auspicabile che il compilatore usasse la veloce memoria
    // di un registro CPU perché la variabile ix avrà dei ripetuti accessi (si pensi
    // al caso di un array contenente molti elementi)
    for (register int ix = 0; ix < SIZE; ix++)
        res *= data[ix];

    register int number = 1000;
    // error: address of register variable 'number' requested
    // non è possibile ottenere l'indirizzo di memoria di una variabile register!
    int *addr_of_reg = &number;

    return (EXIT_SUCCESS);
}




