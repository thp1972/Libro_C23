#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // un oggetto di tipo unsigned short
    // dovrebbe contenere solo numeri maggiori o uguali a 0
    // warning: warning: unsigned conversion from 'int' to 'short unsigned int' 
    // changes value from '-12' to '65524'
    unsigned short us = -12; // ATTENZIONE numero negativo!!!

    return (EXIT_SUCCESS);
}







