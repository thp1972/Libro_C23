#include <stdio.h>
#include <stdlib.h>

/* prototipo della funzione subtraction */
int subtraction(int data[], int length);

int main(void)
{
    int some_data[] = {369, 10, 15, 65, 88, 66};

    // dim = 6; OK dimensione corretta di some_data
    int dim = sizeof some_data / sizeof some_data[0];

    int res = subtraction(some_data, dim);

    return (EXIT_SUCCESS);
}

/* definizione della funzione subtraction */
int subtraction(int data[], int length)
{
    // dim = 1; ERRORE dimensione non corretta di data
    int dim = sizeof data / sizeof data[0];

    int result = data[0];

    for (int i = 1; i < length; i++)
        result -= data[i];

    return result;
}

