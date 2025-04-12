#include <stdio.h>
#include <stdlib.h>

void foo(void); // prototipo di foo

typedef int MYINT;

int main(void)
{
    // number è di tipo int; MYINT ne è un sinonimo
    // lo scope di MYINT è a livello di file perché è lì che è stato creato
    // tale identificatore ossia il nome typedef di int
    MYINT number = 100;

    typedef struct P
    {
        int x;
        int y;
    } point;

    // p è di tipo puntatore a una struttura di tipo struct P; point ne è un sinonimo
    // lo scope di point è a livello di blocco perché è lì che è stato creato
    // tale identificatore ossia il nome typedef della struct P
    point *p;

    return (EXIT_SUCCESS);
}

void foo(void) // definizione di foo
{
    // ok MYINT visibile...
    MYINT m = 1000;

    // error: unknown type name 'point'    
    // qua point non è conosciuto perché il nome typedef è stato dichiarato nell'ambito
    // del main ed ha quindi un block scope
    point *p_1;
}




