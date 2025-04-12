#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *name = "Pellegrino";

    // res contiene l’indirizzo 0x0, un puntatore nullo, perché 'z' 
    // non è presente nella stringa puntata da name
    char *res = strchr(name, 'z');

    // res contiene un puntatore al primo carattere 'e' trovato in "Pellegrino"
    // ad esempio, se 'P' è all'indirizzo 0x405064 allora res avrà come valore
    // l'indirizzo 0x405065
    res = strchr(name, 'e');

    return (EXIT_SUCCESS);
}







