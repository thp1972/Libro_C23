#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // carattere non valido:
    // con GCC il valore memorizzato è -84; dà i seguenti messaggi di diagnostica:
    // warning: multi-character character constant
    // warning: overflow in conversion from ‘int’ to ‘char’ changes value
    // from ‘14844588’ to ‘-84’
    char c = '€';

    // carattere valido:
    // valore memorizzato 74 come da codice ASCII
    char j = 'J';

    return (EXIT_SUCCESS);
}
