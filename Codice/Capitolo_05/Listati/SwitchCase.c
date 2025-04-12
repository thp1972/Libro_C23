/* SwitchCase.c :: Uso dell'istruzione switch :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 4;

    // valuto number 
    switch (number)
    {
        case 1: // vale 1? 
            printf("number = 1\n");
            break;
        case 2: // vale 2? 
            printf("number = 2\n");
            break;
        case 3: // vale 3? 
            printf("number = 3\n");
            break;
        case 4: // vale 4? 
            printf("number = 4\n");
            break;
        default: // nessuna corrispondenza? 
            printf("number = [no matching]\n");
    }
    
    return (EXIT_SUCCESS);
}
