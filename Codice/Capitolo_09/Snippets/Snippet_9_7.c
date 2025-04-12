#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    goto execute;

    // una serie di block scope nidificati
    {
        {
            {
                // anche se la label execute è dichiarata dopo l'istruzione goto 
                // essa è comunque raggiungibile perché ha uno scope che è a
                // livello della funzione; la sua visibilità va dall'inizio alla
                // fine della funzione dove è contenuta
                execute: printf("Execute!\n"); // Execute!
            }
        }
    }

    return (EXIT_SUCCESS);
}



