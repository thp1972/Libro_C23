/* DotOperator.c :: Utilizzo dell'operatore punto :: */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_A_LENGTH 50

int main(void)
{
    struct employee // dichiarazione di una struttura di tipo struct employee
    {
        char first_name[MAX_A_LENGTH];
        char last_name[MAX_A_LENGTH];
        int identifier_code;
        char job_title[MAX_A_LENGTH];
    } PP; // PP è una variabile di struttura di tipo struct employee

    // set dei membri
    strcpy(PP.first_name, "Pellegrino");
    strcpy(PP.last_name, "Principe");
    PP.identifier_code = 45456;
    strcpy(PP.job_title, "Sviluppatore Software");

    // get dei membri
    printf("%s %s [%d] ha il titolo di %s\n", PP.first_name, PP.last_name,
           PP.identifier_code, PP.job_title);

    return (EXIT_SUCCESS);
}
