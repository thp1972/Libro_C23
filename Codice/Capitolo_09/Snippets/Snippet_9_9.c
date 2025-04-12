#include <stdio.h>
#include <stdlib.h>

// data è visibile da dopo il suo punto di collocazione e fino al termine del file 
// dove è stata dichiarata
int data;

int main(void)
{
    // data è visibile perché variabile esterna con scope a livello di file
    int x = data;

    return (EXIT_SUCCESS);
}



