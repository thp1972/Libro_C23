// alcune macro semplici
#define SIZE 100
#define MSG "ELABORAZIONE IN CORSO...\n"

// una dichiarazione typedef
typedef long int BigInt;

// dichiarazione di una struttura
struct point 
{
    int x;
    int y;
};

// dichiarazione di un enum
enum colors 
{
    RED = 0xF00, GREEN = 0x0F0, BLUE = 0x00F, WHITE = 0xFFF, BLACK = 0x000
};

// prototipo di setPixelAt
void setPixelAt(struct point p, enum colors c);
