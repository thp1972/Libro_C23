#include <stdio.h>
#include <stdlib.h>

// x, y e data sono visibili solo in quest'ambito ossia nell'ambito della
// corrente dichiarazione del prototipo di foo; per esempio x è visibile dal
// punto della sua dichiarazione (dopo di esso) e fino alla parentesi tonda )
// che delimita la chiusura del function declarator
void foo(int x, int y, int data[][y]);

int main(void)
{
    return (EXIT_SUCCESS);
}



