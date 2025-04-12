#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    // dichiaro un'enumerazione di un tipo senza nome a cui però attribuisco un
    // nome di tipo, ossia cardinal_points, tramite typedef
    typedef enum
    {
        NORTH = 100,
        EAST, // 101, valore di NORTH + 1
        SOUTH = 300,
        WEST // 301, valore di SOUTH + 1
    } cardinal_points;

    // cp è di tipo cardinal_points e conterrà come valore 301
    cardinal_points cp = WEST;

    return (EXIT_SUCCESS);
}


