/* Variant.c :: Creazione di un tipo che può contenere tipi diversi :: */
#include <stdio.h>
#include <stdlib.h>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define SIZE 4

// creiamo un alias per una struttura capace a contenere 4 tipi di dato diversi
typedef struct
{
    int type;

    union // unione anonima
    {
        char c;
        int i;
        float f;
        double d;
    };
} variant;

// prototipo di printValue
void printValue(variant v);

int main(void)
{
    variant v; // dichiaro v di tipo variant

    // ora è char
    v.type = CHAR;
    v.c = 'Z';
    printValue(v);

    // ora è int
    v.type = INT;
    v.i = 100;
    printValue(v);

    // ora è double
    v.type = DOUBLE;
    v.d = 33.56;
    printValue(v);

    // creiamo un array dove ogni elemento è un "tipo" diverso
    variant array_of_v[SIZE] =
    {
        {CHAR, .c = 'A'},
        {INT, .i = 100},
        {FLOAT, .f = 22.22f},
        {DOUBLE, .d = 123.44}
    };
    printf("Stampiamo i valori degli elementi dell'array array_of_v: ");

    for (int i = 0; i < SIZE; i++)
    {
        if (array_of_v[i].type == CHAR)
            printf("%c ", array_of_v[i].c);
        else if (array_of_v[i].type == INT)
            printf("%d ", array_of_v[i].i);
        else if (array_of_v[i].type == FLOAT)
            printf("%.2f ", array_of_v[i].f);
        else if (array_of_v[i].type == DOUBLE)
            printf("%.2f ", array_of_v[i].d);
    }
    printf("\n");

    return (EXIT_SUCCESS);
}

// definizione di printValue
void printValue(variant v)
{
    switch (v.type)
    {
        case CHAR:
            printf("%c\n", v.c);
            break;
        case INT:
            printf("%d\n", v.i);
            break;
        case FLOAT:
            printf("%.2f\n", v.f);
            break;
        case DOUBLE:
            printf("%.2f\n", v.d);
    }
}
