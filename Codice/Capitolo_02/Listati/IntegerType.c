/* IntegerType.c :: mostra l'uso dei tipi interi :: */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int number;

    // istruzioni di input/output
    printf("Digita un numero intero: ");
    scanf("%d", &number);

    // istruzioni di selezione
    if (number >= SHRT_MIN && number <= SHRT_MAX)
        printf("Hai digitato il numero %d che e' in un range accettabile per uno short.\n", number);
    else if (number >= INT_MIN && number <= INT_MAX)
        printf("Hai digitato il numero %d che e' in un range accettabile per un int.\n", number);
    else if (number >= LONG_MIN && number <= LONG_MIN)
        printf("Hai digitato il numero %d che e' in un range accettabile per un long.\n", number);
    else if (number >= LLONG_MIN && number <= LLONG_MIN)
        printf("Hai digitato il numero %d che e' in un range accettabile per un long long.\n", number); 

    return (EXIT_SUCCESS);
}

