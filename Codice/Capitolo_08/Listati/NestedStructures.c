/* NestedStructures.c :: Strutture annidate :: */
#include <stdio.h>
#include <stdlib.h>

#define MAX_A_LENGTH 50

int main(void)
{
    struct names // una struttura di tipo struct names
    {
        char first_name[MAX_A_LENGTH];
        char last_name[MAX_A_LENGTH];
    };

    struct employee // dichiarazione di una struttura di tipo struct employee
    {
        struct names e_names; // struttura annidata di tipo struct names
        int identifier_code;
        char job_title[MAX_A_LENGTH];
    };

    struct employee PP = 
    {
        {"Pellegrino", "Principe"}, // inizializza la struttura annidata struct names
        45456,
        "Sviluppatore Software"
    };

    // get dei membri
    printf("%s %s [%d] ha il titolo di %s\n", PP.e_names.first_name, PP.e_names.last_name,
           PP.identifier_code, PP.job_title);

    return (EXIT_SUCCESS);
}
