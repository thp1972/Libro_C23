/* Casting.c :: Cast operator :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float res;
    int number_1 = 100, number_2 = 33;

    // la divisione tra interi ritorna solo la parte intera che per una conversione
    // implicita è "promossa" in float
    res = number_1 / number_2;
    printf("Divisione: %d / %d = %f\n", number_1, number_2, res);

    // number_1 è convertito in float sicché tutta l'espressione per
    // le usuali regole già viste è di tipo float e res conterrà
    // l'esatto risultato della divisione tra float
    res = (float) number_1 / number_2;
    printf("Divisione: %f / %f = %f\n", (float) number_1, (float) number_2, res);

    return (EXIT_SUCCESS);
}
