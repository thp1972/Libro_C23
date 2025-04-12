/* ManifestConstants.c :: Mostra come creare simboli di costanti con #define :: */
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159f /* valore: costante numerica */
#define ADDRESS 0x0040f840 /* valore: costante numerica in esadecimale */
#define NL '\012' /* valore: costante carattere in ottale */
#define BEEP '\a' /* valore: costante carattere */
#define HELLO  "Un saluto a tutti!" /* valore: costante stringa */ 
#define BEGIN { /* un carattere qualsiasi */
#define END } /* un carattere qualsiasi */

int main(void)
BEGIN // {
    float raggio = 5.0f;
    
    float area = PI * raggio * raggio;
    //float area = 3.14159f * raggio * raggio;  

    const int *ptr = (const int *) ADDRESS;
    // const int *ptr = (const int *)0x0040f840;

    putchar(BEEP);
    // putchar('\a');

    printf(HELLO);
    // printf("Un saluto a tutti!");

    putchar(NL);
    // putchar('\012');

    return (EXIT_SUCCESS);
END // }

