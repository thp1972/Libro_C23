#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct color // una struttura di tipo struct color
    {
        int red;
        int green;
        int blue;
    };

    typedef struct // una struttura di tipo point
    {
        int x;
        int y;
    } point;

    // letterali strutture
    struct color a_color = (struct color){255, 0, 0}; // via struct tag
    point a_point = (point){300, 10}; // via typedef

    // letterale struttura con membri inizializzati tramite degli inizializzatori designati
    a_color = (struct color){.red = 0, .green = 255, .blue = 0};

    return (EXIT_SUCCESS);
}

