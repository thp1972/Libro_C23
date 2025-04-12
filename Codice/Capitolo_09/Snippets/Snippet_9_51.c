#include <stdio.h>
#include <stdlib.h>

// asserisci, affermi che nel corrente sistema la corrente implementazione supporta i tipi
// long aventi una grandezza di 8 byte?
// se, si, allora non interrompere la compilazione
// se, no, allora interrompi la compilazione
static_assert(sizeof (long) == 8, "Devi eseguire il programma su un sistema e con un compilatore a 64 bit");

int main(void)
{
    // asserisci, affermi che un char ha un allineamento di 1 byte?
    // se si, allora non interrompere la compilazione
    // se no, allora interrompi la compilazione
    static_assert(alignof(char) == 1, "L'allineamento di un char deve essere di 1 byte");

    struct time_T
    {
        char UTC;
        int h;
        int m;
        int s;
    };

    // asserisci, affermi che la struttura di tipo struct time non ha padding?
    // se si, allora non interrompere la compilazione
    // se no, allora interrompi la compilazione
    static_assert(sizeof (struct time_T) == (sizeof (char) + sizeof (int) * 3),
                  "La struttura non deve avere alcun padding");

    return (EXIT_SUCCESS);
}







