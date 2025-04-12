#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int value = 10;
    int *data = &value; // data conterrà l’indirizzo di value
    int tmp = *data; // tmp = 10

    return (EXIT_SUCCESS);
}
