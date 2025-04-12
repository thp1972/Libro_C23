#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // questa struttura rappresenta un rettangolo come una coppia di punti
    // che individuano gli angoli diagonalmente opposti
    struct rect // una struttura di tipo struct rect
    {
        int width;
        int height;
        struct // struttura anonima
        {
            int x1;
            int y1;
        };
        struct // struttura anonima
        {
            int x2;
            int y2;
        };
    };

    // a_rect è di tipo struct rect
    struct rect a_rect;

     a_rect.width = a_rect.height = 0;
    
    // valorizziamo i membri delle strutture anonime; in questo caso l'accesso ad essi
    // è semplificato e diretto ossia avviene utilizzando una sola volta l'operatore punto
    a_rect.x1 = 10;
    a_rect.y1 = 10;
    a_rect.x2 = 50;
    a_rect.y2 = 50;
    
    return (EXIT_SUCCESS);
}

