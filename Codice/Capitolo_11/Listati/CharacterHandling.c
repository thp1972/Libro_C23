/* CharacterHandling.c :: Un caso d'uso dell’header <ctype.h> :: */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 12

// typedef per una funzione di tipo (int) -> int
// di fatto tutte le funzioni di classificazione in <ctype.h> hanno questa segnatura
typedef int (*ch)(int);

int main(void)
{
    ch c[] = // array di puntatori a ch
    {
        isalnum, isalpha, isblank, iscntrl, isdigit, isgraph, islower,
        isprint, ispunct, isspace, isupper, isxdigit
    };

    char *desc[] = // array di puntatori a carattere
    {
        "e' un carattere alfanumerico?", "e' un carattere alfabetico?", 
        "e' un carattere vuoto?", "e' un carattere di controllo?", "e' una cifra decimale?", 
        "e' un carattere stampabile eccetto lo spazio ' '?",
        "e' un carattere minuscolo?", "e' un carattere stampabile incluso lo spazio ' '?",
        "e' un segno di punteggiatura?", "e' un carattere di spazio bianco?",
        "e' un carattere maiuscolo?", "e' una cifra esadecimale?"
    };

    char chars[] = "aj\t\r9Xl ;\nUf"; // stringa da controllare...
    for (int i = 0; i < SIZE; i++)
    {
        int res = c[i](chars[i]); // invoca la corretta funzione di classificazione
        if (isblank(chars[i]) || iscntrl(chars[i]) || isspace(chars[i]))
            printf("\\x%02x\t-> %-50s [%s]\n", chars[i], desc[i], res ? "true" : "false");
        else
            printf("%c\t-> %-50s [%s]\n", chars[i], desc[i], res ? "true" : "false");
    }

    return (EXIT_SUCCESS);
}
