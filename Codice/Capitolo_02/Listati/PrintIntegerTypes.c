/* PrintIntegerTypes.c :: Stampa tutti i tipi interi :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // tipi di dato intero considerando i valori garantiti dallo standard C23
    short s = -10000;
    unsigned short us = 60000;

    int i = -32000;
    unsigned int ui = 40000U;

    long l = -1000000000L;
    unsigned long ul = 4'000'000'000UL; // equivalente LU

    long long ll = -45'000'000'000'000'000LL;
    unsigned long long ull = 17'000'000'000'000'000'000ULL; // equivalente LLU

    // stampa dei valori usando i corretti specificatori di formato
    printf("short: %hd\n", s); // %hb, %ho o %hx stampano uno short in binario, ottale 
                               // o esadecimale
    printf("unsigned short: %hu\n", us);

    printf("int: %d\n", i); // %b, %o o %x stampano un int in binario, ottale 
                            // o esadecimale
    printf("unsigned int: %u\n", ui);

    printf("long: %ld\n", l); // %lb, %lo o %lx stampano un long in binario, ottale 
                              // o esadecimale
    printf("unsigned long: %lu\n", ul);

    printf("long long: %lld\n", ll); // %llb, %llo o %llx stampano un long long in binario,
                                     // ottale o esadecimale
    printf("unsigned long long: %llu\n", ull);

    return (EXIT_SUCCESS);
}
