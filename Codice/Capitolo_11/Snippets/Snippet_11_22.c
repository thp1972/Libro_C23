#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int res;

    // legge un intero in notazione decimale
    int v1;
    printf("Intero in notazione decimale: ");
    res = scanf("%d", &v1); // INPUT:155⏎  v1 = 155

    // legge un intero in notazione esadecimale
    int v2;
    printf("Intero in notazione esadecimale: ");
    res = scanf("%i", &v2); // INPUT:0x50⏎  v2 = 80 (in base 10)

    // legge un numero in virgola mobile espresso in notazione esponenziale
    float v3;
    printf("Float in notazione esponenziale: ");
    res = scanf("%f", &v3); // INPUT:-2.32678e2⏎  v3 = -232.677994

    // legge un intero in notazione ottale
    unsigned int v4;
    printf("Intero in notazione ottale: ");
    res = scanf("%o", &v4); // INPUT:12⏎  v4 = 10 (in base 10)

    // legge un intero in notazione decimale
    unsigned int v5;
    printf("Intero in notazione decimale senza segno: ");
    res = scanf("%u", &v5); // INPUT:33⏎  v5 = 33

    // legge un intero in notazione esadecimale
    unsigned int v6;
    printf("Intero in notazione esadecimale: ");
    res = scanf("%X", &v6); // INPUT:A⏎  v6 = 10 (in base 10)

    // legge una sequenza di 10 caratteri; lo spazio può essere incluso
    // lo specificatore %*c permette di ignorare il carattere new line finale che si trova
    // nell'input stream e potrebbe interferire con un successivo scanf;
    // ad esempio, in questo caso, dato che la specifica accetta anche gli spazi, se non
    // eliminassimo il new line proprio del precedente scanf, lo stesso si troverebbe come
    // carattere in data[0]
    char data[10];
    printf("Sequenza di 10 caratteri (spazio incluso): ");
    res = scanf("%*c%10c", data); // INPUT:risto rant⏎  
                               // data = {'r','i','s','t','o',' ','r','a,'n','t'}

    // legge una stringa di caratteri; lo spazio non può essere incluso
    char data2[10 + 1];
    printf("Stringa di caratteri (spazio non incluso): ");
    res = scanf("%*c%10s", data2); // INPUT:ristorante⏎  
                                   // data2 = {'r','i','s','t','o','r','a','n','t','e','\0'}    

    // legge una stringa di caratteri che può essere formata solo dai caratteri
    // a, e, i, o e u
    char vowels_only[10 + 1 ];
    printf("Stringa di caratteri tra: [a, e, i, o, u]: ");
    res = scanf("%*c%10[aeiou]", vowels_only); // INPUT:aeeiiouooa⏎  
                                               // vowels_only = {'a','e','e','i','i','o','u,'o','o','a','\0'}

    // legge una stringa di caratteri che può essere formata solo da caratteri
    // che "non" siano a, e, i, o e u
    printf("Stringa di caratteri \"non\" tra: [a, e, i, o, u]: ");
    char consonants_only[5 + 1 ];
    res = scanf("%*c%5[^aeiou]", consonants_only); // INPUT:bcdfg⏎  
                                                   // consonants_only = {'b','c','d','f','g','\0'}

    // legge un indirizzo di memoria; &add è congruo con quanto atteso da %p come argomento
    // perché esso è risolto come un puntatore a un puntatore a void!
    void *add;
    printf("Indirizzo di memoria: ");
    res = scanf("%p", &add); // INPUT 40a0d7⏎ add = 0x40a0d7

    // legge una stringa di caratteri e ne memorizza i caratteri letti in n_char
    // N.B. res conterrà il valore 1 per effetto della conversione della stringa di caratteri
    // letta così come dettato dallo specificatore %s
    char data3[6 + 1];
    int n_char;
    printf("Stringa di caratteri (spazio non incluso) per conteggio con %%n: ");
    res = scanf("%s%n", data3, &n_char); // INPUT:colore⏎
                                         // data3 = {'c','o','l','o','r','e','\0'}
                                         // n_char = 7

    // legge due interi in notazione decimale tra i quali deve essere altresì presente
    // il carattere %
    int nr_1, nr_2;
    printf("Due interi in notazione decimale \"uniti\" dal carattere %%: ");
    res = scanf("%d%%%d", &nr_1, &nr_2); // INPUT 4%6⏎ nr_1 = 4 e nr_2 = 6

    return (EXIT_SUCCESS);
}







