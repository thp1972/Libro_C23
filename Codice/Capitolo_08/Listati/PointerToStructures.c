/* PointerToStructures.c :: Impiego di un puntatore a struttura :: */
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

    // red è una variabile di tipo struct color
    struct color red = {255, 0, 0};

    // ptr_to_red è un puntatore a una struttura di tipo struct color
    struct color *ptr_to_red = &red;

    printf("red e' allocato a partire dall'indirizzo: [%p]\n", &red);
    printf("ptr_to_red contiene l'indirizzo:          [%p]\n", ptr_to_red);

    // accesso ai membri di red per il tramite del puntatore ptr_to_red
    printf("Valori dei membri della struttura puntata da ptr_to_red:\n");
    printf("{ red=%d, green=%d, blue=%d }\n", 
           ptr_to_red->red, ptr_to_red->green, ptr_to_red->blue);

    // sintassi alternativa di accesso a un membro di una struttura puntata
    // le parentesi ( ) sono essenziali perché l'operatore . ha una più alta
    // precedenza dell'operatore *
    int single_value = (*ptr_to_red).red;

    printf("Il valore del membro red e' [%d]\n", single_value);

    return (EXIT_SUCCESS);
}
