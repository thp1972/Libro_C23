#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // converte un int
    printf("[%20d]\n", 12345); // [               12345]

    // converte un double
    // la precisione stabilisce che dopo il punto decimale al massimo 4 cifre devono
    // essere visualizzate e nel caso ve ne fossero di più avverrà un arrotondamento
    printf("[%20.4f]\n", 12345.56789); // [          12345.5679]

    // converte un double (notazione esponenziale)
    // dopo il punto, 7 cifre di precisione, e la 'e' di esponente deve essere 
    // visualizzata in maiuscolo
    printf("[%20.7E]\n", 325685.99); // [      3.2568599E+005]

    // converte un double
    // per g o G il grado di precisione indica le cifre significative da considerare
    // che includono anche quelle poste prima del punto decimale
    // il valore è convertito in notazione esponenziale perché il valore dell'esponente
    // è più piccolo di -4
    // G fa visualizzare E in maiuscolo
    printf("[%20.10G]\n", 0.000000078); // [            7.8E-008]

    // converte un double
    // visualizza in notazione esponenziale esadecimale
    // a visualizza le lettere del numero esadecimale in minuscolo e anche x e p
    printf("[%20a]\n", 456.7895); // [0x1.c8ca1cac08312p+8]

    // converte in un valore in base ottale senza segno    
    printf("[%20o]\n", 1000); // [                1750]

    // converte in un valore in base decimale senza segno    
    printf("[%20u]\n", 1000); // [                1000]

    // converte in un valore in base esadecimale senza segno    
    printf("[%20x]\n", 1000); // [                 3e8]

    // converte un int nel corrispondente carattere
    printf("[%20c]\n", 66); // [                   B]

    // scrive solo i primi 10 caratteri della stringa indicata
    printf("[%-20.10s]\n", "Pellegrino Principe"); // [Pellegrino          ]

    // visualizza l'indirizzo di memoria della stringa indicata con anche
    // i caratteri 0x
    printf("[%20p]\n", "C"); // [            0x40a0d7]

    int n_char = 0;
    // n_char conterrà il valore 22 perché quando %n sarà utilizzato quelli saranno
    // i caratteri fino a quel momento scritti ossia 2 per le parentesi [ e ] più
    // altri 20 pari alla lunghezza del campo specificato nel quale la stringa
    // ne prende posto (essa è lunga 18 caratteri) + altri 2 caratteri di padding (spazio)
    printf("[%-20s]%n\n", "Nel mezzo del camm", &n_char); // [Nel mezzo del camm  ]

    // scrive verbatim il carattere % e in più per fini di allineamento scrive
    // 19 caratteri di spazio; 0x20 (decimale 32) è il codice ASCII del carattere di spazio
    printf("[%-19c%%]\n", 0x20); // [                   %]

    return (EXIT_SUCCESS);
}







