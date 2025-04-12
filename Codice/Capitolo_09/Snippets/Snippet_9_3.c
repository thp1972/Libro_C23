#include <stdio.h>
#include <stdlib.h>

void incrementMe(void)
{
    // a ogni invocazione di incrementMe la variabile a mantiene il suo valore
    // che viene anzi incrementato di un'unità    
    // questa variabile locale statica ha, come una variabile locale automatica, 
    // uno scope a livello di blocco 
    static int a = 1;

    // prima di uscire dalla funzione, alla prima invocazione, a conterrà 2
    // poi a ogni invocazione successiva conterrà 3, 4, 5, ecc.
    // il valore di a non sarà mai perso; a avrà una durata statica in memoria
    a++;
}

int main(void)
{
    return (EXIT_SUCCESS);
}

