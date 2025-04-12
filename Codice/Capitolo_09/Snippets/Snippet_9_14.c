#include <stdio.h>
#include <stdlib.h>

// auto non impiegabile per il tipo di ritorno di una funzione
// error: 'auto' requires a plain identifier, possibly with attributes, as declarator
auto foo() { return 100; }

// auto non impiegabile per i tipi dei parametri di funzione
// error: storage class specified for parameter 'x'
void bar(auto x) { int y = x + 1; }

int baz(int a, int b) { return a + b; }

// OK: il tipo di PI è dedotto come double
auto PI = 3.14159265358979;

int main(void)
{
    // OK: il tipo di x è dedotto come int
    auto x = 42;

    // OK: il tipo di ptrToFunc è dedotto come int (*)(int, int)
    auto ptrToFunc = baz;

    // OK: il tipo di ptrTox è dedotto come int *
    auto ptrTox = &x;

    // OK: il tipo di silver è dedotto come struttura di tipo struct RGB_color
    struct RGB_color
    {
        int red;
        int green;
        int blue;
    };
    auto silver = (struct RGB_color){192, 192, 192};

    // OK: il tipo di z è dedotto come unione di tipo union Z
    union Z // unione di tipo union Z
    {
        char c;
        short s;
    };
    auto z = (union Z){'a'};

    // OK: il tipo di color è dedotto come enumerazione di tipo enum Color
    // (il suo tipo effettivo implicito sarà int)
    enum Color
    {
        RED,
        GREEN,
        BLUE
    };
    auto color = RED;

    // inizializzazione obbligatoria, il tipo non può essere dedotto
    // error: 'auto' requires an initialized data declaration
    auto y;

    // auto non impiegabile per un array
    //  error: 'auto' requires a plain identifier, possibly with attributes, as declarator
    auto arr[] = {1, 2, 3}; // Errore: il tipo dell'array non può essere dedotto

    // auto non impiegabile per i membri di un struttura
    // error: expected specifier-qualifier-list before 'auto'
    struct point
    {
        auto x;
        auto y;
    } P = {1, 2};

    // auto non impiegabile per i membri di una union
    // error: expected specifier-qualifier-list before 'auto'
    union U // unione di tipo union U
    {
        auto c;
        auto i;
    } u = {'a'};

    // auto non impiegabile per il tipo esplicito di un enum
    // error: expected identifier or '(' before ':' token
    enum bool_enum : auto { False = false, True = true };
	
	double zed = 5.55; // outer scope
    double box = 10.55; // outer scope
    { // inner scope
        // si tenta di dichiarare una nuova variabile zed con auto
        // durante l'inizializzazione zed * zed, la variabile zed nello scope esterno
        // non è visibile perché è stata "nascosta" dalla dichiarazione di zed
        // nello scope interno
        // questo causa un errore, poiché la variabile zed nello scope interno non è
        // ancora definita: la sua inizializzazione non è stata completata
        // non possiamo dunque usare zed stessa nella sua stessa inizializzazione
        // error: underspecified 'zed' referenced in its initializer
        auto zed = zed * zed;
    }
    { // inner scope
        // OK: usiamo box, visibile nello scope esterno, per inizializzare zed
        // la variabile zed viene dichiarata con auto e inizializzata correttamente
        auto zed = box;
        printf("%g\n", zed); // 10.55
    }

    return (EXIT_SUCCESS);
}
