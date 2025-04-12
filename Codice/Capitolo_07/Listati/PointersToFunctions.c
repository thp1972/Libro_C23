/* PointersToFunctions.c :: Puntatori a funzioni :: */
#include <stdio.h>
#include <stdlib.h>

// prototipi di funzione
// notare come gli identificatori dei parametri abbiano un nome diverso da quello
// dei corrispettivi identificatori indicati nella definizione di tali funzioni;
// ricordiamo che ciò non rappresenta alcun problema: sono semplicemente ignorati!
int makeOperations(int a, int b, int (*f)(int, int));

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main(void)
{
    int val1, val2, op = 0;

    // array di puntatori a funzioni di tipo (int, int) -> int
    int (*array_of_op[])(int, int) = {addition, subtraction, multiplication, division};

    // array di puntatori a caratteri
    char *op_name[] = {"addizione", "sottrazione", "moltiplicazione", "divisione"};

    printf("***************** Operazioni Aritmetiche ***************************\n\n");
    printf("[0] addizione\n[1] sottrazione\n[2] moltiplicazione\n[3] divisione\n\n");
    scanf("%d", &op);

    while (op < 0 || op > 3)
    {
        printf("Operazione aritmetica\n");
        printf("[0] addizione, [1] sottrazione, [2] moltiplicazione, [3], divisione ");
        scanf("%d", &op);
    }

    printf("\nPrimo numero: ");
    scanf("%d", &val1);

    printf("Secondo numero: ");
    scanf("%d", &val2);

    // stampa il risultato
    printf("\nLa %s tra %d e %d ha prodotto come risultato %d\n", 
            op_name[op], val1, val2, makeOperations(val1, val2, array_of_op[op]));
    printf("********************************************************************\n\n");

    return (EXIT_SUCCESS);
}

// definizioni delle funzioni
int makeOperations(int value_1, int value_2, int (*op)(int, int))
{
    // esegue la funzione riferita; può essere qualsiasi funzione di tipo
    // (int, int) -> int
    return (*op)(value_1, value_2);
}

int addition(int v1, int v2)
{
    return v1 + v2;
}

int subtraction(int v1, int v2)
{
    return v1 - v2;
}

int multiplication(int v1, int v2)
{
    return v1 * v2;
}

int division(int v1, int v2)
{
    return v1 / v2;
}
