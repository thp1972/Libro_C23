/* IntegerConstants.c :: Stampa un numero in base 10, 2, 8 e 16 :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;

    // istruzioni di input/output
    printf("Digita un numero intero: ");
    scanf("%d", &number);

    printf("Il numero %d espresso in base 10 ha le seguenti rappresentazioni:\n", number);
	printf("in base  2: %#b\n", number); // %#B stampa 0B con la B in maiuscolo
    printf("in base  8: %#o\n", number);
    printf("in base 16: %#x\n", number); // %#X stampa 0X con la X in maiuscolo   

    return (EXIT_SUCCESS);
}
