/* GroupingOfCaseLabels.c :: Etichette case raggruppate :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letter = 'e';

    // FALL THROUGH esplicito: è buona norma inserire un commento come questo...
    // oppure, da C23, specificare l'apposito attributo [[fallthrough]]
    switch (letter)
    {
        // lettere a, b, c ? 
        case 'a':
        case 'b':
        case 'c':
            printf("Tra le lettere a, b, c\n");
            break;
        // lettere d, e, f ? 
        case 'd':
        case 'e':
        case 'f':
            printf("Tra le lettere d, e, f\n");
            break;
        // nessuna corrispondenza 
        default:
            printf("Nessuna corrispondenza di lettera");
            break; // non necessario ma utile in caso di ulteriori case posti dopo...
    }
    
    return (EXIT_SUCCESS);
}
