#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *name = "Pellegrino";
    char city[] = "Roma";

    // lunghezza della stringa puntata da name
    size_t len = strlen(name); // 10

    // lunghezza dell'array di caratteri di city
    // in questo caso la dimensione dell'array è una grandezza diversa rispetto
    // alla quantità di caratteri lì contenuti
    // infatti la dimensione di city è pari a 5 (byte) perché include anche il carattere '\0'
    len = strlen(city); // 4

    // lunghezza di un letterale stringa
    len = strlen("Linguaggio C"); // 12

    return (EXIT_SUCCESS);
}







