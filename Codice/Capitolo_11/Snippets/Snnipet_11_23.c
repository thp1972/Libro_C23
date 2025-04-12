#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // allochiamo un blocco di memoria di 6 byte dove i primi 5 byte conterranno
    // dei caratteri propri di una stringa mentre l'ultimo byte conterrà il carattere nullo '\0';
    // in questo caso non è stato necessario usare sizeof(char) perché la specifica statuisce 
    // che sizeof(char) deve essere sempre pari a 1 (byte);
    // è anche importante notare come il risultato di tipo void * ritornato da malloc
    // non sia convertito in char *; ciò perché tale conversione è fatta in automatico dal
    // compilatore durante la fase di assegnamento;
    // per chiarezza, comunque, spesso, molti programmatori preferiscono esplicitarla:
    // ad esempio: char *string = (char *) malloc(nr_char + 1);
    size_t nr_char = 5;
    char *string = malloc(nr_char + 1); // string punterà al primo byte del blocco di memoria 
                                        // ritornato da malloc
    if (string) // se l'allocazione ha avuto esito favorevole...
        strcpy(string, "Pelle"); // ...inizializzo i byte del blocco di memoria ritornato da malloc

    // allochiamo un blocco di memoria capace a contenere 10 elementi di tipo int;
    // se nell'attuale implementazione un int è di 4 byte allora il blocco di memoria ritornato
    // da calloc sarà di 40 byte
    size_t nr_elem = 10;
    int *data = calloc(nr_elem, sizeof (int)); // tutti gli elementi di data conterranno
                                               // il valore 0

    if (data) // aumentiamo la dimensione di data del doppio!
    {
        int *tmp = realloc(data, sizeof (int) * (nr_elem * 2));

        // in questo caso è importante usare un puntatore temporaneo per realloc al fine di
        // evitare dei memory leak in caso realloc torni un puntatore nullo e lo stesso sia
        // assegnato direttamente a data
        if (tmp)
            data = tmp;
    }
    int val1 = data[0]; // 0
    int val2 = data[10]; // qualsiasi valore perché l'aumento di dimensione causato da 
                         // realloc non ha anche inizializzato quei byte in più

    // liberiamo la memoria
    free(string);
    free(data);

    return (EXIT_SUCCESS);
}







