#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // usiamo constexpr per evidenziare come tutte le espressioni ritornano
    // un valore costante valutato a compile time e infatti dopo l'assegnazione
    // non c'è alcun errore di compilazione tranne nell’unico caso vietato...

    // costanti intere
    constexpr int x = 10; // OK: 10 è una costante intera
    constexpr int y = 20; // OK: 20 è una costante intera
    constexpr int z = x + y; // OK: somma di due costanti intere

    // costanti di enumerazione (RED, GREEN e BLUE)
    enum colors { RED, GREEN, BLUE };
    constexpr int color = RED; // OK: RED è una costante intera

    // costante carattere
    constexpr char c = 'a'; // OK: 'a' è una costante intera - valore ASCII 97

    // costante intera espressa mediante un letterale composto
    constexpr  int w = (constexpr int){ 42 }; // OK: letterale composto di tipo int

    // espressione sizeof
    constexpr size_t size = sizeof(int); // OK: sizeof(int) ritorna una costante intera

    // espressione alignof
    constexpr size_t alignment = alignof(double); // OK: alignof(double) ritorna una costante intera

    // espressione con immediato risultato di un cast
    // cast ammesso perché la conversione è di un tipo aritmetico
    constexpr int fcast = (int)3.14f; // OK: 3.14 è un valore float ma viene immediatamente convertito in int

    // cast da puntatore a intero non consentito, un puntatore non è un tipo aritmetico bensì un
    // tipo derivato
    int data = -5;
    int *ptr = &data;
    constexpr int cptr = (int) ptr; // error: initializer element is not constant

    // cast da puntatore a intero consentito perché, in questo caso, è parte dell'operando
    // dell'operatore sizeof
    constexpr size_t psize = sizeof ((int) ptr);

    return (EXIT_SUCCESS);
}
