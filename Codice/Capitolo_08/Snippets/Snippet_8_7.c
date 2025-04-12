#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // dichiaro una struttura di tipo struct color nel consueto modo:
    // utilizzo cioè il tag color
    struct color
    {
        int red;
        int green;
        int blue;
    };

    // definisco la variabile RED che è di tipo struct color
    struct color RED = {255, 0, 0};

    // dichiaro una struttura di un tipo senza nome a cui però attribuisco 
    // un nome di tipo, ossia color, tramite typedef
    typedef struct
    {
        int red;
        int green;
        int blue;
    } color;

    // definisco la variabile GREEN che è di tipo color
    color GREEN = {0, 255, 0};

    // dichiaro una struttura di tipo struct rect e uso anche un typedef con
    // cui definisco un alias di tipo. Il tag rect è comunque opzionale
    typedef struct rect
    {
        int x;
        int y;
        int width;
        int height;
    } rect;

    // definisco la variabile a_rect di tipo rect 
    rect a_rect = {0, 0, 200, 300};

    // dichiaro una struttura di tipo struct point
    struct point
    {
        int x;
        int y;
    };

    // uso in questa dichiarazione typedef per creare un alias del tipo struct point
    typedef struct point point;

    // definisco delle variabili di tipo point
    point a_point = {10, 10};
    point another_point = {20, 20};

    // assegnamento consentito: tipi compatibili perché entrambi sono, per l'appunto, di tipo point
    a_point = another_point;

    return (EXIT_SUCCESS);
}

