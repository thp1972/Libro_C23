/* VoidPointers.c :: Puntatori a void :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i_data = 100;
    double d_data = 223.2232;
    int *ptr_to_int = &i_data;
    double *ptr_to_double = &d_data;

    // ATTENZIONE: le istruzioni "marcate" con (1), (2) e (3)
    // vanno DECOMMENTATE con un compilatore che permette la
    // compilazione del programma

    // con GCC, dalla versione 14.1 in poi, non sarà possibile compilare
    // il programma perché sarà emesso il messaggio di errore:
    // assignment to 'int *' from incompatible pointer type 'double *'
    // con GCC 13.3, però, sarà emesso solo un messaggio di warning
    // e il programma sarà compilato
    // ptr_to_int = ptr_to_double; // (1)

    // printf("Deriferimento di ptr_to_int che contiene l'indirizzo contenuto in ptr_to_double\n"
    //        "[ %d ]\n", *ptr_to_int); // (2)

    // ptr_to_int = &i_data; // (3)

    // puntatore a void
    void *ptr_to_void = ptr_to_int; // ora punta a un int

    // ptr_to_void è convertito a int * e poi dereferenziato
    printf("Deriferimento di ptr_to_void che contiene l'indirizzo contenuto in ptr_to_int\n"
           "[ %d ]\n", *(int *) ptr_to_void);

    ptr_to_void = ptr_to_double; // ora punta a un double

    // ptr_to_void è ora convertito a double * e poi dereferenziato
    printf("Deriferimento di ptr_to_void che contiene l'indirizzo contenuto in ptr_to_double\n"
           "[ %.4f ]\n", *(double *) ptr_to_void);

    return (EXIT_SUCCESS);
}
