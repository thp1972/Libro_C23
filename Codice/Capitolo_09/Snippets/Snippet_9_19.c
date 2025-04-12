#include <stdio.h>
#include <stdlib.h>
#include <threads.h>

// usiamo lo specificatore di classe thread_local in modo
// che la variabile counter abbia una thread storage duration
// ovvero, è creata quando il thread è avviato e distrutta quando
// il medesimo thread cessa la sua esecuzione
// inoltre ogni thread ha la sua copia locale di counter
thread_local int counter = 0;

// questa funzione verrà eseguita da ogni thread
int thread_function(void* arg)
{
    for (int i = 0; i < 5; i++)
    {
        counter++; // utilizzo di counter
        printf("Thread ID: %lu, counter: %d\n", thrd_current(), counter);
    }
    return 0;
}

int main()
{
    // oggetti thread di tipo thrd_t
    thrd_t thread1, thread2;

    // creazione dei thread
    thrd_create(&thread1, &thread_function, nullptr);
    thrd_create(&thread2, &thread_function, nullptr);

    // blocca un thread in attesa della sua terminazione
    thrd_join(thread1, nullptr);
    thrd_join(thread2, nullptr);

   // valore di counter nel thread principale...
    printf("Thread di main: counter: %d\n", counter);
	
    return (EXIT_SUCCESS);
}
