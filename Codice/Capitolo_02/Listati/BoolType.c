/* BoolType.c :: Mostra l'uso dei tipi bool :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 82, b = 90;
    bool b1 = 10,
         b2 = -22,
         b3 = '\000', // ASCII code NUL
         b4 = 'A',
         b5 = a < b, // valutazione di un'espressione
         b6 = true; // digitiamo direttamente true

    printf("b1 e' %d\n", b1);
    printf("b2 e' %d\n", b2);
    printf("b3 e' %d\n", b3);
    printf("b4 e' %d\n", b4);
    printf("b5 e' %d\n", b5);
    printf("b6 e' %d\n", b6);

    return (EXIT_SUCCESS);
}
