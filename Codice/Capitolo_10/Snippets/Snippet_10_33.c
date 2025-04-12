#include <stdio.h>                              
#include <stdlib.h>                             
                                                
// istruisco il compilatore affinché ogni membro di una struttura sia allineato
// single-byte; non vi saranno mai byte di padding!
#pragma pack(1)

int main(void)                              
{                                               
    // senza la direttiva #pragma pack(1) questa struttura peserebbe in memoria
    // 8 byte perché il compilatore porrebbe 3 byte di padding dopo c_data in modo
    // che data, di tipo int a 32 bit sul corrente sistema, sia allineato a
    // un indirizzo di memoria multiplo di 4
    struct S
    {
        char c_data;
        int data;
    } s = {'Z', 122};

    printf("%zu\n", sizeof (s)); // 5
    
    return (EXIT_SUCCESS);
}
