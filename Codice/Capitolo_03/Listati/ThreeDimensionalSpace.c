/* ThreeDimensionalSpace.c :: Utilizzo di un array tridimensionale :: */
#include <stdio.h>
#include <stdlib.h>

#define X 100
#define Y 100
#define Z 20

int main(void)
{
    // uno spazio tridimensionale: coordinate x, y e z
    // empty initialization: bool è un tipo aritmetico, dunque l'empty
    // initializer inizializza in automatico tutti gli elementi di space
    // con il valore 0 che, ricordiamo, per un bool, rappresenta il valore false
    bool space[X][Y][Z] = {};

    // mettiamo qualche punto nello spazio: true significa che il punto
    // è presente in quella coordinata; false significa assenza del punto
    space[0][0][0] = true;
    space[0][0][2] = true;
    space[0][1][0] = true;
    space[0][1][1] = true;
    space[0][1][2] = true;
    space[0][2][1] = true;

    for (int x = 0; x < X; x++)
    {
        for (int y = 0; y < Y; y++)
        {
            for (int z = 0; z < Z; z++)
            {
                // comunica le coordinate spaziali solo se è presente un punto
                // space[x][y][z] viene valutata dall'if e se ritorna un valore true
                // esegue le istruzioni di stampa proprie della printf
                if (space[x][y][z])
                {
                    printf("[X = %d, Y = %d, Z = %d]\n", x, y, z);
                }
            }
        }
    }

    return (EXIT_SUCCESS);
}