#include <stdio.h>
#include <stdlib.h>

_Noreturn void makeATask()
{
    printf("Inizio esecuzione task...\n");

    // fa qualcosa...

    exit(EXIT_SUCCESS); // esce dal programma non dalla funzione!
}

int main(void)
{
    return (EXIT_SUCCESS);
}



