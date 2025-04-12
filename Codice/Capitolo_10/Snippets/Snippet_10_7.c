#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// macro parametrica per determinare se un carattere è un carattere numerico 
#define isdigit(y) ((y) >= '0' && (y) <= '9' ? 1 : 0)

int main(void)
{
    char a = '8';

    // qua userà la macro parametrica isdigit
    printf("%d\n", isdigit(a)); // 1

#undef isdigit /* annullamento definizione della macro isdigit */

    char b = 'a';

    // qua userà la funzione isdigit dichiarata nel file header <ctype.h>
    printf("%d\n", isdigit(b)); // 0

    return (EXIT_SUCCESS);
}






