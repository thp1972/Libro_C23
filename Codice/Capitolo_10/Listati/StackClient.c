/* StackClient.c :: Utilizzo di uno stack :: */
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

// 0 = non fa includere il codice di push o pop che causa un errore 
// 1 = fa includere il codice di push o pop che causa un errore
#define DO_ERROR_PUSH 0
#define DO_ERROR_POP 0

int main(void)
{
    // crea uno stack con 5 elementi
    Stack a_stack = newStack(5);

    // popolo lo stack: operazioni di push
    int sz = size(a_stack);
    for (int i = 0; i < sz; i++)
        push(a_stack, i * 2);

#if DO_ERROR_PUSH
    // provo a inserire un ulteriore elemento...
    push(a_stack, 100);
#endif

    printf("Valori estratti: [");
    // svuoto lo stack: operazione di pop
    for (int i = 0; i < sz; i++)
    {
        printf("%d, ", pop(a_stack));
    }
    printf("\b\b]\n");

#if DO_ERROR_POP
    // provo a estrarre un ulteriore elemento...
    int el = pop(a_stack);
#endif

    // distruggo lo stack
    deleteStack(a_stack);

    return (EXIT_SUCCESS);
}
