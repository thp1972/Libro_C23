#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10
#define O_LEN 5

int main(void)
{
    char name[LEN + 1] = "Pelle";
    char append[] = {'g', 'r', 'i', 'n', 'o', '\0'};

    // name conterrà "Pellegrino\0" e res punterà a 'P'
    char *res = strcat(name, append);

    // array di massimo 6 caratteri incluso il carattere '\0'
    char city[O_LEN + 1] = "Na";

    // ATTENZIONE; comportamento non definito perché city è capace a contenere
    // solo 6 caratteri di cui 2 già inseriti non considerando il carattere nullo
    // "poli" porrà invece 5 caratteri (uno in più) considerando anche il carattere '\0'
    strcat(city, "poli"); // 'N' 'a' 'p' 'o' 'l' 'i'

    return (EXIT_SUCCESS);
}







