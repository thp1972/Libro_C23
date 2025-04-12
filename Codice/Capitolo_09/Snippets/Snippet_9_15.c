#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int foo() { return 10; }

// ATTENZIONE: constexpr non impiegabile con i parametri di una funzione
// anche gli altri specificatori di classe, eccetto register, non sono
// utilizzabili
void receiver(const int data[]) { pow(data[0], data[1]); }

// ERRORE: constexpr non impiegabile unitamente al tipo di ritorno di una funzione
// error: 'constexpr' requires an initialized data declaration
constexpr int baz() { return 11; };

int main(void)
{
    constexpr int a = 10; // OK: espressione costante
    int data[a] = {}; // OK: dimensione dell'array noto a compile time

    constexpr int len = 2; // OK: espressione costante
    // OK: l'array other_data è un array costante di tipo int
    // il valore dei suoi membri non può essere cambiato dopo l'inizializzazione
    // perché other_data è, per l'appunto, a sola lettura
    constexpr int other_data[len] = { 1000, 2000 };

    // OK: p è una struttura costante di tipo struct point
    // il valore dei suoi membri non può essere cambiato dopo l'inizializzazione
    // perché p è, per l'appunto, a sola lettura
    // p stessa non può essere assegnata a nessun'altra struct point
    // infine, in accordo con lo standard C, constexpr è "erididato" anche
    // dai relativi membri che sono essi stessi constexpr
    struct point { int x; int y; };
    constexpr struct point p = { 10, 20 };

    // OK: z è un'unione costante di tipo union Z
    // il valore dei suoi membri non può essere cambiato dopo l'inizializzazione
    // perché z è, per l'appunto, a sola lettura
    // z stessa non può essere assegnata a nessun'altra union Z
    // infine, in accordo con lo standard C, constexpr è "ereditato" anche
    // dai relativi membri che sono essi stessi constexpr
    union Z { char c; short s; };
    constexpr union Z z = { .s = 100 };

    // OK: ns è un'enumerazione costante di tipo enum NS
    // il suo valore non può essere cambiato dopo l'inizializzazione
    // perché esso è, per l'appunto, a sola lettura
    enum NS { NORTH, SOUTH };
    constexpr enum NS ns = SOUTH;

    // OK: constexpr impiegabile per dichiarare delle costanti
    // che saranno utilizzate nelle etichette case i cui valori, ricordiamo,
    // possono essere solo valori interi valutabili a compile time
    int number = 4;
    constexpr int n1 = 3;
    constexpr int n2 = 4;
    switch (number)
    {
        case n1: printf("n1\n"); break;
        case n2: printf("n2\n"); break;
        default: printf("default\n");
    }

    // OK: constexpr impiegabile con espressioni matematiche perché
    // tutti gli operandi sono dichiarati con constexpr
    constexpr int base = 10;
    constexpr int exponent = 3;
    constexpr int multiplier = 2;
    constexpr int calc = base * exponent + multiplier;

    // OK: constexpr impiegabile con i letterali composti (compound literals)
    receiver((constexpr int []){ 2, 3 });

    // ERRORE: l'inizializzazione di zed deve essere contestuale alla sua
    // dichiarazione: error: 'constexpr' requires an initialized data declaration
    constexpr int zed;
    zed = 100;

    // ERRORE: foo viene valutata a runtime, dunque il valore non può essere
    // assegnato alla costante b decorata con lo specificatore constexpr
    // error: initializer element is not constant
    constexpr int b = foo();

    // ERRORE: constexpr non impiegabile con i puntatori
    // error: initializer element is not constant
    constexpr int *ptrToA = &a;

    // ERRORE: constexpr non impiegabile con i membri delle strutture
    // error: expected specifier-qualifier-list before 'constexpr'
    struct BI { constexpr int _a_ = 10; constexpr  int _b_ = 11; };

    // ERRORE: constexpr non impiegabile con i membri delle unioni
    // error: expected specifier-qualifier-list before 'constexpr'
    union U { constexpr int _x_ = 10; constexpr  char _w_; };

    // ERRORE: constexpr non impiegabile con le costanti di enumerazione
    // error: expected identifier before 'constexpr'
    enum EO  { constexpr EAST = -1, constexpr WEST = 1 };

    // ERRORE: verifica da parte del compilatore se il valore costante 66000
    // è assegnabile nel tipo unsigned short; ma non lo è!
    // error: 'constexpr' initializer not representable in type of object
    constexpr unsigned short us = 66000;

    return (EXIT_SUCCESS);
}
