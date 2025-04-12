/* typedefForFunctionPointer.c :: typedef e puntatori a funzioni :: */
#include <stdio.h>
#include <stdlib.h>

// typedef per una funzione di tipo (int, int) -> int
typedef int (*ptr_to_operations)(int, int);

int sum(int a, int b);
int sub(int a, int b);

// senza il typedef la dichiarazione di una funzione che ritorna un puntatore a funzione 
// di tipo (int, int) -> int sarebbe stata molto più complessa e poco leggibile:
// int(*choose(char))(int, int);
ptr_to_operations choose(char);

// senza il typedef la dichiarazione di una funzione che accetta come argomento un puntatore 
// a funzione di tipo (int, int) -> int sarebbe stata molto più complessa e poco leggibile:
// int makeComputation(int (*)(int, int), int, int);
int makeComputation(ptr_to_operations, int, int);

int main(void)
{
    int value1 = 2000;
    int value2 = 1000;

    // eseguo prima l'addizione
    printf("Addizione tra %d e %d = %d\n", value1, value2,
           makeComputation(choose('+'), value1, value2));

    // eseguo poi la sottrazione
    printf("Sottrazione tra %d e %d = %d\n", value1, value2,
           makeComputation(choose('-'), value1, value2));

    return (EXIT_SUCCESS);
}

int sum(int n1, int n2)
{
    return n1 + n2;
}

int sub(int n1, int n2)
{
    return n1 - n2;
}

// senza il typedef la definizione di una funzione che ritorna un puntatore a funzione 
// sarebbe stata molto più complessa e poco leggibile:
// int(*choose(char code))(int, int)
ptr_to_operations choose(char code)
{
    switch (code)
    {
        case '+': return sum;
        case '-': return sub;
    }

    // nessuna scelta valida allora ritorniamo un puntatore nullo a indicare nessun
    // indirizzo di puntatore a funzione valido
    return nullptr; // da C23 preferibile a return NULL;
}

// senza il typedef la dichiarazione di una funzione che accetta come argomento un puntatore 
// a funzione sarebbe stata molto più complessa e poco leggibile:
// int makeComputation(int (*op)(int, int), int n1, int n2)
int makeComputation(ptr_to_operations op, int n1, int n2)
{
    // se ptr_to_operations contiene un indirizzo di puntatore a funzione valido esegui
    // la funzione riferita; equivalente a *op != NULL oppure da C23 a *op != nullptr
    if (*op)
        return (*op)(n1, n2);
    else
    {
        printf("ATTENZIONE ptr_to_operations contiene un indirizzo non usabile!\n");
        printf("ESCO subito dal programma!\n");
        exit(EXIT_FAILURE);
    }
}
