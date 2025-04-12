#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define ITEMS_SIZE 50
#define NR_ITEMS 10

int main(void)
{    
    // tutti i membri, di ogni item, sono posti, senza differenziazione nell’ambito
    // della stessa struttura
    struct // struttura per gli items
    {
        float price;
        int general_item_code;

        char title[ITEMS_SIZE];
        char author[ITEMS_SIZE];
        int number_of_pages;

        char type[ITEMS_SIZE];
        int size;
        char color[ITEMS_SIZE];

        char model_name[ITEMS_SIZE];
        int ram; // in GByte
        int cpu_speed; // in GHertz
        int hd_capacity; // in GByte
        _Bool printer;
        _Bool scanner;
        _Bool integrated_video_card;

    } item[NR_ITEMS]; 

    size_t size_of_items = sizeof item; // 2840 byte
            
    return (EXIT_SUCCESS);
}


