#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// stabiliamo una soglia di "tolleranza", denominata epsilon, che ci servirà
// per verificare se due valori sono sufficientemente prossimi rispetto a essa
// essa definisce, nella sostanza, quanto "vicini" devono essere due numeri per
// essere considerati uguali
// è importante dire che definiamo epsilon come una tolleranza arbitraria e pratica,
// equivalente a 1e-6, utile nel nostro contesto applicativo per un
// confronto approssimativo
// formalmente, tuttavia, epsilon è definito come la differenza minima positiva
// che può essere rappresentata tra 1.0 e il numero successivo maggiore di 1.0
// matematicamente, per un tipo in virgola mobile, epsilon è il valore più piccolo
// tale che: 1 + epsilon > 1
// in accordo con questa definizione, per un valore float, lo standard C
// definisce la macro FLT_EPSILON (header <float.h>) il cui valor è tipicamente
// uguale a 1.192093e-7
// in questo caso, sarebbe stato meglio utilizzare FLT_EPSILON invece di un valore arbitrario,
// poiché FLT_EPSILON rappresenta la tolleranza minima garantita dalla precisione del tipo float
// ed è ottimizzato per l'architettura hardware e le implementazioni conformi allo standard C.
#define EPSILON 0.000001f // equivalente a 1e-6

// funzione semplificata per calcolare un'uguaglianza approssimata
// tra due valori in virgola mobile che usa un epsilon assoluto
// restituisce true solo se il valore assoluto della differenza tra a e b
// è minore oppure uguale di EPSILON; false in caso contrario
// a e b sono considerati uguali solo se rientrano nel margine di tolleranza specificato
// la funzione controlla se la differenza tra a e b è così piccola
// da essere considerata irrilevante a causa degli errori di arrotondamento intrinseci
// alla rappresentazione in virgola mobile
bool ft_equal(float a, float b) { return  fabs(a - b) <= EPSILON; }

int main(void)
{
    // aggiungere 0.01 a sum per 100 volte porterà a un
    // "accumulo" degli errori di approssimazione sul risultato atteso
    float sum = 0.0f;
    for (int i = 0; i < 100; i++) sum += 0.01f;

    float expected = 1.0f;

    printf("Valore computato: %.10f\n", sum);
    printf("Valore atteso:\t  %.10f\n", expected);

    printf("Usiamo l'operatore ==\n");
    if (sum == expected)
        printf("sum e expected sono uguali (erroneamente, probabilità bassa...)\n");
    else
        printf("sum e expected NON sono uguali (correttamente, molto probabile...)\n");

    printf("Usiamo la funzione ft_equal\n");
    if (ft_equal(sum, expected))
        printf("sum e expected sono approssimativamente uguali\n");
    else
        printf("sum e expected NON sono approssimativamente uguali\n");

    return (EXIT_SUCCESS);
}


