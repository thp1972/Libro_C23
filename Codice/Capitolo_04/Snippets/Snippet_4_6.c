#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;

    // equivalente a scrivere:
    // a = (b = (c = 400));
    a = b = c = 400; // a, b e c contengono il valore 400

    return (EXIT_SUCCESS);
}
