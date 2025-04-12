#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // non consentito!  
    // cosa mai potrebbe significare una variabile di tipo void?
    // è senza alcuna utilità: non si può assegnare alcun valore e non si può convertire in alcun 
    // tipo
    void f; // error: variable or field 'f' declared void

    // consentito!
    // ptr_to_void è un puntatore a void ossia un puntatore generico che può puntare a qualsiasi
    // tipo di dato; detto in altri termini è un puntatore che non punta a nulla di specifico
    void *ptr_to_void;    

    return (EXIT_SUCCESS);
}







