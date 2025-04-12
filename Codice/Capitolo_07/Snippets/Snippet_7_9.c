#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 5;
    int y = 4;
    int data[] = {10, 100, 20, 40, 50, 60, 70};

    int *ptr_to_data = &data[x]; // punta all'elemento 5 con valore 60 
    ptr_to_data = ptr_to_data - y; // ora punta all'elemento 2 con valore 100  

    return (EXIT_SUCCESS);
}
