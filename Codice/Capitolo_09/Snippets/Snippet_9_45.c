#include <stdio.h>
#include <stdlib.h>

// calcolo del massimo tra due numeri senza conoscere esplicitamente il tipo
#define max(a, b) ({ typeof(a) _a = (a); typeof(b) _b = (b); _a > _b ? _a : _b; })

int main(void)
{
    // typeof con un'espressione come operando
    int n = 3;
    typeof(n + 1) x; // x è di tipo int, poiché n + 1 è un'espressione di tipo int

    // typeof con un nome di tipo come operando
    typeof(int) y; // y è di tipo int

    // il tipo restituito include eventuali qualificatori come const, volatile, ecc., se presenti
    const int z = 10;
    typeof(z) w; // w è di tipo const int

    // typeof viene valutato ricorsivamente finché l'operando non è più un altro typeof
    typeof(typeof(n) *) ptr = &x; // typeof(n) è int, quindi typeof(int *) è int *
                                  // ptr è di tipo int *

    // typeof agisce a runtime perché il suo operando è un VLA
    int arr[n]; // VLA: array con dimensione definita a runtime
    typeof(arr) new_arr = {}; // new_arr è di tipo int [3]

    // uso di typeof per scrivere codice generico
    int i1 = 10, i2 = 20;
    double d1 = 3.5, d2 = 2.1;

    // uso la function-like macro max che è stata definita in modo generico
    int max_int = max(i1, i2); // 20
    double max_double = max(d1, d2); // 3.5

    // uso di typeof con tipi complessi
    struct Point { int x; int y ;};
    struct Point p1 = {1, 2};
    typeof(p1) p2 = {3, 4}; // p2 è di tipo struct Point

    const char *const colors[] = {"red", "green", "blue"};
    typeof(colors) colors_array; // colors_array è di tipo const char *const colors [3]

    return (EXIT_SUCCESS);
}