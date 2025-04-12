#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 20

int main(void)
{
    // array di array di caratteri (array bidimensionale o matrice)
    char a_names[ROWS][COLS] = {"Pellegrino", "Andrea", "Marco", "Luca", "Paolo"};
    printf("%zu\n", sizeof a_names); // 100 byte

    printf("%s\n", a_names[0]); // Pellegrino
    printf("%c\n", a_names[0][3]); // l

    // array di puntatori a char
    char *p_names[ROWS] = {"Pellegrino", "Andrea", "Marco", "Luca", "Paolo"};
    printf("%zu\n", sizeof p_names); // 40 byte

    printf("%s\n", p_names[0]); // Pellegrino
    printf("%c\n", p_names[0][3]); // l

    return (EXIT_SUCCESS);
}







