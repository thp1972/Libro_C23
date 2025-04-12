#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int value = 10;
    int *data = &value;

    *data = 100; // value = 100

    return (EXIT_SUCCESS);
}
