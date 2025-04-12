#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265

[[deprecated("Usa la nuova funzione cube3D")]]
void cube() { printf("Rendering del cubo...\n"); }

[[nodiscard]] double calculate(double v) { return v * PI; }

// annotiamo la struttura con [[nodiscard]] in modo che qualsiasi funzione che
// la usa come valore di ritorno avvisa il compilatore che se tale valore è
// ignorato deve emettere un apposito messaggio diagnostico
struct [[nodiscard]] color {int R; int G; int B; };
struct color HSVtoRGB(int h, int s, int v)
{
    printf("Conversione HSV -> RGB non ancora implementata...\n");
    return (struct color){0, 0, 0};
}

// il compilatore sa che questa funzione non ritorna mai, potrebbe
// quindi provare a ottimizzare il codice
[[noreturn]] void fatalError()
{
    printf("Errore fatale...\n");
    exit(EXIT_FAILURE);
}

// quest'attributo proprietario di GCC indica che il primo argomento della
// funzione NON deve mai essere nullo
[[gnu::nonnull(1)]] void dataAccess(int *value) { *value = 500; }

// questa funzione è "effectless": usa solo le variabili locali x e y
// e non ha effetti collaterali esterni
int multiply(int x, int y) [[reproducible]] { return x * y; }

// questa funzione è "idempotent": se utilizziamo abs(-3); e poi ancora abs(-3);
// il valore restituito sarà sempre 3
int abs(int x) [[reproducible]] { return  x < 0 ? -x : x; }

// questa funzione è "stateless": non dipende da alcuno stato interno o esterno
// la sua elaborazione dipende solo da x e y
int max [[unsequenced]] (int x, int y) { return x > y ? x : y; }

// questa funzione è "independent": invocarla fornendo come argomento 8 o 4 produce
// risultati separati (4 e 2) e non c'è alcuna condivisione di dati tra le due invocazioni
// queste chiamate avrebbero potuto essere eseguite in parallelo su thread diversi o in ordine
// invertito, e l'output sarebbe stato comunque lo stesso
int divideByTwo(int x) [[unsequenced]] { return x / 2; }

int main(void)
{
    // GCC emette il seguente avviso:
    // warning: 'cube' is deprecated: Usa la nuova funzione cube3D
    cube();

    // GCC emette il seguente avviso:
    // warning: ignoring return value of 'calculate', declared with attribute 'nodiscard'
    calculate(33.44);

    // GCC emette il seguente avviso:
    // warning: ignoring return value of type 'struct color', declared with attribute 'nodiscard'
    HSVtoRGB(255, 200, 130);

    // in assenza dell'attributo [[maybe_unused]] GCC genererebbe il seguente avviso:
    // warning: unused variable 'other_value'
    [[maybe_unused]] const int other_value = 3;

    // in una dichiarazione come la seguente l'attributo [[maybe_unused]] è applicato
    // solo alla variabile ad; se avessimo posto lo stesso attributo prima di int allora
    // esso sarebbe stato applicato a tutte le variabili
    int ab, ac, ad [[maybe_unused]], ae;

    const int value = 1;
    // in assenza dell'attributo [[fallthrough]] GCC genererebbe il seguente avviso:
    // warning: this statement may fall through - printf("Caso 1\n");
    switch (value)
    {
        case 1:
            printf("Caso 1\n");
            [[fallthrough]]; // fall through intenzionale
        case 2: printf("Caso 2\n"); break;
        default: printf("Default\n");
    }

    int *data = 100; // ... dovevamo passare data ma passiamo nullptr!
    // GCC emette il seguente avviso:
    // warning: argument 1 null where non-null expected
    dataAccess(nullptr);

    return EXIT_SUCCESS;
}