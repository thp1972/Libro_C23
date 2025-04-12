#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// empty.txt è vuoto, source conterrà solo il valore intero 0
	const unsigned char source[] =
    {
		#embed "empty.txt" if_empty(0x00)
    };

    // data.txt contiene la stringa Hello World!, data ne conterrà i primi 5 byte con
    // i seguenti valori interi in base decimale:
    // 123, 72, 101, 108, 108, 111, 125
    // '{'  'H' 'e'  'l'  'l'  'o'  '}'
    // prefix, inserisce la parentesi { mentre suffix la parentesi }
    // le virgole dopo 0x7B e prima di 0x7D sono necessarie perché in loro assenza, dopo
    // l'elaborazione di #embed, l'array data sarebbe inizializzato nel seguente modo errato:
    // data[] = {123 72, 101, 108, 108, 111 125}
    // ovvero non tutti i suoi elementi sarebbero correttamente separati dal carattere ,
    const unsigned char data[] =
    {
        #embed "data.txt" limit(5) prefix(0x7B,) suffix(,0x7D)
    };

    return (EXIT_SUCCESS);
}
