#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // dati finanziari
    // con _Decimal64, i numeri come 0.035 e 10000.00 sono rappresentati esattamente,
    // senza errori di approssimazione
    _Decimal64 initialPrincipal = 10000.00dd; // capitale iniziale
    _Decimal64 annualInterestRate = 0.035dd; // tasso di interesse annuale (3.5%)
    int years = 5; // numero di anni

    _Decimal64 finalPrincipal = initialPrincipal;

    // calcolo del capitale finale con formula degli interessi composti
    // gli interessi composti richiedono precisione assoluta per evitare errori cumulativi,
    // che possono diventare significativi con i tipi in virgola mobile binaria
    // ogni anno infatti il capitale viene calcolato garantendo un accumulo
    // preciso grazie ai tipi in virgola mobile decimale
    for (int i = 0; i < years; i++)
        finalPrincipal *= (1.0dd + annualInterestRate); // accumulo interesse

    // stampa i risultati con precisione decimale
    printf("Calcolo degli interessi composti:\n");
    printf("Capitale iniziale: %.2Df\n", initialPrincipal);
    // nella specifica di conversione seguente %% permette di fare l'escape di % al fine
    // di farlo stampare letteralmente
    printf("Tasso di interesse annuale: %.1Df%%\n", annualInterestRate * 100);
    printf("Durata: %d anni\n", years);
    printf("Capitale finale: %.2Df\n", finalPrincipal);

    return (EXIT_SUCCESS);
}
