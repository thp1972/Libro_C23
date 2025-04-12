#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    enum colors
    {
        RED,
        GREEN,
        BLUE, // ok, trailing comma permesso, così l'inserimento, per esempio, di WHITE
              // può avvenire direttamente su questa linea senza "scomodare" le linee di 
              // dichiarazione precedenti!
    };   
            
    return (EXIT_SUCCESS);
}


