#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = -5;
    if (a == -5);
        printf("-5\n");
    else // error: 'else' without a previous 'if'
        printf("non -5\n");

    return (EXIT_SUCCESS);
}
