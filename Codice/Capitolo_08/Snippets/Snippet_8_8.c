#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    struct S
    {
        char c_data;
        int data;
    } s = {'A', 65};

    // quanti byte saranno allocati per la struttura s di tipo struct S?
    size_t size_of_s = sizeof (s); // ???

    return (EXIT_SUCCESS);
}

