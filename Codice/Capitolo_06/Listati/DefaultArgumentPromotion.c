/* DefaultArgumentPromotion.c :: Promozione di default degli argomenti :: */
#include <stdio.h>
#include <stdlib.h>

/* nessun prototipo della funzione sum */
/* il compilatore assume di default che sia int sum(); */

int main(void)
{
    /* invocazione di sum con un solo argomento */
    /* numero degli argomenti non uguale al numero dei parametri */
    int res_1 = sum(6);
    printf("Somma tra 6 e ? = %d\n", res_1);

    /* invocazione di sum con i tipi degli argomenti diversi dai tipi dei parametri */
    /* il tipo degli argomenti promossi non concorda con il tipo dei parametri attesi */
    int res_2 = sum(6.7f, 7.8f);

    printf("Somma tra 6.7 e 7.8 = %d\n", res_2);

    return (EXIT_SUCCESS);
}

/* definizione di sum */
int sum(int x, int y)
{
    return x + y;
}
