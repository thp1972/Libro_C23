/* Inline.c :: Uso dello specificatore inline :: */
#include <stdio.h>
#include <stdlib.h>

bool ext = true;

static int max_value = 100;
inline double inchToCms(double i)
{
    // ATTENZIONE: definizione di un oggetto static
    // messaggio da parte del compilatore:
    // warning: 'ratio' is static but declared in inline function 'inchToCms' which is not
    // static
    static double ratio = 2.54;

    // ATTENZIONE: riferimento a un oggetto con linkage interno
    // messaggio da parte del compilatore:
    // warning: 'max_value' is static but used in inline function 'inchToCms' which is not
    // static
    int _m = max_value;

    return i * ratio;
}

// linkage esterno; inline definition
inline double dollarToEuro(double e, double rate) { return e * rate; }

// linkage esterno; inline definition
inline double celsToFahr(double t)
{
    ext = false;
    return (9.0 * t) / 5.0 + 32.0;
}

// prototipo di makeConversion; definita però in Other.c
void makeConversion(double v1, double v2);

int main(void)
{
    double cels = 28;

    // 5$ con un rapporto di 1$ = 0.78€
    makeConversion(5, 0.78);

    // il compilatore potrà scegliere di utilizzare la versione inline qui definita
    // oppure la versione definita esternamente nel file Other.c
    // con GCC se usiamo il flag di compilazione -O3 si noterà come il compilatore userà
    // la versione inline di celsToFahr; senza flag userà la versione esterna;
    // in accordo con lo standard C23 è comunque non specificato se un compilatore
    // sceglierà la versione inline oppure la versione esterna di una funzione che è stata
    // definita, per l'appunto, inline oppure esternamente
    double res = celsToFahr(cels);
    printf("%.2f gradi Celsius sono equivalenti a %.2f gradi Fahrenheit\n", cels, res);
    printf("Risultato generato dalla funzione celsToFahr [%s]\n", ext ? "esterna" : "inline");

    return (EXIT_SUCCESS);
}
