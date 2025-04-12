#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/*
    se il preprocessore rileva che la macro FEATURE_ZETA non è definita, non interromperà
	la compilazione e mostrerà in output un messaggio come il seguente (generato, per noi, da GCC):
    warning: #warning FEATURE_ZETA non definita, alcune funzionalita' mancanti...
*/
#ifndef FEATURE_ZETA
    #warning FEATURE_ZETA non definita, alcune funzionalita' mancanti...
#endif

    return (EXIT_SUCCESS);
}






