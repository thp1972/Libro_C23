#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // visualizzalo come short int
    printf("[%5hd]\n", 10000); // [10000]

    // visualizzalo come long int 
    printf("[%ld]\n", 1500000000L); // [1500000000]

    int c_dim = 4;

    // visualizzalo come size_t;
    // in questo caso notiamo anche l'utilizzo del simbolo * che consente di 
    // determinare il valore dell'ampiezza del campo dal valore della variabile
    // c_dim; è importante notare come per ogni * vi debba essere un apposito 
    // argomento, in successione, e prima degli argomenti da convertire
    printf("[%*zu]\n", c_dim, sizeof (int)); // [   4]

    return (EXIT_SUCCESS);
}







