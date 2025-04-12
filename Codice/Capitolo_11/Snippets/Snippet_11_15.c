#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *name = "Pellegrino";

    // res contiene un puntatore all'ultimo carattere 'e' trovato in "Pellegrino"
    // ad esempio, se 'P' è all'indirizzo 0x405064 allora res avrà come valore
    // l'indirizzo 0x405068
    char *res = strrchr(name, 'e');

    return (EXIT_SUCCESS);
}







