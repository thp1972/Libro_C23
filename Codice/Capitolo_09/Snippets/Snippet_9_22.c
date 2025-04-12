#include <stdio.h>
#include <stdlib.h>

// prototipo di copy
void copy(int nr, int *restrict p1, int *restrict p2);

int main(void)
{
    // un array...
    int data[] = {1, 2, 3};

    // puntatore ristretto; asseriamo che solo per il suo tramite gli elementi
    // di data saranno manipolati
    int *restrict r_data = data;

    // &values[0] = 0x0028feb8 ... &values[9] = 0x0028fedc
    int values[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
	
    // VALIDO:
    // p1 punterà a un'area di memoria Es. 0x28feb8 + 5 ossia 0x0028fecc con valore 600
    // p2 punterà a un'altra area di memoria Es. 0x28feb8 con valore 100
    // p1 e p2 punteranno ad aree di memoria in modo non "sovrapposto" 
    // quando il loop sarà eseguito;
    // Es.
    // p1 = 0x0028fecc - p2 = 0x0028feb8
    // p1 = 0x0028fed0 - p2 = 0x0028febc
    // p1 = 0x0028fed4 - p2 = 0x0028fec0
    // p1 = 0x0028fed8 - p2 = 0x0028fec4
    // p1 = 0x0028fedc - p2 = 0x0028fec8
    // al termine values avrà questi valori {100, 200, 300, 400, 500, 100, 200, 300, 400, 500}
    copy(5, values + 5, values);

    // &values_2[0] = 0x0028fe90 ... &values_2[9] = 0x0028feb0
    int values_2[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

    // NON VALIDO - undeﬁned behavior
    // p1 punterà a un'area di memoria Es. 0x0028fe90 + 1 ossia 0x0028fe94 con valore 200
    // p2 punterà a un'altra area di memoria Es. 0x0028fe90 con valore 100
    // p1 e p2 punteranno ad aree di memoria in modo "sovrapposto" quando il loop sarà eseguito
    // ossia non sarà rispettato il "contratto" per cui si accederà a una determinata area di 
	// memoria solo dal relativo puntatore ristretto;
    // Es.
    // p1 = 0x0028fe94 - p2 = 0x0028fe90
    // p1 = 0x0028fe98 - p2 = 0x0028fe94
    // p1 = 0x0028fe9c - p2 = 0x0028fe98
    // p1 = 0x0028fea0 - p2 = 0x0028fe9c
    // p1 = 0x0028fea4 - p2 = 0x0028fea0
    // al termine values_2 avrà questi valori 
 	// {100, 100, 100, 100, 100, 100, 700, 800, 900, 1000}
    copy(5, values_2 + 1, values_2);

    return (EXIT_SUCCESS);
}

// definizione di copy
// copiamo un certo numero di valori da un indirizzo di memoria a un altro
// in questo caso facciamo una “promessa” al compilatore che non vi sarà alcuna
// "sovrapposizione" di accesso agli indirizzi di memoria riferiti; ossia p2 accederà a un'area 
// di memoria a cui non si accederà anche per il tramite di p1 e viceversa
// in caso di "non mantenimento della promessa" il comportamento sarà non definito...
void copy(int nr, int *restrict p1, int *restrict p2) // restrict usabile anche per i parametri
{
    while (nr-- > 0)
        *p1++ = *p2++;
}