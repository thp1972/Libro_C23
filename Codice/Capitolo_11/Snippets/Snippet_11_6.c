#include <stdio.h>
#include <stdlib.h>

#define LEN 10

int main(void)
{
    // operatore di assegnamento durante la fase di assegnamento: ILLEGALE!!!
    char name[LEN + 1];
    name = "Pellegrino"; // un nome di un array è un lvalue non modificabile
                         // non può comparire a sinistra dell'operatore di assegnamento 

    // operatore di assegnamento durante la fase di inizializzazione: LEGALE!!!
    char city[LEN + 1] = "Roma";
    char another_city[LEN + 1] = "Napoli";

    // la copia tra array di caratteri è ILLEGALE!
    // city è un nome di un array e dunque un lvalue non modificabile
    city = another_city;

    return (EXIT_SUCCESS);
}







