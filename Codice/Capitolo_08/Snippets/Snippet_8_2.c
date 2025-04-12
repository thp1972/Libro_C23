#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // nessun conflitto tra i nomi dei membri di STRUTTURA 1, STRUTTURA 2 e 
    // STRUTTURA 3 anche se hanno stesso nome; red, green a blue
    struct // STRUTTURA 1
    {
        int red;
        int green;
        int blue;
    } RGB_1;

    struct // STRUTTURA 2
    {
        int red;
        int green;
        int blue;
    } RGB_2;

    struct color // STRUTTURA 3
    {
        int red;
        int green;
        int blue;
    } RGB_3;

    // ATTENZIONE: struct color già dichiarata come STRUTTURA 3
    // cioè non si possono avere due o più strutture dichiarate con lo stesso tag
    // error: redefinition of struct or union 'struct color'
    struct color // STRUTTURA 4
    {
        int R;
        int G;
        int B;
    };

    // nessun conflitto con i nomi dei membri delle strutture suindicate
    // e anche con il tag color dell'ultima struttura
    int red, green, blue, color;

    // ATTENZIONE: RGB_3 è in conflitto con l'identificatore RGB_3 definito
    // per la STRUTTURA 3; esso è un nome di una variabile di struttura che
    // non sta in uno scope separato e pertanto se un'altra variabile
    // nel programma ha il suo stesso nome allora ciò genera un conflitto di nomi
    // error: conflicting types for 'RGB_3'; have 'struct <anonymous>' 
    struct // STRUTTURA 5
    {
        int red;
        int green;
        int blue;
    } RGB_3;

    // ATTENZIONE: conflitto con RGB_3 della STRUTTURA 3 e RGB_3 della STRUTTURA 5
    // anche qui quest'identificatore non sta in alcuno scope separato
    // error: conflicting types for 'RGB_3'; have 'int'     
    int RGB_3;

    return (EXIT_SUCCESS);
}

