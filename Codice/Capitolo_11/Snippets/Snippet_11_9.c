#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10
#define O_LEN 5

int main(void)
{
    // array di massimo 6 caratteri incluso il carattere '\0'
    char city[O_LEN + 1];

    // garantiamo che city possa contenere al massimo 5 caratteri validi 
    // eccetto il carattere '\0' che viene manualmente apposto per i casi
    // in cui la stringa da copiare abbia più caratteri del valore massimo di
    // caratteri inseribili così come espresso dal terzo argomento
    strncpy(city, "Napoli", sizeof city - 1); // 'N' 'a' 'p' 'o' 'l' ?
    
    // apponiamo il carattere '\0' come ultimo carattere dell'array city
    // in modo che esso possa rappresentare una valida stringa
    city[sizeof city - 1] = '\0'; // 'N' 'a' 'p' 'o' 'l' '\0'
        
    char name[LEN + 1];
    
    // in questo caso poiché "Paolo" contiene meno caratteri di quelli indicati
    // da sizeof name allora name conterrà "Paolo" e tanti caratteri nulli fino
    // alla dimensione espressa da sizeof name o fino a qualsiasi altra dimensione
    // espressa; ad esempio, se al posto di sizeof name avessimo indicato 7 allora 
    // name avrebbe contenuto 'P' 'a' 'o' 'l' 'o' '\0' '\0' '\0' ? ? ? laddove ? ? ?
    // indicano i rimanenti 3 caratteri che conterranno valori arbitrari
    strncpy(name, "Paolo", sizeof name);

    return (EXIT_SUCCESS);
}







