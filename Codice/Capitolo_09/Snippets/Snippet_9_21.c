#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int foo() { return 10; }

void receiver(const int data[]) { pow(data[0], data[1]); }

// OK: const è impiegabile unitamente al tipo di ritorno di una funzione
// tuttavia esso è ignorato, ovvero non produce alcun effetto su una
// variabile che ne ottiene il risultato
// la variabile cioè non diventerà in automatico essa stessa const
const int baz() { return 11; }

int main(void)
{
    const int a = 10; // OK: espressione costante
    // ATTENZIONE, in questo caso, il compilatore interpreta data come un array
    // di lunghezza variabile (VLA) anche se l'identificatore a rappresenta
    // una costante nota a compile time
    // dunque, non è possibile scrivere qualcosa come: int data[a] = { 1000, 2000 };
    // perché sarebbe generato il seguente errore di compilazione:
    // error: variable-sized object may not be initialized except with an empty initializer
    int data[a] = {}; // OK: dimensione dell'array noto a compile time

    // OK: l'array other_data è un array costante di tipo int
    // il valore dei suoi membri non può essere cambiato dopo l'inizializzazione
    // perché other_data è, per l'appunto, a sola lettura
    const int other_data[] = { 1000, 2000 };

    // OK: p è una struttura costante di tipo struct point
    // il valore dei suoi membri non può essere cambiato dopo l'inizializzazione
    // perché p è, per l'appunto, a sola lettura
    // p stessa non può essere assegnata a nessun'altra struct point
    // infine, in accordo con lo standard C, const è "ereditato" anche
    // dai relativi membri che sono essi stessi const
    struct point { int x; int y; };
    const struct point p = { 10, 20 };

    // OK: p2 è una struttura di tipo struct point2
    // il valore del membro x non può essere cambiato dopo l'inizializzazione
    // il valore del membro y può invece essere cambiato
    // quest'esempio mostra la possibilità di usare const per i singoli membri
    // di una struttura
    struct point2 { const int x; int y; };
    struct point2 p2 = { 10, 20 };
    p2.x = 20; // error: assignment of read-only member 'x'
    p2.y = 10;

    // OK: z è un'unione costante di tipo union Z
    // il valore dei suoi membri non può essere cambiato dopo l'inizializzazione
    // perché z è, per l'appunto, a sola lettura
    // z stessa non può essere assegnata a nessun'altra union Z
    // infine, in accordo con lo standard C, const è "ereditato" anche
    // dai relativi membri che sono essi stessi const
    union Z { char c; short s; };
    const union Z z = { .s = 100 };

    // OK: z2 è un'unione di tipo union Z2
    // il valore del membro c non può essere cambiato dopo l'inizializzazione
    // il valore del membro s può invece essere cambiato
    // quest'esempio mostra la possibilità di usare const per i singoli membri
    // di un'unione
    union Z2 { const char c; short s; };
    union Z2 z2 = { .s = 100 };
    z2.c = 'a'; // error: assignment of read-only member 'c'
    z2.s = 1000;

    // OK: ns è un'enumerazione costante di tipo enum NS
    // il suo valore non può essere cambiato dopo l'inizializzazione
    // perché ns è, per l'appunto, a sola lettura
    enum NS { NORTH, SOUTH };
    const enum NS ns = SOUTH;

    // OK: const impiegabile con espressioni matematiche
    // con operandi const e non const
    const int base = 10;
    const int exponent = 3;
    int multiplier = 2;
    const int calc = base * exponent + multiplier;

    // OK: const impiegabile con i letterali composti (compound literals)
    receiver((const int []){ 2, 3 });

    // OK: foo viene valutata a runtime, il valore può essere
    // assegnato alla costante b decorata con lo specificatore const
    const int b = foo();

    // OK: const è impiegabile con i puntatori
    const int *ptrToA = &a;

    // ERRORE: const non impiegabile per dichiarare delle costanti
    // che saranno utilizzate nelle etichette case
    // error: case label does not reduce to an integer constant
    int number = 4;
    const int n1 = 3;
    const int n2 = 4;
    switch (number)
    {
        case n1: printf("n1\n"); break;
        case n2: printf("n2\n"); break;
        default: printf("default\n");
    }

    // ERRORE: l'inizializzazione di zed deve essere contestuale alla sua
    // dichiarazione: error: assignment of read-only variable 'zed'
    const int zed;
    zed = 100;

    // ERRORE: const non impiegabile con i membri delle strutture con contestuale
    // inizializzazione
    // error:  expected ':', ',', ';', '}' or '__attribute__' before '=' token
    struct BI { const int _a_ = 10; const  int _b_ = 11; };

    // ERRORE: const non impiegabile con i membri delle unioni con contestuale
    // inizializzazione
    // error:  expected ':', ',', ';', '}' or '__attribute__' before '=' token
    union U { const int _x_ = 10; const  char _w_ = 'w'; };

    // ERRORE: const non impiegabile con le costanti di enumerazione
    // error:  expected ':', ',', ';', '}' or '__attribute__' before '=' token
    enum EO { const EAST = -1, const WEST = 1 };

    // ATTENZIONE: nessuna verifica da parte del compilatore se il valore costante 66000
    // è assegnabile nel tipo unsigned short; ma non lo è!
    // non sarà dunque generato alcun errore di compilazione, al massimo, un avviso come
    // warning: unsigned conversion from 'int' to 'short unsigned int' changes value
    // from '66000' to '464' [-Woverflow]
    const unsigned short us = 66000;

    return (EXIT_SUCCESS);
}