#include <stdio.h>
#include <stdlib.h>

#define NL

int main(void)
{
    int data[] = {1, 2, 3, 4, 5};

    for (size_t i = 0; i < sizeof data / sizeof (int); i++)
    {
#ifdef NL /* stampa gli elementi di data ciascuno su una singola linea */
        printf("%d\n", data[i]);
#else /* stampa gli elementi di data su una stessa linea */
        printf("%d ", data[i]);
#endif /* NL */
    }

    return (EXIT_SUCCESS);
}






