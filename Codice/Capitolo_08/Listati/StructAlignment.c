/* StructAlignment.c :: Allineamento delle strutture :: */
#include <stdio.h>
#include <stdlib.h>

#define S_LENGTH 2

int main(void)
{
    struct S
    {
        char c_1;
        double d;
        char c_2;
    };

    // array di strutture di tipo struct S
    struct S s[S_LENGTH] = 
    {
        {'A', 44.44, 'B'}, // s[0]
        {'Y', 88.88, 'Z'}  // s[1]
    };

    printf("Indirizzo di c_1 in s[0] HEX=%p -- DEC=%d\n", &s[0].c_1, &s[0].c_1);
    printf("Indirizzo di d   in s[0] HEX=%p -- DEC=%d\n", &s[0].d, &s[0].d);
    printf("Indirizzo di c_2 in s[0] HEX=%p -- DEC=%d\n", &s[0].c_2, &s[0].c_2);

    printf("\nIndirizzo di c_1 in s[1] HEX=%p -- DEC=%d\n", &s[1].c_1, &s[1].c_1);
    printf("Indirizzo di d   in s[1] HEX=%p -- DEC=%d\n", &s[1].d, &s[1].d);
    printf("Indirizzo di c_2 in s[1] HEX=%p -- DEC=%d\n", &s[1].c_2, &s[1].c_2);

    return (EXIT_SUCCESS);
}
