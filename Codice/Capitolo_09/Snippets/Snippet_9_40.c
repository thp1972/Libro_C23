#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // un oggetto di tipo atomico
    // equivalente ad: atomic_int data;
    // atomic_int è definito come un typedef nell'header <stdatomic.h>
    _Atomic(int) data;

    return (EXIT_SUCCESS);
}







