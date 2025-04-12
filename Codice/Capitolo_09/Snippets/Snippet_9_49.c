#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // error: requested alignment '3' is not a positive power of 2
    // non si può allineare un oggetto a indirizzi di memoria che non sono potenze di 2
    alignas(3) int i = 1000;

    // OK: i due char saranno allineati a indirizzi di memoria multipli di 2
    // e non a qualsiasi indirizzo di memoria perché, per l'appunto, char
    alignas(2) char c1 = 'A'; // Es. 0x28feee - (2686702)
    alignas(2) char c2 = 'B'; // Es. 0x28feec - (2686700)

    // error: 'alignas' specifiers cannot reduce alignment of 'd'
    // un double ha un normale valore di allineamento che è pari a 8 byte e dunque
    // non è possibile richiedere un allineamento inferiore
    alignas(4) double d = 100.33;

    // la corrente implementazione di GCC supporta un extended alignment
    // qui f1 e f2 saranno allineati a una distanza di 16 byte
    // in questo caso i tipi si dicono "over-aligned"
    alignas(16) float f1 = 12.3f; // Es. 0x28fee0 - (2686688)
    alignas(16) float f2 = 22.3f; // Es. 0x28fed0 - (2686672)

    // nessun effetto...
    alignas(0) int i2 = 10;

    return (EXIT_SUCCESS);
}