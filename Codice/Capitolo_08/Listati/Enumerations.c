/* Enumerations.c :: Enumerazioni :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    enum cardinal_points // enumerazione di tipo enum cardinal_point
    {
        NORTH,
        NORTH_EAST,
        EAST,
        SOUTH_EAST,
        SOUTH,
        SOUTH_WEST,
        WEST,
        NORTH_WEST
    };

    // cp è una variabile di tipo enum cardinal_points che contiene come valore
    // iniziale NORTH
    enum cardinal_points cp = NORTH;

    // assegnamento lecito: cp è, di fatto, di un tipo intero scelto dal compilatore in uso
    // value conterrà come valore il valore intero di NORTH che in assenza di una specifica      
    // attribuzione è 0
    int value = cp;

    printf("Valore di value: %d\n", value);

    // assegnamento lecito: cp è di un tipo intero scelto dal compilatore in uso
    // tuttavia il valore 10 non è tra quelli ricavabili dalle corrispettive costanti
    // di enumerazione e un compilatore potrebbe segnalarlo...
    cp = 10;

    printf("sizeof di cp: %zu\n", sizeof cp);
    printf("sizeof di EAST: %zu\n", sizeof EAST);

    return (EXIT_SUCCESS);
}
