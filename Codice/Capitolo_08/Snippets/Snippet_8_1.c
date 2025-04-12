#include <stdio.h>
#include <stdlib.h>

#define MAX_A_LENGTH 50

int main(void)
{
    // dichiara una struttura di tipo struct book contenente
    // come membri gli oggetti lì dichiarati
    struct book
    {
        char title[MAX_A_LENGTH];
        char author_name[MAX_A_LENGTH];
        char publisher_name[MAX_A_LENGTH];
        int publication_year;
        float price;
        int stock;
    };

    // definisce l'oggetto a_book di tipo struct book
    struct book a_book;

    // dichiara una struttura di tipo struct senza alcun tag contenente
    // i membri x e y e contestualmente definisce l'oggetto a_point di 
    // quel tipo di struttura senza nome 
    struct
    {
        int x;
        int y;
    } a_point;

    // dichiara una struttura di tipo struct employee contenente i membri
    // lì indicati e contestualmente definisce gli oggetti White, Stone e
    // Gattes di quel tipo
    struct employee
    {
        char first_name[MAX_A_LENGTH];
        char last_name[MAX_A_LENGTH];
        int identifier_code;
        char job_title[MAX_A_LENGTH];
    } White, Stone, Gattes;

    return (EXIT_SUCCESS);
}

