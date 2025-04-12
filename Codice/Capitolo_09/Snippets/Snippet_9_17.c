#include <stdio.h>
#include <stdlib.h>

// prototipo di foo; simile a extern void foo(void);
// se non compare extern è assunto tale specificatore per default
void foo(void);

// variabile esterna esplicitamente definita; simile a extern int number = 100;
//  se avessimo scritto int number; tale dichiarazione sarebbe stata considerata dallo standard
// come una definizione provvisoria (tentative definition) ed avrebbe avuto il valore
// di default 0 se nell'unità di traduzione corrente non vi fosse stata almeno una sua 
// definizione esplicita
int number = 100;

int main(void)
{
    // esplicito la volontà di usare number che è stata definita altrove: in questo
    // caso si riferisce alla variabile esterna number che avendo scope a livello di file
    // consentirebbe anche di omettere tale dichiarazione
    // infatti, è consuetudine ometterla sempre!!!
    extern int number;
    int a = number; // 100   

    foo();

    // error: 'data' undeclared (first use in this function)
    // qua data non è visibile perché è stato dichiarato dopo la fine del main
    int value_1 = data;

    // comunico al compilatore che data è stata definita altrove... qua non
    // c'è alcun errore perché poi il linker provvederà a cercare la relativa
    // definizione; in pratica consentiamo al compilatore a utilizzare tale nome
    extern int data;
    int value_2 = data; // 1000

    return (EXIT_SUCCESS);
}

// variabile esterna; file scope a partire però da dopo la sua dichiarazione
int data = 1000;

// definizione di foo; simile a extern void foo() {...}
// se non compare extern è assunto tale specificatore per default
void foo(void)
{
    // ok data è visibile!
    int x = data;
}



