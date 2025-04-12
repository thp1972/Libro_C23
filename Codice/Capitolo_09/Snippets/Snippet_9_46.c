#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int x = 42;
    typeof_unqual(x) z = x; // z è di tipo int (const rimosso)
    z = 10; // OK: z non è const

    volatile int v = 10;
    typeof_unqual(v) u = v; // u è di tipo int (volatile rimosso)

    _Atomic int a = 42;
    typeof_unqual(a) c = a; // c è di tipo int (_Atomic rimosso)

    int *restrict ptr = nullptr;
    typeof_unqual(ptr) a_ptr = ptr; // a_ptr è di tipo int * (restrict rimosso)

    const _Atomic int q = 42;
    typeof_unqual(q) b = q; // b è di tipo int (tutti i qualificatori rimossi)
    b = 10; // OK: b non ha alcun qualificatore

    return (EXIT_SUCCESS);
}
