#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    // un oggetto di tipo _Decimal128
    // DEC128_MIN è una macro definita nell'header <float.h> e restituisce
    // il più piccolo valore decimale positivo normalizzato che può essere
    // rappresentato dal tipo _Decimal128
    constexpr _Decimal128 r_min = DEC128_MIN; // 1e-6143

    return (EXIT_SUCCESS);
}
