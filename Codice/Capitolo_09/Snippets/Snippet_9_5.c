#include <stdio.h>
#include <stdlib.h>

int main(void)
{
data: // data appartiene allo spazio dei nomi delle label
    printf("OK\n");

    // data appartiene allo spazio dei nomi dei tag delle strutture, unioni o enumerazioni
    struct data
    {
        int member;
    };

    union U
    {
        // data appartiene allo spazio dei nomi dei membri delle strutture o unioni
        int data;
    };

    // data appartiene allo spazio dei nomi degli identificatori ordinari
    int data = 100;

    return (EXIT_SUCCESS);
}



