/* BitFieldsVSBitwiseOperators.c :: Campi di bit a confronto con gli operatori bitwise :: */
#include <stdio.h>
#include <stdlib.h>

#define MASK 0xFF

// prototipi di funzione per l'estrazione delle componenti di un colore
unsigned char getRED(unsigned int color);
unsigned char getGREEN(unsigned int color);
unsigned char getBLUE(unsigned int color);

int main(void)
{
    // un colore espresso nella forma RGB
    // Light blue RGB -> R = 173, G = 216, B = 230
    unsigned int bw_color = 0xADD8E6;
   
    // accesso alle componenti; si noti come per estrarre tali componenti bisogni
    // chiamare le relative funzioni che usano gli operatori bitwise >>, & e una maschera di
    // di bit; è inoltre indispensabile sapere la "posizione" delle componenti ovvero che
    // siano disposte nel formato RGB e non, per esempio, come BGR
    printf("Componenti bw_color: [%d, %d, %d]\n",
           getRED(bw_color),
           getGREEN(bw_color),
           getBLUE(bw_color)
           );

    // un colore espresso tramite una struttura con campi di bit
    struct RGB_color
    {
        unsigned int RED : 8;
        unsigned int GREEN : 8;
        unsigned int BLUE : 8;
    } bf_color = {0xAD, 0xD8, 0xE6}; // Light blue

    // accesso alle componenti; si noti l'estrema semplicità di utilizzo!!!
    printf("Componenti bf_color: [%d, %d, %d]\n",
           bf_color.RED,
           bf_color.GREEN,
           bf_color.BLUE
           );

    return (EXIT_SUCCESS);
}

// definizione delle funzioni per l'estrazione delle componenti di un colore
unsigned char getRED(unsigned int color)
{
    return (color >> 16) & MASK;
}

unsigned char getGREEN(unsigned int color)
{
    return (color >> 8) & MASK;
}

unsigned char getBLUE(unsigned int color)
{
    return color & MASK;
}
