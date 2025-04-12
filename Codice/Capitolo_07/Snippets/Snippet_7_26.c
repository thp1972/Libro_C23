#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int value = 100;

    int *restrict ptr_to_value_1 = &value;

    // ATTENZIONE *ptr_to_value_2 è un alias di *ptr_to_value_1
    int *restrict ptr_to_value_2 = ptr_to_value_1;

    // ciò potrà causare un comportamento non definito
    *ptr_to_value_2 = 1000;

    return (EXIT_SUCCESS);
}

