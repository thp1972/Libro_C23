/* TypeDemotion.c :: Demotion dei tipi :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 260;
    double d = 323.123;
    unsigned char b;

    // il risultato sarà 260 % 256 che darà come resto 4 
    b = a;
    printf("b = a ---> %d\n", b);

    // il risultato sarà 67 infatti prima 323.123 sarà troncato in 323  
    // e poi si farà 323 % 256 che darà come resto appunto 67 
    b = d;
    printf("b = d ---> %d\n", b);

    return (EXIT_SUCCESS);
}
