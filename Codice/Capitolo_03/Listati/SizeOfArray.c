/* SizeOfArray.c :: Uso di sizeof con gli array :: */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
    // un array monodimensionale
    // SIZE rappresenta un'espressione costante intera e dunque lo designa come di tipo
    // CLA ovvero come un Constant Length Array
    // SIZE è valutato a compile time
    int CLA_data[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // ritorna la lunghezza dell'array CLA_data
    printf("Il vettore CLA_data ha %zu elementi in totale!\n",
                                              sizeof CLA_data / sizeof CLA_data[0]);

    int size = 10;
    // un array monodimensionale
    // size non rappresenta un'espressione costante intera e dunque lo designa come di tipo
    // VLA ovvero come un Variable Length Array
    // size è valutato a runtime
    int VLA_data[size] = {};

    // ritorna la lunghezza dell'array CLA_data
    printf("Il vettore VLA_data ha %zu elementi in totale!\n",
                                          sizeof VLA_data / sizeof VLA_data[0]);

    // sizeof e VLA
    // ATTENZIONE: l'operando size++ viene valutato ovvero il valore di size
    // subisce l'effetto dell'operatore ++ (size avrà il valore 11)
    printf("Dimensione di int[size++]: %zu byte\n", sizeof (int[size++]));

    return (EXIT_SUCCESS);
}
