#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // tutte rappresentazioni del carattere j 
    char ch_d = 106; // decimale 
    char ch_x = '\x6A'; // esadecimale 
    char ch_o = '\152'; // ottale

    // qui 7CC vale 1996 in base 10 ed è fuori dal range massimo rappresentabile di
    // un unsigned char che è FF ossia 255 in base 10
    char ch_illegal = '\x7CC'; // warning: hex escape sequence out of range

    return (EXIT_SUCCESS);
}
