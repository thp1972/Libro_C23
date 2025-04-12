/* Scope.c :: Mostra i vari scope del C :: */
#include <stdio.h>
#include <stdlib.h>

// I dichiarazione
int number = 100; // file scope

int main(void) // block scope di main
{
    // la ricerca dell'entità corretta parte dal punto di utilizzo verso "l'alto";
    // ossia dal blocco corrente verso gli eventuali blocchi contenitori
    // la prima dichiarazione di number trovata è int number = 100
    printf("%d\n", number); // qua stampa 100;

    // è lecito dichiarare un identificatore che designa un'entità in uno scope
    // che ha lo stesso nome di un altro identificatore che designa un'altra
    // entità in un altro scope
    // II dichiarazione
    int number = 10; // block scope

    // la ricerca dell'entità corretta parte dal punto di utilizzo verso "l'alto";
    // ossia dal blocco corrente verso gli eventuali blocchi contenitori
    // la prima dichiarazione di number trovata è int number = 10
    printf("%d\n", number); // qua stampa 10

    {   // blocco interno al main
        // ok number è dichiarato in un proprio scope e "nasconde" number dichiarato
        // nello scope esterno...
        int number = 1; // block scope

        // la ricerca dell'entità corretta parte dal punto di utilizzo verso "l'alto";
        // ossia dal blocco corrente verso gli eventuali blocchi contenitori
        // la prima dichiarazione di number trovata è int number = 1
        printf("%d\n", number); // qua stampa 1
    }

    return (EXIT_SUCCESS);
}
