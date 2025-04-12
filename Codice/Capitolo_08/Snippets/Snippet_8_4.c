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

    // utilizzo degli inizializzatori designati per valorizzare la struttura struct color
    struct color magenta =
    {
        .red = 255,
        .green = 85,
        .blue = 163
    };

    return (EXIT_SUCCESS);
}

