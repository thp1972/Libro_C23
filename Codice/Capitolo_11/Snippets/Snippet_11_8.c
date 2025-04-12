#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10
#define O_LEN 5

int main(void)
{
    char destination[LEN + 1];
    char *source = "Pellegrino";

    // destination conterrà "Pellegrino" e res punterà a 'P'
    char *res = strcpy(destination, source);

    // array di massimo 6 caratteri incluso il carattere '\0'
    char city[O_LEN + 1];

    // ATTENZIONE; comportamento non definito perché city è capace a contenere
    // solo 6 caratteri mentre "Napoli" ne contiene 7 incluso '\0'
    strcpy(city, "Napoli");

    return (EXIT_SUCCESS);
}







