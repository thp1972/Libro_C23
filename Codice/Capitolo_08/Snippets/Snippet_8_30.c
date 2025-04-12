#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // dichiarazione di un'enumerazione con un tipo intero sottostante implicito
    // il compilatore corrente tipicamente può scegliere un int ma anche
    // per esempio, un char; l'importante è che il tipo sottostante scelto
    // sia compatibile con il tipo dei valori dell'enumerazione ovvero
    // adatto o sufficiente a contenerli
    enum implicit_enum { VALUE1 = 1, VALUE2 = 2, VALUE3 = 3 };

    // dichiarazione di un'enumerazione con un tipo intero sottostante implicito
    // da C23 è possibile avere rappresentazioni di valori che superano i limiti di un int
    // in questo caso, il tipo sottostante sarà scelto dall'implementazione, ma sarà più
    // ampio di int, per esempio, potrebbe essere un long, per rappresentare correttamente
    // il valore 4294967295
    enum large_enum { NUM1 = 4294967295, NUM2, NUM3 };

    // dichiarazione di un'enumerazione con un tipo intero esplicito
    // il tipo sottostante è esplicitamente unsigned char, quindi l'enumerazione è limitata
    // ai valori che possono essere rappresentati da un unsigned char (0-255)
    // il compilatore ritorna infatti il seguente errore:
    // error: enumerator value outside the range of underlying type
     enum explicit_enum : unsigned char { CH1 = -44, CH2, CH3 };

    // dichiarazione di un'enumerazione con un tipo intero esplicito
    // il tipo sottostante esplicito bool NON è vietato in questo caso
    // i valori sono vincolati a false e true
    enum bool_enum : bool { False = false, True = true };

    // dichiarazione di un'enumerazione con un tipo intero esplicito
    // il tipo sottostante esplicito _BitInt(4) è però vietato anche
    // in questo caso: error: invalid 'enum' underlying type
    enum nbit_enum : _BitInt(4) { BI1=3, BI2, BI3 };

    return (EXIT_SUCCESS);
}
