/* StringLiterals.c :: Alcuni letterali stringa :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("\tNel mezzo del cammin di nostra vita\nmi ritrovai per una selva oscura,");

    printf("\nche' la diritta via era smarrita.\n\n \
\tAhi quanto a dir qual era e' cosa dura\n");

    // in questo caso gli spazi bianchi dopo il carattere backslash "rovinano"
    // la formattazione della seconda terzina del Canto I della Divina Commedia
    // di Dante Alighieri
    printf("esta selva selvaggia e aspra e forte\n \
            che nel pensier rinova la paura!\n");

    return (EXIT_SUCCESS);
}