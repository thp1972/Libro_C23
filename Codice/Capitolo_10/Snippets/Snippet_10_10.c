#include <stdio.h>
#include <stdlib.h>

#define list(x,y,z) x##y##z

int main(void)
{
    int a = 10, b = 11;
    // alla fine delle espansioni data sarà visto dal compilatore come:
    // int data[] =
    // {
    //    123,
    //    13,
    //    23,
    //    12,
    //    1,
    //    2,
    //    3,
    //   
    // };
    // da notare lo spazio "vuoto" dopo 3, lasciato dal preprocessore a seguito dell'espansione
    // di list(,,)
    int data[] = 
    {
        list(1, 2, 3), /* list sarà espansa come 123 */
        list(1,, 3),   /* list sarà espansa come 13 */
        list(, 2, 3),  /* list sarà espansa come 23 */
        list(1, 2,),   /* list sarà espansa come 12 */
        list(1,,),     /* list sarà espansa come 1 */
        list(, 2,),    /* list sarà espansa come 2 */
        list(,, 3),    /* list sarà espansa come 3 */
        list(,,)       /* espansione "vuota"... */
    };

    return (EXIT_SUCCESS);
}






