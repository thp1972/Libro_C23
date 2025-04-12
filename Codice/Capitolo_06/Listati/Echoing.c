/* Echoing.c :: mostra l'utilizzo degli argomenti dalla riga di comando :: */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
        printf("%s\n", argv[i]);

    return (EXIT_SUCCESS);
}
