#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val = 1;
    switch (val)
    {
        // 1. la variabile _tmp è stata definita nell'ambito di un blocco switch
        // l'espressione val viene poi valutata nello switch con valore 1
        // e viene trovata un'etichetta case con lo stesso valore
        // dunque il codice "salta" nell'ambito del codice di case 1: dove esegue
        // un'istruzione di stampa del valore val per il valore di _tmp
        // tuttavia non vi è alcuna garanzia che _tmp sia stata prima correttamente
        // inizializzata e dunque il valore stampato sarà indefinito
        // se infatti si prova a compilare il programma con gcc avremo i seguenti avvisi:
        // int _tmp = 10;
        // warning: statement will never be executed [-Wswitch-unreachable]
        // printf("Valore: %d\n", val * _tmp);
        // warning: '_tmp' is used uninitialized [-Wuninitialized]
        int _tmp = 10;
        case 1: printf("Valore: %d\n", val * _tmp); break;
    }

    switch (val)
    {
        // 2. questa etichetta case ha due istruzioni ma non è
        // necessario scriverle nell'ambito di un blocco delimitato
        // tra le parentesi graffe { } che possono dunque essere eliminate
        case 1:
        { // non necessaria
            int s = val * INT_MAX/2;
            printf("s = %d\n", s);
        } // non necessaria
    }

    switch (val)
    {
        case 0: printf("Default\n"); break;
		
        // 3. etichetta case duplicata
        // gcc lo segnala con il seguente errore: error: duplicate case value
        case 0: printf("Nessun valore\n"); break;
    }

    switch (val)
    {
        default: printf("Nessun valore\n"); break;
        case 0: printf("Default\n"); break;
		
        // 4. etichetta default già dichiarata
        // gcc lo segnala con il seguente errore: error: multiple default labels in one switch
        default: printf("Esco dallo switch...\n");
    }

    return (EXIT_SUCCESS);
}
