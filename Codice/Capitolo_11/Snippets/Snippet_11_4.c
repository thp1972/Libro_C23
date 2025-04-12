#include <stdio.h>
#include <stdlib.h>

#define NAME "Pellegrino"

int main(void)
{
    // in questo caso name punta all'indirizzo di memoria usato per memorizzare
    // il letterale "Pellegrino"; punta al suo primo carattere
    char *name = "Pellegrino";

    printf("Indirizzo contenuto in name %p\n", name); // 0xd76940
    printf("Indirizzo di \"Pellegrino\" %p\n", "Pellegrino"); // 0xd76940
    printf("Indirizzo di \"Pellegrino\" espanso da NAME %p\n", NAME); // 0xd76940

    // in questo caso è lecito far puntatore name a un altro letterale stringa
    name = "Armando";
    
    // è anche possibile cambiare il valore di un carattere ma in questo caso
    // il comportamento sarà non definito (possibile segmentation fault...)
    *name = 'A';

    return (EXIT_SUCCESS);
}







