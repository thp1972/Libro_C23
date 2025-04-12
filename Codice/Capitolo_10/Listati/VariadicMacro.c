/* VariadicMacro.c :: Macro parametriche e variadiche :: */
#include <stdio.h>
#include <stdlib.h>

// debug può accettare un numero variabile di argomenti...
// è interessante notare l'uso di un do/while subito "falso" che è un'utile
// tecnica che permette di raggruppare più istruzioni in modo che le stesse
// possano essere utilizzate senza problemi anche in istruzioni if;
// se, infatti, avessimo definito la macro debug come:
// #define debug(...) {                                          \
//                       printf("Nella funzione %s: ", __func__);\
//                       printf(__VA_ARGS__);                    \
//                    }
// e l'avessimo usata in un'istruzione if come nel seguente modo:
// if (is_debug)
//     debug("a=%d\n", a);
// else
//     ...
// il preprocessore l'avrebbe sostituita nel seguente modo:
// if(is_debug)
//    { printf("Nella funzione %s: ", __func__); printf("a=%d\n", a); };
// else
//    ...
// e il compilatore per effetto dell’istruzione nulla rappresentata dal
// punto e virgola messo dopo la parentesi } avrebbe generato il seguente
// messaggio error: 'else' without a previous 'if'
#define debug(...) do                                          \
                   {                                           \
                       printf("Nella funzione %s: ", __func__);\
                       printf(__VA_ARGS__);                    \
                   } while(0)

// prototipo di foo
void foo(void);

int main(void)
{
    int a = 10;
    int b = 11;

    // debug sarà espansa come:
    // do { printf("Nella funzione %s: ", __func__); printf("[a = %d] [b = %d]\n", a, b); } 
    // while(0);
    debug("[a = %d] [b = %d]\n", a, b);

    foo();

    return (EXIT_SUCCESS);
}

// definizione di foo
void foo(void)
{
    int x = 100, y = 101, z = 102;

    // debug sarà espansa come:
    // do { printf("Nella funzione %s: ", __func__); printf("[x = %d] [y = %d] [z = %d]\n", 
    // x, y, z); } while(0);
    debug("[x = %d] [y = %d] [z = %d]\n", x, y, z);
}
