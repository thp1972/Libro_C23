#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 4;
    int y = 6;
    int data[] = {10, 100, 20, 40, 50, 60, 70};

    int *ptr_to_data = &data[x]; // punta all'elemento 4 con valore 50 
    int *ptr_to_data_2 = &data[y]; // punta all'elemento 6 con valore 70

    // ptr_to_data   -> indirizzo: 0x0041f7cc
    // ptr_to_data_2 -> indirizzo: 0x0041f7d4
    bool res = ptr_to_data < ptr_to_data_2; // 1 cioè vero!

    return (EXIT_SUCCESS);
}
