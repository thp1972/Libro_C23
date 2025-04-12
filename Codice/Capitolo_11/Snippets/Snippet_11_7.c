#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // operatore di assegnamento durante la fase di assegnamento: LEGALE!!!
    char *name;
    name = "Pellegrino"; // un nome di un puntatore è un lvalue modificabile
                         // può comparire a sinistra dell'operatore di assegnamento 
                         // name punta al carattere 'P'

    // operatore di assegnamento durante la fase di inizializzazione: LEGALE!!!
    char *city = "Roma"; // city punta al carattere 'R'
    char *another_city = "Napoli"; // another_city punta al carattere 'N'

    // la copia tra puntatori a char è LEGALE!
    // tuttavia city non conterrà "Napoli" ma conterrà l'indirizzo
    // di memoria dove si troverà il carattere 'N' che sarà anche lo stesso
    // indirizzo di memoria contenuto in another_city
    // city e another_city punteranno, quindi, entrambi, al carattere 'N'
    city = another_city;

    return (EXIT_SUCCESS);
}







