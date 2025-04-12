#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 4 byte; un int sarà memorizzato a indirizzi di memoria multipli di 4; es. 0x28feec
    size_t ar_1 = alignof(int); // 4

    // 8 byte; un double sarà memorizzato a indirizzi di memoria multipli di 8; es. 0x28fee8
    size_t ar_2 = alignof(double); // 8 

    // 2 byte; per un tipo array il valore di allineamento ritornato sarà quello del tipo
    // del suo elemento; nel nostro caso il tipo è short
    // NOTA: _Alignof non valuterà tipi funzione e tipi incompleti
    size_t ar_3 = alignof(short [3]); // 2 

    return (EXIT_SUCCESS);
}







