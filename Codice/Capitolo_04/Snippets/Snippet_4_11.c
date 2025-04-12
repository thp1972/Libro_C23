#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = -7, b = 5;

    // il risultato sarebbe -1.4 ma lo stesso è stato troncato ed è -1
    // un'implementazione in accordo con il C89 potrebbe produrre come 
    // risultato sia -1 che -2
    int res = a / b;

    return (EXIT_SUCCESS);
}
