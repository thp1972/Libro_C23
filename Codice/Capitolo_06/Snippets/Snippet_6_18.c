#include <stdio.h>
#include <stdlib.h>

// prototipo di foo
int foo(void);

int b = 100;

int main(void)
{
    int val = foo();
    return (EXIT_SUCCESS);
}

// definizione di foo
int foo(void)
{
    // sequence point prima dell'uscita dalla funzione;
    // questo garantirà che il side effect su b sia completamente portato a termine
    // e infatti la variabile esterna b sarà comunque decrementata e varrà 99;
    // al contempo, val, conterrà il valore 100 perché su b è stato impiegato l'operatore
    // di decremento postfisso
    return b--;
}


