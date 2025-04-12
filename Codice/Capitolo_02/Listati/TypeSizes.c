/* TypeSizes.c :: Visualizza la dimensione dei tipi nel sistema in uso :: */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("******************************************\n");
    printf("* TYPE SIZES DEL CORRENTE SISTEMA IN USO *\n");
    printf("******************************************\n\n");
    printf(" bool\t\t%zu byte\n", sizeof (bool));
    printf(" char\t\t%zu byte\n", sizeof (char));
    printf(" int\t\t%zu byte\n", sizeof (int));
    printf(" long\t\t%zu byte\n", sizeof (long));
    printf(" long long\t%zu byte\n", sizeof (long long));
    printf(" float\t\t%zu byte\n", sizeof (float));
    printf(" double\t\t%zu byte\n", sizeof (double));
    printf(" long double\t%zu byte\n\n", sizeof (long double));
    printf("******************************************\n");
    return (EXIT_SUCCESS);
}
