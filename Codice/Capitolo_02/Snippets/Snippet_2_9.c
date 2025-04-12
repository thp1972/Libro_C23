#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // CORRETTO
    const float PI = 3.14159f;
    constexpr float EUL = 2.71828f;

    // sintassi alternativa accettata
    short const count = 10;
    short constexpr amount = 1000;

    // sintassi accettata: i qualificatori sono idempotenti
    const const const bool ok = 1; // lo stesso di const bool

    // sintassi non accettata: gli specificatori di classe non sono idempotenti
    constexpr constexpr bool fail = 0; // error: duplicate 'constexpr'

    // ERRORE
    const int FLAG;
    FLAG = 1000; // assignment of read-only variable 'FLAG'

    // ERRORE
    constexpr int CODE;
    CODE = 0x1999; // error: 'constexpr' requires an initialized data declaration

    int rValue = 10; // rValue non è una costante nota a compile time
    const int gValue = rValue; // nessun errore per const...
    constexpr int bValue = rValue;  // error: initializer element is not constant

    return (EXIT_SUCCESS);
}
