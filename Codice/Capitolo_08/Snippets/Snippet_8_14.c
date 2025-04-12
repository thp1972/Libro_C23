#include <stdio.h>
#include <stdlib.h>

#define MAX_POINTS 5

int main(void)
{
    struct point // una struttura di tipo struct point
    {
        int x;
        int y;
    };

    // un array di struct point
    struct point points[MAX_POINTS] =
    {
        {10, 10},
        {10, 20},
        {10, 30},
        {10, 40},
        {10, 50}
    };

    // ptr_to_point punta, ora, alla prima struttura dell'array
    struct point *ptr_to_point = &points[0];

    // ptr_to_point punta, ora, all'ultima struttura dell'array
    ptr_to_point += (MAX_POINTS - 1);

    return (EXIT_SUCCESS);
}

