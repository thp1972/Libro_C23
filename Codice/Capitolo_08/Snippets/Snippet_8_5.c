#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct color // dichiarazione della struttura struct color
    {
        int red;
        int green;
        int blue;
    };

    // utilizzo degli inizializzatori designati e di un valore diretto per 
    // valorizzare la struttura struct color
    struct color magenta =
    {
        .red = 255,
        85, // valorizzerà il membro green
        .blue = 163
    };

    return (EXIT_SUCCESS);
}

