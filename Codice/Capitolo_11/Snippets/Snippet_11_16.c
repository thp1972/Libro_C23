#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *name = "Pellegrino";

    // res contiene un puntatore alla prima occorrenza di "rino" trovata in "Pellegrino"
    // ritorna, comunque, l'indirizzo di memoria del carattere 'r' di "rino" rispetto 
    // all'indirizzo di memoria di partenza di 'P' di "Pellegrino"
    // ad esempio se 'P' è all'indirizzo 0x405064 res conterrà l'indirizzo 0x40506a
    // che è l’indirizzo del carattere 'r' della stringa "rino"
    char *res = strstr(name, "rino");

    // res contiene un puntatore alla stringa "Pellegrino" ossia al carattere 'P' perché
    // il suo secondo argomento è una stringa di lunghezza 0
    res = strstr(name, ""); // 0x405064

    return (EXIT_SUCCESS);
}







