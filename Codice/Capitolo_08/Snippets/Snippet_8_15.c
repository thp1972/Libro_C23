#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nr = 4;
    struct IntegerData // una struttura di tipo struct IntegerData
    {
        int length;
        int min;
        int max;
        float average;
        int data[]; // array flessibile
    };

    // an_int è un puntatore a una struttura di tipo struct IntegerData che conterrà
    // un indirizzo di memoria che rappresenterà il punto di partenza dell'area di memoria allocata
    // per contenere i membri della struttura relativa;
    // malloc allocherà 32 byte di memoria posto un int di 32 bit: 
	// i primi 16 per le 3 variabili di tipo int e la variabile di tipo float; 
	// i secondi 16 per i 4 elementi di tipo int dell'array data
    struct IntegerData *an_int = malloc(sizeof(struct IntegerData) + nr * sizeof(int));
    
    free(an_int); // deallocazione memoria puntata da an_int

    return (EXIT_SUCCESS);
}

