#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h> // qui è definito nullptr_t

void printPointers(int length, ...);
void nullpointerComparator(void *null_ptr1, void *null_ptr2);

int main(void)
{
    // 1.
    // nullptr ha un tipo definito e completo nello standard C, chiamato nullptr_t
    // il compilatore conosce quindi la sua dimensione e la sua struttura
    // non è dunque una macro come NULL
    nullptr_t np1 = nullptr; // nullptr_t è il tipo di nullptr
    printf("Dimensione di nullptr_t: %zu\n", sizeof(nullptr_t));

    // 2.
    // nullptr non può essere usato in espressioni aritmetiche
    // non è mai assimilabile, per esempio, a un intero
    // GCC emette il seguente errore:
    // error: invalid operands to binary + (have 'nullptr_t' and 'int')
    // DECOMMENTARE l'istruzione seguente per far generare l'errore suddetto
    // int n = nullptr + 1;

    // 3.
    // nullptr può essere assegnato a qualsiasi tipo di puntatore
    // garantendo un alto grado di flessibilità
    int *int_ptr = nullptr; // OK, conversione implicita
    char *char_ptr = nullptr; // Ok, conversione implicita

    // 4.
    // nullptr viene automaticamente convertito in false, quando usato
    // in un contesto booleano
    bool b_val = nullptr; // b_val = false (0)

    // 5.
    // nullptr ha lo stesso bit-pattern di una costante di tipo void*
    nullpointerComparator(nullptr, NULL);

    // 6.
    // nullptr può essere usato in qualsiasi contesto che richieda un valore booleano
    // per esempio, con gli operatori && o direttamente con le istruzioni if
    if (!nullptr && (5 > 3)) // nullptr vale false
        printf("Condizione soddisfatta\n");

    // 7.
    // nullptr può essere passato come argomento a una funzione variadica purché
    // lo interpreti come un void* o un char*
    int x = 5;
    printPointers(2, nullptr, &x); // nullptr passato come argomento a una funzione variadica

    return (EXIT_SUCCESS);
}

void printPointers(int length, ...)
{
    va_list ap;
    va_start(ap, length);

    for (int i = 0; i < length; i++)
    {
        void *ptr = va_arg(ap, void *); // OK, usiamo void *
        if (ptr == nullptr)
            printf("Argomento [%d] - puntatore nullo\n", i);
        else
            printf("Argomento [%d] - puntatore non nullo\n", i);
    }
    va_end(ap);
}

// confronto binario della rappresentazione in memoria, attendibile però
// a condizione che il compilatore in uso generi lo stesso codice macchina
// per rappresentare un puntatore nullo, sia che si usi nullptr che NULL (o (void*)0)
void nullpointerComparator(void *null_ptr1, void *null_ptr2)
{
    // memcmp, header <string.h>, confronta i contenuti della memoria, byte per byte
    if (memcmp(&null_ptr1, &null_ptr2, sizeof(void *)) == 0)
        printf("Rappresentazione identica in memoria (probabilmente)\n");
    else
        printf("Rappresentazione diversa in memoria (improbabile su architetture comuni)\n");
}
