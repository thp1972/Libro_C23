/* LabeledDeclarations.c :: label con dichiarazioni :: */
#include <stdio.h>
#include <stdlib.h>

void joke()
{
reset: // da C23, etichetta permessa anche se segue un'istruzione di dichiarazione
    int vrnd = rand() % 10 + 1; // numeri pseudo-casuali tra 1 e 10

    switch (vrnd)
    {
        case 1:
            printf("Valore \"iniziale\"\n");
            goto reset;
        case 5:
            printf("Valore \"centrale\"\n");
            break;
        case 10:
            printf("Valore \"finale\"\n");
            goto out;
        default: // C23, etichetta permessa alla fine di un blocco
                 // in questo caso il compilatore la tratterà come se fosse
                 // stata aggiunta una null statement ovvero come default:;
    }

out: // C23, etichetta permessa alla fine di un blocco
}

int main(void)
{
    joke();
    return (EXIT_SUCCESS);
}
