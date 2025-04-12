#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 10;
    // espressione unaria:
    // espressione primaria, identificatore
    // sizeof determina comunque la dimensione del tipo di x (è un int)
    printf("Dimensione di x: %zu byte\n", sizeof(x)); // Dimensione di x: 4 byte

    // espressione unaria:
    // espressione che include un operando e l'operatore ++
    // sizeof determina comunque la dimensione del tipo di x (è un int)
    // ATTENZIONE: l'operando x++ non viene valutato ovvero il valore di x
    // non subisce l'effetto dell'operatore ++ (x ha ancora il valore 10)
    // non calcola dunque il valore dell'espressione, solo la sua dimensione e 
    // dunque il side effect eventuale non accade mai
    // sizeof in questo caso è un'operazione che avviene a compile time con
    // nessun costo di computazione a runtime
    printf("Dimensione di x++: %zu byte\n", sizeof(x++)); // Dimensione di x++: 4 byte

    int *ptr = &x;
    // espressione unaria:
    // espressione che include un operando e l'operatore *
    // sizeof determina comunque la dimensione del tipo cui punta ptr (è un int)
    printf("Dimensione di *ptr: %zu byte\n", sizeof(*ptr)); // Dimensione di *ptr: 4 byte

    // espressione unaria:
    // espressione che include un operando e l'operatore -
    // sizeof determina comunque la dimensione del tipo del valore -10.0 (è un double)
    printf("Dimensione di -10.0: %zu byte\n", sizeof(-10.0)); // Dimensione di -10.0: 8 byte
    
    return (EXIT_SUCCESS);
}
