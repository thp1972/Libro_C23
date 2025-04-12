/* Goto.c :: Uso dell'istruzione goto :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 0, b = 0, c = 0;

    while (a < 10) // I ciclo
    {
        a++;
        while (b < 10) // II ciclo innestato nel I
        {
            b++;
            while (c < 10) // III ciclo innestato nel II
            {
                if (c == 5)
                    goto print; // salta direttamente all'etichetta print
                c++;
            }
        }
    }

// istruzione etichettata raggiunta dal goto...
print:{ printf("a = %d, b = %d, c = %d\n", a, b, c); c = 1; }
    for (;;) // ciclo infinito
    {
        switch (c)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5: printf("c contiene un valore ancora inferiore a 6...\n"); break;
            case 6: goto end; // salta direttamente all'etichetta end
        }
        c++;
    }

end: // etichetta
    printf("c contiene finalmente il valore 6!!!\n");

    return (EXIT_SUCCESS);
}
