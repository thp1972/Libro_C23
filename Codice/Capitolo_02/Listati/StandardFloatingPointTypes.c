/* FloatingPointType.c :: Mostra l'uso dei tipi in virgola mobile :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a_float = 1234.444f; // suffisso f per letterale float
    double a_double = 4.58e-2; // letterale double in notazione esponenziale
    long double a_ldouble = 1.660538921e-27L; // unità di massa atomica...

    // letterali in virgola mobile espressi in notazione esponenziale esadecimale!
    float f_in_hex = 0x1.59a8f6p8f;

    // visualizza i valori in virgola mobile
    printf("Valore di a_float: %.3f\n", a_float);
    printf("Valore di a_double: %e\n", a_double); // mostralo in e-notation
    printf("Valore di a_ldouble: %Le\n", a_ldouble);
    printf("Valore di f_in_hex in esadecimale %.6a e in decimale %.2f\n", f_in_hex, f_in_hex);

    return (EXIT_SUCCESS);
}
