#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // sz varrà 4 perché saranno 4 i byte utilizzati per memorizzare:
    // 'd', 'u', 'e' e '\0'
    size_t sz = sizeof "due";

    // len varrà 3 perché il letterale stringa "due" è costituito, in effetti, da 3 caratteri
    size_t len = strlen("due");

    return (EXIT_SUCCESS);
}







