#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define A_SIZE 4

union Z // unione di tipo union Z
{
    char c;
    short s;
};

// prototipo della funzione setZ
union Z setZ(union Z z);

int main(void)
{
    union U // unione di tipo union U
    {
        char c;
        int i;
    } u = {'a'}, z;
    z = u; // assegnamento di un'unione a un'altra unione

    // dichiaro un'unione di un tipo senza nome a cui però attribuisco un
    // nome di tipo, ossia FloatingPoint, tramite typedef
    typedef union
    {
        float f;
        double d;
        long double ld;
    } FloatingPoint;
    FloatingPoint fp = {112.4f}; // fp è di tipo FloatingPoint

    // letterale union
    union U u_i = (union U){.i = 1000};

    // annidamento di unioni
    union parent // unione di tipo union parent
    {
        int a;

        union child // unione annidata di tipo union child
        {
            int b;
            double d;
        } c;
    } p = {.c.d = 100.333};

    // contiene come membri degli array
    union data // unione di tipo union data
    {
        int a[SIZE];
        float f[SIZE];
    } d;
    d.a[0] = 200;
    d.a[1] = 300;

    // array di union data
    union data ds[A_SIZE];
    ds[1].f[0] = 11.11f;

    // puntatore a un'unione di tipo union data
    union data *another_data = &ds[1];
    float f_data = another_data->f[0];

    // invoco la funzione setZ passando un'unione di tipo union Z 
    // la funzione ritorna un'unione sempre di tipo union Z dove il membro
    // c avrà il valore di 'Z'
    union Z a_z = setZ((union Z){'Y'});

    // unioni anonime
    union A // un'unione di tipo union A
    {
        union // unione anonima
        {
            short s;
            int i;
        };

        union // unione anonima
        {
            float f;
            double d;
        };
    };
    union A a;
    a.d = 2222.2222;

    // unione con dei campi di bit
    union B
    {
        unsigned int a : 10;
        unsigned int b : 5;
        unsigned int c : 1;

    };
    union B b;
    b.a = 1023; // ok il valore "entra" nei 10 i bit di a 

    return (EXIT_SUCCESS);
}

// definizione della funzione setZ che ritorna un'unione di tipo union Z e che
// accetta come argomento un'unione sempre di tipo union Z
union Z setZ(union Z z)
{
    return (union Z){.c = z.c + 1};
}


