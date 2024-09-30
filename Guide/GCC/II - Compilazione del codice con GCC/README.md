# Compilazione

Per questo tutorial sulla fase di compilazione useremo un canonico listato che stamperà a video il messaggio `Hello, C programmers!` (Listato G.1).

[!NOTA]
Per compilare ed eseguire direttamente i listati e gli snippet di codice creare la seguente struttura “parlante” di directory, posta a partire dalla directory *home* del sistema operativo scelto (per noi sarà GNU/Linux): `MY_C_SOURCES`, `MY_C_BINARIES`, `MY_C_OBJECTS`, `MY_C_INCLUDE`, `MY_C_STATIC_LIBRARIES`, `MY_C_SHARED_LIBRARIES`, `MY_C_FILES`. Tale struttura non è obbligatoria ma è consigliabile replicarla al fine di seguire nel miglior modo possibile quanto indicato nel presente testo.

---

###### Listato G.1 (HelloWorld.c)

```c
/* HelloWorld.c :: Stampa un semplice messaggio :: */ 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Hello, C programmers!\n");
    return (EXIT_SUCCESS);
}
```

---

Apriamo una shell, posizioniamoci nella directory `MY_C_SOURCES`, dove avremo collocato `HelloWorld.c`, e lanciamo il comando evidenziato nella Shell G.1.

---

###### Shell G.1 Compilazione di HelloWorld.c

```bash
[thp@localhost MY_C_SOURCES]$ gcc -std=c23 -Wall HelloWorld.c -o $HOME/MY_C_BINARIES/HelloWorld
```

---

Il comando di compilazione mostrato compila il file `HelloWorld.c` creando codice macchina che memorizza in un file eseguibile il cui nome e percorso sono indicati tramite l’opzione `-o` (ricordiamo che l’opzione `-std=c23` indica che il programma da compilare ha adottato lo standard di C fornito, e pertanto il compilatore deve accettarne tutte le relative caratteristiche, mentre l’opzione `-Wall` attiva la maggior parte degli avvertimenti di compilazione utili per rilevare determinati problemi legati all’uso dei costrutti di C).
Posizioniamoci, quindi, nella directory `MY_C_BINARIES` e digitiamo il nome del file eseguibile creato al fine di farlo caricare in memoria e farlo processare dalla corrente CPU.

---

###### Shell G.2 Esecuzione di HelloWorld

```bash
[thp@localhost MY_C_BINARIES]$ ./HelloWorld
```

---

---

###### Output G.1 Esecuzione della Shell G.2

```bash
Hello, C programmers!
```

---

Vediamo ora come compilare più file sorgente dividendo il nostro programma nei tre file seguenti: `HelloWorldM.c` (Listato G.2); `ShowMessage.h` (Listato G.3); `ShowMessage.c` (Listato G.4).

---

###### Listato G.2 (HelloWorldM.c)

```c
/* HelloWorldM.c :: Stampa un semplice messaggio :: */
#include <stdlib.h>
#include "ShowMessage.h"

int main(void)
{
    showMessage("everybody");
    return (EXIT_SUCCESS);
}
```

---

---

###### Listato G.3 (ShowMessage.h)

```c
#ifndef SHOWMESSAGE_H
#define SHOWMESSAGE_H

void showMessage(const char *);

#endif
```

---

---

###### Listato G.4 (ShowMessage.c)

```c
#include <stdio.h>
#include "ShowMessage.h"

void showMessage(const char *message)
{
    printf("Hello, %s!\n", message);
}
```

---

---

###### Shell G.3 Compilazione di HelloWorldM.c e ShowMessage.c

```bash
[thp@localhost MY_C_SOURCES]$ gcc -std=c23 -Wall HelloWorldM.c ShowMessage.c -o $HOME/MY_C_BINARIES/HelloWorldM
```

---

In definitiva per compilare più file sorgente è sufficiente porre i loro nomi di seguito sulla stessa riga e fornire comunque l’opzione `-o` per generare il relativo file eseguibile.
Digitiamo poi da `MY_C_BINARIES` `HelloWorldM` per mandare in esecuzione il relativo programma (Output G.2).

---

###### Output G.2 Esecuzione di HelloWorldM

```bash
Hello, everybody!
```

---

La seguente invocazione di `gcc` (Shell G.4) che fa uso dell’opzione `-c` consente invece di creare dei file oggetto con estensione `.o` dai file sorgente `HelloWorldM.c` e `ShowMessage.c`.

[!NOTE]
Se si omette l’indicazione dell’output dove creare un file oggetto con l’opzione `-o`, allora il compilatore, in automatico, lo creerà nella stessa directory del file sorgente relativo con il nome di quest’ultimo e l’estensione `.o`.

---

###### Shell G.4 Creazione di HelloWorldM.o e ShowMessage.o

```bash
[thp@localhost MY_C_SOURCES]$ gcc -std=c23 -Wall -c HelloWorldM.c -o $HOME/MY_C_OBJECTS/HelloWorldM.o &&
                              gcc -std=c23 -Wall -c ShowMessage.c -o $HOME/MY_C_OBJECTS/ShowMessage.o
```

---

I file oggetto `HelloWorldM.o` e `ShowMessage.o` possono poi essere combinati insieme dal linker per produrre il file eseguibile relativo indicando sulla stessa riga i file oggetto anzidetti e la consueta opzione `-o` (Shell G.5; ricordarsi di spostarsi nella directory `MY_C_OBJECTS`).

---

###### Shell G.5 Creazione di HelloWorldM da HelloWorldM.o e ShowMessage.o

```bash
[thp@localhost MY_C_OBJECTS]$ gcc -std=c23 HelloWorldM.o ShowMessage.o -o $HOME/MY_C_BINARIES/HelloWorldM
```

---

