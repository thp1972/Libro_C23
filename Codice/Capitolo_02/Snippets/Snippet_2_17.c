#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char b = 111;
    char c = 'd';
    short s = 444;
    int i = 2131;
    long l = 2112;
    float f = 5.6f;
    double d = 3322.11;
    double ris = (c * i) + (f * b) - (d / s) / l;

    printf("%f\n", ris); // 213721.590207

    return (EXIT_SUCCESS);
}