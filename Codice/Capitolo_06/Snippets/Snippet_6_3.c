#include <stdio.h>
#include <stdlib.h>

// alcuni prototipi...
int F(void);
int G(void);
int H(void);

void foo(int, int);

int main(void)
{
    // in questo caso l'ordine di precedenza degli operatori farà si che  
    // ciò che sarà ritornato da G() sarà moltiplicato per ciò cha sarà ritornato da H() e
    // tale risultato sarà poi addizionato a ciò che sarà ritornato da H();
    // tuttavia il compilatore potrà scegliere qualsiasi ordine di valutazione degli operandi 
    // ossia non è detto che invocherà nell'ordine, come abbiamo scritto, prima F() poi G() 
    // e poi H();
    // gli operatori + e * non rappresentano infatti dei sequence point;
    // questo può essere un problema se una delle funzioni, ad esempio F, manipola un oggetto 
    // globale che poi è riferito da un'altra funzione, ad esempio G, soprattutto se quest'altra 
    // funzione faceva affidamento su quella manipolazione;
    // infatti, se viene prima valutata G di F che valore avrà quell'oggetto per G?
    // ritornando al risultato di questa printf un compilatore potrà ritornare:
    // F
    // G
    // H
    // 7
    // mentre un altro potrà ritornare:
    // G
    // H
    // F
    // 7
    printf("%d\n", F() + G() * H()); // ???

    int j = 10;
    int k = 11;
    int l = 100;

    // sequence point prima dell'ingresso nella funzione;
    // questo garantirà che j sarà incrementato e a k sarà assegnato il
    // valore di l e dunque i parametri formali nel body della funzione
    // conterranno, rispettivamente, i valori 11 e 100
    foo(++j, k = l);

    return (EXIT_SUCCESS);
}

// definizione di F
int F(void)
{
    printf("F\n");
    return 1;
}
// definizione di G
int G(void)
{
    printf("G\n");
    return 2;

}
// definizione di H
int H(void)
{
    printf("H\n");
    return 3;
}
// definizione di foo
void foo(int a, int b)
{
    printf("[a = %d] [b = %d]\n", a, b); // [a = 11] [b = 100]
}
