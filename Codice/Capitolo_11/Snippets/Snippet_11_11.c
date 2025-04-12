#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10
#define O_LEN 5

int main(void)
{
    // array di massimo 6 caratteri incluso il carattere '\0'
    char city[O_LEN + 1] = "Na";

    // in questo caso, per evitare possibili comportamenti non definiti,
    // limitiamo il numero di caratteri inseribili in city con quelli
    // ancora disponibili; ricordiamo che strlen ritorna il numero di caratteri
    // di una stringa meno il carattere nullo;
    // nel nostro caso l'espressione cui il terzo argomento darà come valore 3
    // ed è scritta così, senza considerare il carattere nullo, perché strncat lo
    // porrà in automatico alla fine della stringa che concatena
    strncat(city, "poli", sizeof city - 1 - strlen(city)); // 'N' 'a' 'p' 'o' 'l' '\0'

    return (EXIT_SUCCESS);
}







