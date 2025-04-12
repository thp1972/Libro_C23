#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // interpretalo come short int *
    short int v1;
    printf("Istruzione scanf(\"%%hd\", &v1): ");
    scanf("%hd", &v1); // INPUT:99⏎  v1 = 99

    // sopprimi il primo campo di input;
    // interpreta poi il secondo campo di input come int *
    int v2;
    printf("Istruzione scanf(\"%%*f%%d\", &v2: ");
    int f = scanf("%*f%d", &v2); // INPUT:22.3 33⏎  v2= 33

    // interpretalo come long int *
    // al massimo 10 caratteri saranno interpretati e convertiti
    long int v3;
    printf("Istruzione scanf(\"%%10ld\", &v3: ");
    scanf("%10ld", &v3); // INPUT:1234567898765⏎  v3= 1234567898

    return (EXIT_SUCCESS);
}