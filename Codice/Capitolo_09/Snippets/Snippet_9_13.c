#include <stdio.h>
#include <stdlib.h>

// error: file-scope declaration of 'a' specifies 'auto'
auto int a = 100; // auto non usabile per variabili esterne!!!

int main(void)
{
    // auto scritto in modo esplicito; non necessario perché le variabili interne
    // hanno sempre, di default, lo specificatore di classe auto
    auto int b = 200;

    return (EXIT_SUCCESS);
}



