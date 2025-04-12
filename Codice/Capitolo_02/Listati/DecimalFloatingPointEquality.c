#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // aggiungere 0.01 a sum per 100 volte NON porterà a un
    // "accumulo" degli errori di approssimazione sul risultato atteso
    _Decimal32 sum = 0.0df;
    for (int i = 0; i < 100; i++) sum += 0.01df;

    _Decimal32 expected = 1.0df;

    printf("Valore computato: %.10Hf\n", sum);
    printf("Valore atteso:\t  %.10Hf\n", expected);

    printf("Usiamo l'operatore ==\n");
    if (sum == expected)
        printf("sum e expected sono uguali\n");
    else
        printf("sum e expected NON sono uguali\n");

    return (EXIT_SUCCESS);
}
