#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    int x = 1;
    int y = 3;
    int data[] = {10, 100, 20, 40, 50, 60, 70};

    int *ptr_to_data = &data[x]; // punta all'elemento 1 con valore 100 
    int *ptr_to_data_2 = &data[y]; // punta all'elemento 3 con valore 40

    ptrdiff_t distance_1 = ptr_to_data - ptr_to_data_2; // -2
    ptrdiff_t distance_2 = ptr_to_data_2 - ptr_to_data; // 2

    return (EXIT_SUCCESS);
}
