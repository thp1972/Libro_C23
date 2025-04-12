#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = 'A';

    // conversione tra un puntatore a un char e un puntatore a un int
    // potrebbe esserci perdita di informazione...
    int *ip = (int*) &c;

    // riconversione del puntatore a un int nel puntatore a un char
    // non è detto che *cp ritorni il carattere 'A'
    // in alcune implementazioni cp potrebbe non essere uguale a &c
    char *cp = (char*) ip;

    // b = true o b = false a seconda dell'implementazione!
    bool b = cp == &c;

    return (EXIT_SUCCESS);
}

