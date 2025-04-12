#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // campo di dimensione 4; allineamento di default a destra
    printf("[%4d]\n", 22); // [  22]

    // campo di dimensione 4; allineamento a sinistra
    printf("[%-4d]\n", 33); // [33  ]

    // un valore negativo visualizzerà sempre il segno - mentre per un valore
    // positivo per far visualizzare il segno + bisogna usare il flag +
    printf("[%4d]\n", -11); // [ -11]
    printf("[%+4d]\n", 11); // [ +11]

    // lo spazio permette di allineare 50 con -50 a sinistra perché 50 non usa il
    // segno +
    printf("[%-4d]\n", -50); // [-50 ]
    printf("[% -4d]\n", 50); // [ 50 ]

    // visualizza il letterale ottale 012 (rappresenta il new-line ASCII) con 
    // il carattere 0 iniziale; senza # 012 sarebbe visualizzato come 12
    printf("[%#4o]\n", 012); // [ 012]

    // visualizza il punto decimale anche se può essere omesso; infatti 12.0
    // verrebbe visualizzato come 12
    printf("[%#4.1f]\n", 12.0); // [12.0]

    // 122 ha meno caratteri dell'ampiezza di campo specificata (4) e quel "buco"
    // viene riempito con il carattere 0 e non con lo spazio
    printf("[%04d]\n", 122); // [0122]

    return (EXIT_SUCCESS);
}







