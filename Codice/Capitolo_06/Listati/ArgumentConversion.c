/* ArgumentConversion.c :: Conversione degli argomenti :: */
#include <stdio.h>
#include <stdlib.h>

/* prototipo della funzione sum */
int sum(int x, int y);

int main(void)
{
    /* errore di compilazione: meno argomenti di quelli attesi */
    int res_1 = sum(6);
    printf("Somma tra 6 e ? = %d\n", res_1);

    /* gli argomenti sono convertiti nel tipo int */
    /* potremmo avere solo un warning di possibile perdita di dati */
    int res_2 = sum(6.7f, 7.8f);

    printf("Somma tra 6.7 e 7.8 = %d\n", res_2);

    return (EXIT_SUCCESS);
}

/* definizione di sum */
int sum(int x, int y)
{
    return x + y;
}
