#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    // un oggetto di tipo _Decimal32
    // DEC32_MIN è una macro definita nell'header <float.h> e restituisce
    // il più piccolo valore decimale positivo normalizzato che può essere
    // rappresentato dal tipo _Decimal32
    constexpr _Decimal32 r_min = DEC32_MIN; // 1e-95

    return (EXIT_SUCCESS);
}
