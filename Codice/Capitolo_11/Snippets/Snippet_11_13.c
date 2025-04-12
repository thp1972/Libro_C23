#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 6

int main(void)
{
    int found = 0;
    char *names[SIZE] = {"Aldo", "Paolo", "Marco", "Marcello", "Luca", "Mario"};

    for(int i=0; i< SIZE; i++)
    {
        // se la corrente stringa inizia con "Mar" incrementa found
        // di fatto saranno comparati solo 3 caratteri tra "Mar" e le stringhe processate
        if(strncmp(names[i], "Mar", 3) == 0)
            found++; // al termine del ciclo found conterrà il valore 3
                     // perché "Marco", "Marcello" e "Mario" iniziano tutte con "Mar"
    }

    return (EXIT_SUCCESS);
}







