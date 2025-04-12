#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = -55;
    int b = -a; // 55

    // +100 usabile senza problemi
    int k = 100;
    int j = +100 - -k; // 200

    return (EXIT_SUCCESS);
}
