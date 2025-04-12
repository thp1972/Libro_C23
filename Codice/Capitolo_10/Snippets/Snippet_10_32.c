#include <stdio.h>                              
#include <stdlib.h>                             
                                                
// questa macro farà generare al compilatore il seguente messaggio:
// Snippet_10_32.c:13:7: error: "other" is not a valid filename
// perché alla linea 13 LINE_AND_FILE non si espanderà nella forma 
// sintattica corretta di #line ossia #line digit "s_char_sequence"
#define LINE_AND_FILE 55 other.c

int main(void)                              
{                                               
// cambio la numerazione di linea e il nome del file di codice sorgente                
#line LINE_AND_FILE // espansa come 55 other.c                            
    printf("%d - %s \n",__LINE__, __FILE__); // 55 - other.c    
    
    return (EXIT_SUCCESS);
}
