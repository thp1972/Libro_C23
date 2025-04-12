#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 9;
    int b = 100;

    switch (a++) // effetto collaterale: a cambia valore da 9 a 10
    {
        case 9: b = b * a + 250; // questo è il ramo eseguito... ma a varrà 10 e non 9
            break;
        case 10: b = b * a + 500;
            break;
        default: break;
    }

    return (EXIT_SUCCESS);
}
