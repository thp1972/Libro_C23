#include <stdio.h>
#include <stdlib.h>

#define MAX_A_LENGTH 50

int main(void)
{
    struct employee // dichiarazione di una struttura di tipo struct employee
    {
        char first_name[MAX_A_LENGTH];
        char last_name[MAX_A_LENGTH];
        int identifier_code;
        char job_title[MAX_A_LENGTH];
    };
    
    // inizializzazione esplicita di tutti i membri della struttura struct employee
    struct employee PP =
    {
        "Pellegrino",
        "Principe",
        45456,
        "Sviluppatore Software"
    };

    int code = 12434;
    
    // inizializzazione di alcuni membri della struttura struct employee
    struct employee AR =
    {
        "Alberto",
        "Rossi",
        // ok valore ricavato da un'espressione non costante: la struttura ha implicitamente
        // la classe di memorizzazione automatic
        code
        // qua ultimo valore mancante... stringa vuota...
    };

    return (EXIT_SUCCESS);
}

