#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    // regola punto 2.
    int a = 11;
    double d = 33.455;
    double d_res = a + d; // a promosso in double

    // regola punto 4.
    char g = 'F';
    short int s = 345;
    int i_res = g + s; // g e s promossi in int

    // regola punto 5. a.
    unsigned long int ul = 1234567UL;
    unsigned int ui = 213213U;
    unsigned long int ul_res = ul + ui; // ui è promosso in unsigned long 

    // regola punto 5. b.
    unsigned long int ul_2 = 3234567UL;
    long int li = 2400000L;
    unsigned long int ul_res_2 = ul_2 + li; // li è promosso in unsigned long

    // regola punto 5. c.
    long int li_2 = 4678989L;
    unsigned int ui_2 = 5678999U;
    long int li_res = li_2 + ui_2; // ui_2 è promosso in long int

    // regola punto 5. d.
    long long int ll_i = 1234567000LL;
    unsigned long int ul_3 = 3456789890UL;
    // ul_3  e ll_i sono promossi in unsigned long long int
    unsigned long long int ulli_res = ll_i + ul_3;

    return (EXIT_SUCCESS);
}
