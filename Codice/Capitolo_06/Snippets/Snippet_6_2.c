#include <stdio.h>
#include <stdlib.h>

// definizione della funzione cube secondo una sintassi pre-ANSI C
// questo tipo di definizioni sono anche conosciute con il termine
// tecnico di function definitions with identifier lists o K&R function 
// se si prova a compilare con gcc e il flag -std=c23 viene generato 
// il seguente avviso:
// warning: old-style function definition [-Wold-style-definition]
// se si prova a compilare con clang e il flag -std=c23 
// viene generato il seguente errore:
// error: unknown type name 'number'
long cube(number) // number è l'identificatore
long number; // dichiarazione del tipo
{
    long res; // variabile locale e privata alla funzione cube
    res = number * number * number; // algoritmo
    return res; // ritorna al chiamante il risultato
}

int main(void)
{
    return (EXIT_SUCCESS);
}
