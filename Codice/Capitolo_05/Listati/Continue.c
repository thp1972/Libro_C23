/* Continue.c :: Uso dell'istruzione continue :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("a = ");
    for (int a = 1; a <= 10; a++) // finché a <= 10 
    {
        if (a == 5) // salta l'istruzione successiva se a == 5 
            continue;
        printf("%d%c ", a, a != 10 ? ',' : ' ');
        // continue fa spostare il flusso di esecuzione qua.
        // Poi il ciclo riprende con a++ quindi a <= 10
    }
    printf("\n");

    int a = 1;

    printf("a = ");
    while (a <= 10) // finché a <= 10 
    {
        if (a == 5) // salta le istruzioni successive se a == 5     
        {
            a++;
            continue;
        }
        printf("%d%c ", a, a != 10 ? ',' : ' ');
        a++;
        // continue fa spostare il flusso di esecuzione qua. 
        // Poi il ciclo riprende con a <= 10
    }
    printf("\n");

    return (EXIT_SUCCESS);
}
