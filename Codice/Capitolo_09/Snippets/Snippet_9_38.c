#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    // un oggetto di tipo _Decimal64
    // DEC64_MIN è una macro definita nell'header <float.h> e restituisce
    // il più piccolo valore decimale positivo normalizzato che può essere
    // rappresentato dal tipo _Decimal64
    constexpr _Decimal64 r_min = DEC64_MIN; // 1e-383

    return (EXIT_SUCCESS);
}
