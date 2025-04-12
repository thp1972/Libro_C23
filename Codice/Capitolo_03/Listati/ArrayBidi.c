/* ArrayBidi.c :: Utilizzo di un matrice :: */
#include <stdio.h>
#include <stdlib.h>

#define YEARS 4
#define QUARTERS 4
#define START_YEAR 2010

int main(void)
{
    double total = 0; // totale introiti in tutti gli anni e trimestri
    double subtotal; // totale parziale introiti di un anno

    // introiti percepiti negli anni dal 2010 al 2013 nei relativi 4 trimestri
    double earnings[YEARS][QUARTERS] = 
    {
        /*  I      II      III     IV          trimestre */
        {890.00, 899.00, 1000.11, 998.55},  /* anno 2010 */
        {789.59, 800.00, 1234.99, 699.00},  /* anno 2011 */
        {1490.00, 497.33, 100.00, 2045.60}, /* anno 2012 */
        {678.00, 1999.00, 632.50, 1090.00}  /* anno 2013 */
    };

    printf("Anno\tIntroiti raggruppati per anni dati i trimestri\n\n");
    for (int i = 0; i < YEARS; i++) // loop esterno per ogni anno
    {
        for (int j = 0; j < QUARTERS; j++) // loop interno per ogni trimestre
        {
            subtotal += earnings[i][j];
        }
        printf("%d\t%10.2f\n", START_YEAR + i, subtotal);
        total += subtotal; // aggiorna il totale
        subtotal = 0;
    }
    printf("\nTotale\t%10.2f\n\n", total);

    printf("Trim.\tIntroiti raggruppati per trimestri dati gli anni\n\n");
    total = 0;
    for (int j = 0; j < QUARTERS; j++) // loop esterno per ogni trimestre
    {
        for (int i = 0; i < YEARS; i++) // loop interno per ogni anno
        {
            subtotal += earnings[i][j];
        }
        printf("%d\t%10.2f\n", 1 + j, subtotal);
        total += subtotal; // aggiorna il totale
        subtotal = 0;
    }
    printf("\nTotale\t%10.2f\n\n", total);

    return (EXIT_SUCCESS);
}
