#include <stdio.h>
#include <stdlib.h>

#define MAX_COLORS 5

int main(void)
{
    struct color // una struttura di tipo struct color
    {
        int red;
        int green;
        int blue;
    };

    // array di struct color
    struct color colors[MAX_COLORS] =
    {
        {255, 215, 0}, // primo elemento (gold)
        {154, 205, 50}, // secondo elemento (yellow green)
        [2] = {0, 206, 209}, // terzo elemento (dark turquoise)
        {.red = 186, .green = 85, .blue = 211}, // quarto elemento: (medium orchid)
        {255, 222, 173} // quinto elemento (navajo white)
    };

    // ottengo il primo elemento: una struttura di tipo struct color contenente
    // indicazioni sul colore gold
    struct color GOLD = colors[0];

    // ottengo i singoli valori dei componenti del colore gold...
    int red = GOLD.red;
    int green = GOLD.green;
    int blue = GOLD.blue;

    return (EXIT_SUCCESS);
}

