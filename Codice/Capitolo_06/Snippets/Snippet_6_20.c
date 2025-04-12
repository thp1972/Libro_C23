#include <stdio.h>
#include <stdlib.h>

// definizione di una funzione inline
static inline int max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int x = 10, y = 12;

    //        qua possibile, ma non certa, espansione inline del body di max
    //        ↓
    int res = max(x, y); // ad esempio: x > y ? x : y;  

    return (EXIT_SUCCESS);
}



