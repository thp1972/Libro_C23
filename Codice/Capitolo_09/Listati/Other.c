/* Other.c :: Uso dello specificatore inline :: */

// prototipo di dollarToEuro; definito in Inline.c
// in ogni caso la funzione non è utilizzabile perché è definita, in Inline.c, come inline
double dollarToEuro(double e, double rate);

// riferimento alla variabile ext definita nel file Inline.c
extern bool ext;

// definizione alternativa di celsToFahr definita nel file Inline.c
double celsToFahr(double t)
{
    ext = true;
    return (9.0 * t) / 5.0 + 32.0;
}

void makeConversion(double v1, double v2)
{
    // qua il linker darà il seguente messaggio di errore: 
	// undefined reference to `dollarToEuro'
    // per verificare, decommentare la seguente istruzione
    //dollarToEuro(v1, v2);
}
