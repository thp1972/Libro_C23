#include <stdio.h>
#include <stdlib.h>

int main(void)
{
#if __has_embed("data.txt") == __STDC_EMBED_FOUND__
    const unsigned char data[] =
    {
        #embed "data.txt" limit(5) prefix(0x7B,) suffix(,0x7D)
    };
#else
    #error data.txt non è stato trovato: impossibile procedere...
#endif
    return (EXIT_SUCCESS);
}