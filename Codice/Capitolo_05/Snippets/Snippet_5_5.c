#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 3;
    int b = 2;
    int j = 1;

    do
    {
        // prima della verifica della condizione a varrà 1  
        // dopo le valutazioni delle espressioni nel while a varrà 6...
        a = j;
        if (a == 6)
            break;
    }
    while (j = (a + 1, b += a, b));
    
    return (EXIT_SUCCESS);
}
