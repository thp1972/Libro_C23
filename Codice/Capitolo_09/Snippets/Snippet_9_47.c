#include <stdio.h>
#include <stdlib.h>

_Noreturn void foo(int n)
{
    // per come è scritta la funzione si potrebbe avere un comportamento
    // non definito perché per valori > 0 la funzione ritorna il controllo
    // del flusso alla funzione chiamante
    // GCC, infatti, emette il seguente messaggio: warning: 'noreturn' function does return
    if (n < 0) abort();
}

int main(void)
{
    return (EXIT_SUCCESS);
}







