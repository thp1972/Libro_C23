/* StructuresAndFunctions.c :: Strutture e funzioni :: */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct point // una struttura di tipo struct point
{
    int x;
    int y;
    int sum;
};

// prototipi di funzione
struct point buildAPoint(int x, int y);
struct point sumOfPoints(struct point p1, struct point p2);
void randomPoint(struct point *ptr_to_point);

int main(void)
{
    // inizializzazione del generatore pseudo-casuale dei numeri
    srand((unsigned int) time(NULL));

    // genero due strutture di tipo struct point
    struct point point_1 = buildAPoint(100, 100);
    struct point point_2 = buildAPoint(200, 200);

    printf("point_1 [x=%d], [y=%d]\n", point_1.x, point_1.y);
    printf("point_2 [x=%d], [y=%d]\n\n", point_2.x, point_2.y);

    // genero una struttura che è la somma di point_1 e point_2
    struct point sum_of_point_1_and_point_2 = sumOfPoints(point_1, point_2);

    printf("sum_of_point_1_and_point_2 [x=%d], [y=%d]\n\n",
           sum_of_point_1_and_point_2.x, sum_of_point_1_and_point_2.y);

    // modifico rand_point tramite una funzione che ne imposta in modo random
    // i membri x e y
    struct point rand_point;
    randomPoint(&rand_point);

    printf("rand_point [x=%d], [y=%d]\n", rand_point.x, rand_point.y);

    return (EXIT_SUCCESS);
}

// ritorna una struttura di tipo struct point con i membri inizializzati
// con i valori dei parametri x e y
struct point buildAPoint(int x, int y)
{
    return (struct point){.x = x, .y = y};
}

// calcola la somma di due punti e li ritorna in una struttura di tipo struct point
struct point sumOfPoints(struct point p1, struct point p2)
{
    return (struct point){.x = p1.x + p2.x, .y = p1.y + p2.y};
}

// assegna ai membri x e y della struttura puntata da ptr_to_point dei valori casuali
void randomPoint(struct point *ptr_to_point)
{
    ptr_to_point->x = rand() % 1000; // numeri pseudo-casuali tra 0 e 999
    ptr_to_point->y = rand() % 1000; // numeri pseudo-casuali tra 0 e 999    
}
