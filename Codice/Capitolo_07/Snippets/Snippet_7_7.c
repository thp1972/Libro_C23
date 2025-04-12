#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int data[] = {10, 100, 20, 40, 50, 60, 70};
    int *ptr_to_data = data;

    // fa puntare ptr_to_data al quarto elemento dell'array
    ptr_to_data += 3;

    return (EXIT_SUCCESS);
}
