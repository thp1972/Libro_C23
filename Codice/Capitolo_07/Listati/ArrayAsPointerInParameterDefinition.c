/* ArrayAsPointerInParameterDefinition.c :: Array vs puntatori come parametri di una funzione  :: */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 6 

// prototipo della funzione subtraction
// equivalenti --> int subtraction(int *data, int length);
//                 int subtraction(int [], int length);
//                 int subtraction(int *, int length);
int subtraction(int data[], int length);

int main(void)
{
    int some_data[] = {369, 10, 15, 65, 88, 66};
    printf("L'array some_data, nella funzione main, ha una dimensione di %zu byte\n", sizeof 
           some_data);

    int res = subtraction(some_data, SIZE);

    printf("Il risultato della sottrazione di tutti gli elementi di some_data e': %d\n", res);

    return (EXIT_SUCCESS);
}

// definizione della funzione subtraction
// equivalente --> int subtraction(int *data, int length) { ... }
int subtraction(int data[], int length)
{
    printf("\"L'array data\", nella funzione subtraction, ha una dimensione di %zu byte\n", 
           sizeof data);

    int result = *data;

    // utilizzo dell'aritmetica dei puntatori per scorrere un array...
    for (int *p = data + 1; p < data + length; p++)
        result -= *p;

    return result;
}
