#include <stdio.h>                              
#include <stdlib.h>                             
                                                
#define MAKE_STR(s) #s 
#define M_ALIGN(b) _Pragma(MAKE_STR(pack(b)))

int main(void)                              
{                                               
    M_ALIGN(1) // M_ALIGN(1) sarà espansa come: #pragma pack(1)
   
    struct S
    {
        char c_data;
        int data;
    } s ={'Z', 122};

    printf("%zu\n", sizeof (s)); // 5
    
    return (EXIT_SUCCESS);
}
