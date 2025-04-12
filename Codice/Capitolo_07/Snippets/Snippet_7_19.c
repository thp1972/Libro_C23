#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int value = 200;

    // p_value è impostata per puntare a un puntatore nullo
    int *p_value = nullptr;

    // p_value conterrà un riferimento a un puntatore nullo
    // sarà quindi valutata come uguale a 0
    bool b_p = p_value; // false - b_p conterrà il valore 0

    p_value = &value; // puntatore a value

    // p_value conterrà un riferimento a un puntatore valido
    // sarà quindi valutata come uguale a 1
    b_p = p_value; // true - b_p conterrà il valore 1

    // un test per verificare se il puntatore è nullo
    int nr = 100;
    int *p_nr = &nr;
    int storage;

    // solo se p_nr contiene un indirizzo valido, dereferenziarlo ponendo
    // il valore dell'oggetto puntato nella variabile storage
    if (p_nr) // equivalente ma prolisso: if(p_nr != nullptr)
        storage = *p_nr;
    else
        storage = 0;

    // altre caratteristiche dei puntatori nulli:

    // 1) quando un puntatore nullo viene convertito a un altro tipo di puntatore,
    // il risultato è ancora un puntatore nullo, del tipo di destinazione
    int *int_ptr = nullptr;
    float *float_ptr = (float *)int_ptr;

    // 2) se si confrontano due puntatori nulli, indipendentemente dai loro tipi,
    // essi devono risultare uguali
    int *int_ptr2 = nullptr;
    char *char_ptr = nullptr;
    bool b_p2 = int_ptr2 == char_ptr; // true - b_p2 conterrà il valore 1

    return (EXIT_SUCCESS);
}