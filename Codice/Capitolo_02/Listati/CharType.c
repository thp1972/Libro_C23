/* CharType.c :: Mostra l'uso dei tipi char :: */
#include <stdio.h>
#include <stdlib.h>

// prototipo di funzione di toUpper
int toUpper(int);

int main(void)
{
    char ch;

    printf("Digita un carattere in \"minuscolo\" [ ]\b\b");

    // ottiene un carattere dallo stdin
    scanf("%c", &ch);

    // ne stampa una sua rappresentazione in maiuscolo
    char ch_U = toUpper(ch);
    printf("\007Maiuscolo del carattere %c digitato: %c [%d]\n", ch, ch_U, ch_U);

    return (EXIT_SUCCESS);
}

// converte un carattere in maiuscolo
int toUpper(int ch)
{
    if ('a' <= ch && ch <= 'z')
        return ch - 'a' + 'A';

    return ch; // se già maiuscolo o altro carattere ritornalo direttamente
}
