#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i_value = 100;

    // aliasing: i due puntatori si riferiscono allo stesso indirizzo in memoria
    int *ptr_to_i_value_1 = &i_value;
    int *ptr_to_i_value_2 = &i_value;

    // *ptr_to_i_value_1 è altresì un alias di i_value
    // entrambi riferiscono la stessa area di memoria che è modificata con il valore 300
    *ptr_to_i_value_1 = 300;

    return (EXIT_SUCCESS);
}

