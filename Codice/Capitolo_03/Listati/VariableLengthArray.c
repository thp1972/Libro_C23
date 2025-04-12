/* VariableLengthArray.c :: Utilizzo di un array VLA :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dim;
    printf("Digita la dimensione del vettore: ");
    scanf("%d", &dim);

    int vector[dim]; // VLA di dimensione variabile    

    printf("Digita %d numeri da inserire negli elementi del vettore: ", dim);
    for (int n = 0; n < dim; n++)
    {
        scanf("%d", &vector[n]);
    }

    printf("Copio i valori degli elementi del tuo vettore in un nuovo vettore...\n\n");
    int other_vector[dim];

    for (int n = 0; n < dim; n++)
    {
        other_vector[n] = vector[n];
    }

    printf("Stampo i valori degli elementi dei due vettori...\n");

    printf("Vettore: vector ->\t\t[");
    for (int n = 0; n < dim; n++)
    {
        printf("%d,", vector[n]);
    }
    printf("\b]\n");

    printf("Vettore: other_vector ->\t[");
    for (int n = 0; n < dim; n++)
    {
        printf("%d,", other_vector[n]);
    }
    printf("\b]\n");
    
    return (EXIT_SUCCESS);
}
