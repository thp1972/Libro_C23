#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // ora byte è un alias per unsigned char
    typedef unsigned char byte;

    // ora boolean è un alias per bool
    typedef bool boolean;

    // ora String è una alias per char *
    typedef char * String;

    // è equivalente sintatticamente a utilizzare unsigned char
    byte data = 0xFF;

    // è equivalente sintatticamente a utilizzare _Bool
    boolean test = 6 > 10;

    // è equivalente sintatticamente a utilizzare char *
    String message = "Attenzione riavvio del server tra 10 secondi!";

    return (EXIT_SUCCESS);
}
