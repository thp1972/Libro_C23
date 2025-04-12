#include <stdio.h>
#include <stdlib.h>

// prototipo di max
int max(int x, int y);

int main(void)
{
    int j = 100, p = 50;

    // m conterrà come valore quello di j che è più grande del valore di p
    // m conterrà quindi il valore 100 e non 101 perché l'operatore di incremento
    // sull'argomento j è postfisso e non prefisso
    int m = max(j++, p);

    // j_val conterrà 101 a causa dell'operatore di incremento postfisso applicato
    // sull'argomento j che ricordiamo è stato comunque effettuato perché vi è un
    // sequence point prima dell’ingresso nella funzione max ossia dopo la valutazione
    // dei suoi argomenti e prima dell’esecuzione delle espressioni nel suo body
    int j_val = j;

    return (EXIT_SUCCESS);
}

// definizione di max
int max(int x, int y)
{
    return x > y ? x : y;
}






