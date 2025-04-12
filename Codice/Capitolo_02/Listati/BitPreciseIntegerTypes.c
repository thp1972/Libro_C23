/* BitPreciseIntegerTypes.c :: Utilizzo dei tipi interi a precisione di bit :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // dichiarazione di un intero con segno esattamente a 10 bit
    // range di valori ammissibili: da -512 a 511
    // un bit rappresenta il segno mentre gli altri nove i valori
    _BitInt(10) a = 100;

    // warning del compilatore di type mismatch tra a e lo specificatore %d
    // il valore stampato è comunque corretto
    printf("Valore di _BitInt(10) a: %d\n", a);  // 100

    // dichiarazione di un intero senza segno esattamente a 12 bit
    // range di valori ammissibili: da 0 a 4095
    // tutti i bit rappresentano i valori
    unsigned _BitInt(12) b = 150;

    // warning del compilatore di type mismatch tra b e lo specificatore %u
    // il valore stampato è comunque corretto
    printf("Valore di unsigned _BitInt(12) b: %u\n", b);  // 150

    // dichiarazione di un intero con segno esattamente a 6 bit
    // range di valori ammissibili: da -32 a 31
    // un bit rappresenta il segno mentre gli altri nove i valori
    _BitInt(6) c = -20;

    // warning del compilatore di type mismatch tra c e lo specificatore %d
    // il valore stampato NON è comunque corretto
    printf("Valore di _BitInt(6) c: %d\n", c);  // 236

    // nessun warning del compilatore di type mismatch tra c e lo specificatore %d
    // perché effettuiamo una conversione esplicita di c nel tipo int atteso
    // il valore stampato è infatti corretto
    printf("Valore di _BitInt(6) c: %d\n", (int)c);  // -20

    return (EXIT_SUCCESS);
}