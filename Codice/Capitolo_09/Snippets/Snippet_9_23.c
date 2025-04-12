#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // conterrà un indirizzo di memoria dove saranno posti gli stati di un lettore DVD
    // per esempio: 0, chiuso; 1, aperto; 2, motore avviato; 3, motore arrestato; ecc.
    int *DVD_status = (int *) 0x0000ABCD; // indirizzo di memoria fittizio!
    // CONSIGLIATO
    // volatile int *DVD_status = (int *) 0x0000ABCD; // indirizzo di memoria fittizio!

    // assegnamenti multipli; in questo caso, dato che la variabile DVD_status non viene
    // modificata il compilatore potrebbe impiegare dei registri CPU per migliorare
    // il suo accesso consecutivo; tuttavia poiché DVD_status può essere cambiato anche
    // dall'hardware che gestisce il DVD quest'ottimizzazione è un problema perché il compilatore
    // leggerebbe il valore da un registro invece che dalla memoria principale e tale
    // valore sarebbe, pertanto, non aggiornato correttamente
    int stat_1 = *DVD_status;
    int stat_2 = *DVD_status;
    int stat_3 = *DVD_status;
    int stat_4 = *DVD_status;

    // conterrà un indirizzo di memoria di un timer hardware che sarà aggiornato in automatico
    // poniamo il caso, per semplicità, che tale aggiornamento avvenga ogni millisecondo
    int *timer = (int *) 0x00001234; // indirizzo di memoria fittizio!
    // CONSIGLIATO
    // volatile int *timer = (int *) 0x00001234; // indirizzo di memoria fittizio!
    int current_time = 0;

    // un loop che monitora il timer e alla fine di 1 secondo esce;
    // un compilatore potrebbe ottimizzare questo loop cambiandolo nel seguente:

    // current_time = *timer; // legge solo una volta il valore corrente del timer
    // while (current_time < 1000) { ; /* non fa niente */ }

    // perché può ritenere che sia inutile leggere ripetutamente il valore di *timer
    // e assegnarlo alla variabile current_time non essendo quest'ultimo affetto da alcun
    // cambiamento (loop invariant expression); 
    // in pratica può ritenere inefficiente dover assegnare, un valore che, dal suo punto di vista, 
    // "è sempre lo stesso” per 1000 volte alla variabile current_time;
    // a questo scopo, quindi, può ritenere che sia sufficiente leggere il valore di *timer solo 
    // una volta...;
    // chiaramente quest'ottimizzazione è un problema sia perché causa un loop infinito sia
    // perché c'è necessità di leggere, sempre, ogni millisecondo il valore cambiato dal timer 
    // hardware
    while (current_time < 1000)
        current_time = *timer;  
    
    return (EXIT_SUCCESS);
}







