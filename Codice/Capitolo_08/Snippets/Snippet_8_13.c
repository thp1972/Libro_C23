#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef struct // un tipo color...
    {
        int red;
        int green;
        int blue;
    } color;

    // red è una variabile di tipo color
    color red = {255, 0, 0};

    // ptr_to_red è un puntatore a un tipo color
    color *ptr_to_red = &red;

    return (EXIT_SUCCESS);
}

