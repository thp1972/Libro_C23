/* Break.c :: Uso dell'istruzione break :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("a = ");
    for (int a = 1; a <= 10; a++) // finché a <= 10 
    {
        if (a == 5)
        {
            break;
        }
        printf("%d ", a);
    }
    printf("\n");

    int a = 1;

    printf("a = ");
    while (a <= 10) // finché a <= 10 
    {
        if (a == 5)
            break;
        printf("%d ", a++);
    }
    printf("\n");

    return (EXIT_SUCCESS);
}
