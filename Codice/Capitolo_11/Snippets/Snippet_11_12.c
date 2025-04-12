#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name_1[] = "Pelle";
    char name_2[] = "Pollo";

    // name_1 è più piccola di name_2
    // res contiene -1 perché, dopo il carattere 'P' che è uguale in ambedue le stringhe
    // il carattere 'e' (codice ASCII 101) viene prima del carattere 'o' (codice ASCII 111)
    int res = strcmp(name_1, name_2);

    char name_3[] = "Aldo";
    char name_4[] = "Aldo";

    // name_3 è uguale a name_4
    // res contiene 0 perché tutti i valori numerici di ambedue le stringhe sono uguali
    res = strcmp(name_3, name_4);

    char name_5[] = "Marco";
    char name_6[] = "Marc";

    // name_5 è più grande di name_6
    // res contiene 1 perché, dopo i caratteri 'M', 'a', 'r' e 'c' che sono uguali
    // in ambedue le stringhe il carattere 'o' (codice ASCII 111) viene dopo 
    // il carattere '\0' (codice ASCII 0)
    res = strcmp(name_5, name_6);

    return (EXIT_SUCCESS);
}







