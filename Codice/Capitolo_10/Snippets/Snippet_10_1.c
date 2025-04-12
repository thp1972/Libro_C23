#include <stdio.h>
#include <stdlib.h>

// definizioni di macro semplici; tutte valide
// nell'ambito del codice sorgente dove si troveranno i loro nomi il preprocessore
// li espanderà, letteralmente, con la lista di token definita dopo il nome stesso
#define NR 10 /* una macro per una costante numerica intera */
#define EULER 0.5772 /* una macro per una costante numerica in virgola mobile */
#define TpT 2per2 /* una macro per un preprocessing number */
#define MY_INT int /* una macro per una keyword del C (è un normale identificatore per il 
                      preprocessore) */
#define LT < /* una macro per un segno di punteggiatura */
#define GT > /* una macro per un segno di punteggiatura */
#define NL '\n' /* una macro per una costante carattere */
#define _WARN_ "warning: " /* una macro per una costante stringa */
#define I_LOOP while(1) /* una macro per un frammento di codice del C */

// per questa macro tutti gli spazi dopo il nome della macro e dopo la cifra 4 
// non sono considerati come parte dell'espansione; allo stesso modo tutti i 
// caratteri extra tra la cifra 0 il carattere * e tra lo stesso carattere * e la cifra 4 
// non sono considerati ossia è considerato solo un carattere di spazio di separazione;
// ciò significa che in un sorgente dove avremo qualcosa come int a = SIZE; la stessa sarà 
// presentata al compilatore come int a = 10 * 4;
#define SIZE      10      *      4    /* una macro semplice ... */

// attenzione un'implementazione può generare un messaggio come:
// warning: "ONE" redefined
#define ONE  1
#define ONE  2

// ridefinizione consentita!
#define TWO 10
#define TWO 10

#define SIX 3 * 2 /* I definizione */
// per il preprocessore 3*2 è un solo token perché tra 3 * e 2 non vi sono spazi
// infatti per il preprocessore ogni token è numerabile se separato dallo spazio
#define SIX 3*2   /* II definizione warning: "SIX" redefined */
#define SIX 2 * 3 /* III definizione warning: "SIX" redefined */

int main(void)
{
    return (EXIT_SUCCESS);
}







