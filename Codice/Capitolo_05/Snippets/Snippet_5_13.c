#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c = 1;
    for (;;) // ciclo infinito
    {
        switch (c)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5: printf("c contiene un valore ancora inferiore a 6...\n");
                break;
            case 6: break;
        }
        if (c == 6)
            break;
        else
            c++;
    }
    printf("c contiene finalmente il valore 6!!!\n");

    return (EXIT_SUCCESS);
}
