#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    {   // un block scope esplicito; a è visibile solo in quest'ambito 
        int a = 100;
    }

    // qua a non è visibile; error: 'a' undeclared (first use in this function)
    int b = a;

    // il for delimita un block scope; i è visibile solo in quest'ambito
    for (int i = 0; i < 10; i++)
        printf("[%d]\n", i);

    int n = 10;
    int *data;

    // l'array letterale esisterà solo nell'ambito del block scope
    // relativo all'inner statement della if
    // data conterrà, quindi, un puntatore di un oggetto non più valido e il suo
    // eventuale utilizzo causerà un comportamento non definito
    if (n == 10)
        data = (int[]){1, 2, 3};
    else
    {   // un block scope esplicito per il ramo else
        // number esisterà solo in questo blocco
        int number = 1000;
    }

    for (int j = 0; j < 10; j++)
    {   // blocco esplicito
        // nessuna ridefinizione di j perché sta nel loop body che è un blocco
        // disgiunto dal blocco proprio dell'istruzione for
        int j = 1;
        printf("%d\n", j);
    }

    // qua i non è visibile; error: 'i' undeclared (first use in this function)
    b = i;

    return (EXIT_SUCCESS);
}



