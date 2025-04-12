#include <stdio.h>

// inclusione dell'header A_3.h
#include "A_3.h"

// definizione di setPixelAt
void setPixelAt(struct point p, enum colors c)
{
    printf(MSG);
    printf("Accendo il pixel alle coordinate [%d, %d] con il colore: [%X]\n", 
           p.x, p.y, c);
}
