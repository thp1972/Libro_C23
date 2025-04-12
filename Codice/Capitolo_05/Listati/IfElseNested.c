/* IfElseNested.c :: Dimostra l'uso di if/else nidificati :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 3; 
 
    if(a >= 10) 
       printf("a >= 10\n");
    else 
       if(a >= 5) 
          printf("a >= 5 e a < 10\n"); 
       else 
          if(a >= 0) 
             printf("a >= 0 e a < 5\n");  

    return (EXIT_SUCCESS);
}
