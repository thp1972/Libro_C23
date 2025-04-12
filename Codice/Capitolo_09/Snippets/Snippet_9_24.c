#include <stdio.h>
#include <stdlib.h>

// definisce macro, tipi e funzioni utilizzabili per gestire
// operazioni atomiche su dati condivisibili tra più thread
#include <stdatomic.h>

int main(void)
{
    // data è un oggetto di tipo atomico
    // per lo standard la dimensione, la rappresentazione e l'allineamento di un
    // tipo atomico non necessitano essere uguali a quelli del corrispondente tipo
    // non qualificato
    _Atomic int data;

    // lo store del valore 100 nella variabile data è garantito essere un'operazione
    // atomica; durante tale operazione nessun altro thread potrà accedere a data
    atomic_store(&data, 100); // atomic_store è una macro definita nel file header 
                              // <stdatomic.h>

    return (EXIT_SUCCESS);
}







