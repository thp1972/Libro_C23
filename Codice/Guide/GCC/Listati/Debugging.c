/* Debugging.c :: Un test di debugging... :: */ 
#include <stdio.h>
#include <stdlib.h>

int makeSum(const int *a, const int *b)
{
   int sum = *a + *b; 
   return sum;
}

int main(void)
{
    int a = 100, b = 200;
    int s = makeSum(&a, &b);
    printf("Somma = %d\n", s);
    
    return (EXIT_SUCCESS);
}

