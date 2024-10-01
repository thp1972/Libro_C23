# Debugging

Il *debugging* è, nella sostanza, un procedimento che consente di esaminare un’applicazione una riga di codice alla volta, al fine di scoprire la causa di errori occorsi durante la sua esecuzione; viene effettuato utilizzando un apposito strumento software detto *debugger*, che nel nostro caso sarà GDB (The GNU Project Debugger).

Dato il programma seguente (Listato G.1), vediamo i passi necessari per attivare ed eseguire una sessione di debugging.

>[!NOTE]
>Nel nostro caso il programma non conterrà errori ma lo stesso ci sarà comunque utile per vedere, seppur brevemente, come usare un debugger.

---

###### Listato G.1 (Debugging.c).

```c
/* Debugging.c :: Un test di debugging... :: */ 
#include <stdio.h>
#include <stdlib.h>

int makeSum(const int *a, const int *b)
{
   int sum = *a + *b; 
   return sum;
}

int main(void)
{
    int a = 100, b = 200;
    int s = makeSum(&a, &b);
    printf("Somma = %d\n", s);
    
    return (EXIT_SUCCESS);
}
```

---

**Compiliamo** il sorgente `Debugging.c` utilizzando l’opzione `-g`, la quale consente di produrre informazioni di debugging nel formato nativo del sistema operativo in uso (in pratica questa opzione aggiunge una tabella dei simboli al file eseguibile nella quale sono memorizzati i nomi e i numeri di riga di codice delle variabili e delle funzioni presenti nel file sorgente; questo consente a `gdb` di usare queste informazioni per effettuare comuni operazioni di debugging come impostare dei *breakpoint*, avanzare attraverso le righe del codice sorgente, ottenere il valore di una particolare variabile e così via).

---

###### Shell G.1 Compilazione di Debugging.c.

```bash
[thp@localhost MY_C_SOURCES]$ gcc -std=c23 -Wall -g Debugging.c -o $HOME/MY_C_BINARIES/Debugging
```

---

**Avviamo** il debugger `gdb` passandogli come argomento il nome del file eseguibile. Questo farà apparire un prompt dei comandi proprio di `gdb` da dove sarà possibile inserire gli opportuni comandi di debugging e vederne il relativo output.

---

###### Shell G.2 Avvio del debugger.

```bash
[thp@localhost MY_C_BINARIES]$ gdb Debugging
```

---

**Impostiamo** un *breakpoint*, ossia un punto nell’ambito del codice sorgente che farà fermare lì l’esecuzione del programma e consentirà, a partire dal quel punto, di compiere altre operazioni di debugging.

---

###### Shell G.3 Impostazione di un breakpoint alla riga 14 del codice sorgente.

```bash
(gdb) break 14
Breakpoint 1 at 0x401150: file Debugging.c, line 14.

```

---

**Avviamo** l’esecuzione del programma.

---

###### Shell G.4 Avvio del programma.

```bash
(gdb) run
Starting program: /home/thp/MY_C_BINARIES/Debugging 
...
Breakpoint 1, main () at Debugging.c:14
14       int a = 100, b = 200;

```

>[!NOTE]
>Se l'avvio del comando `run` mostra la seguente informazione rispondete `y`:

``This GDB supports auto-downloading debuginfo from the following URLs: <https://debuginfod.fedoraproject.org/> Enable debuginfod for this session? (y or [n])``

---

**Avanziamo** alle righe di codice successive due volte così da entrare nella funzione `makeSum`. Solitamente il comportamento di un comando di *step into* è il seguente: se incontra una chiamata di funzione vi entra e fa fermare il debugging alla sua prima istruzione.

---

###### Shell G.5 Avanzamento nel codice sorgente (step into).

```bash
(gdb) step 2
makeSum (a=0x7fffffffdcc8, b=0x7fffffffdcc4) at Debugging.c:8
8	   int sum = *a + *b;

```

---

**Mostriamo** il valore riferito dal puntatore a.

---

###### Shell G.6 Visualizzazione del valore di una variabile.

```bash
(gdb) print *a
$1 = 100
```

---

**Avanziamo** di un’altra riga di codice in modalità *step over*. In linea generale il comportamento di un comando di *step over* è il seguente: se incontra una chiamata di funzione esegue tutte le sue istruzioni senza entrarvi ed eseguire quindi *step by step* ogni singola istruzione.

---

###### Shell G.7 Avanzamento nel codice sorgente (step over).

```bash
(gdb) next
9          return sum;
```

---
**Modifichiamo** il valore della variabile `sum`.

---

###### Shell G.8 Modifica del valore di una variabile.

```bash
(gdb) set variable sum = 500
```

---

**Usciamo** subito dalla funzione corrente (modalità *step out*). In linea generale il comportamento di un comando di *step out* è il seguente: finisce l’esecuzione dell’attuale funzione e fa fermare il debugging nel punto dove è stata invocata la funzione medesima.

---

###### Shell G.9 Avanzamento nel codice sorgente (step out).

```bash
(gdb) finish
Run till exit from #0  makeSum (a=0x7fffffffdcc8, b=0x7fffffffdcc4) at Debugging.c:9
0x0000000000401171 in main () at Debugging.c:15
15	    int s = makeSum(&a, &b);
Value returned is $2 = 500

```

---

**Avanziamo** di altre righe di codice in modalità *step over* finché l’indicazione della corrente riga dello step di debugging non sia posta sull’istruzione `return (EXIT_SUCCESS)`; verifichiamo che nell’output appaia la stringa `Somma = 500`.

---

###### Shell G.10 Avanzamento nel codice sorgente (step over).

```bash
(gdb) next
16          printf("Somma = %d\n", s);
(gdb) next
Somma = 500
18          return (EXIT_SUCCESS);

```

---

**Terminiamo** la corrente sessione di debugging.

---

###### Shell G.11 Conclusione di una sessione di debugging.

```bash
(gdb) quit
A debugging session is active.

    Inferior 1 [process 7781] will be killed.

Quit anyway? (y or n) y

```

---
Possiamo, infine, utilizzare altri importanti comandi con un debugger quali:

- `backtrace` mostra il corrente `function call stack`.

---

###### Shell G.12 Un esempio del comando `backtrace` dopo che siamo entrati nella funzione `makeSum`.

```bash
(gdb) backtrace
#0  makeSum (a=0x7fffffffe058, b=0x7fffffffe054) at Debugging.c:8
#1  0x0000000000400581 in main () at Debugging.c:15
```

---

- `disassemble` mostra il codice assembly della corrente funzione.

---

###### Shell G.13  Un esempio del comando `disassemble` della funzione `makeSum`.

```bash
(gdb) disassemble 
Dump of assembler code for function makeSum:
   0x0000000000401126 <+0>:	push   %rbp
   0x0000000000401127 <+1>:	mov    %rsp,%rbp
   0x000000000040112a <+4>:	mov    %rdi,-0x18(%rbp)
   ...
```

---

- `watch` mostra i cambiamenti di valore di un variabile o un’espressione durante l’esecuzione del programma.

---

###### Shell G.14  Un esempio del comando `watch` nella funzione `makeSum`.

```bash
(gdb) watch sum
Hardware watchpoint 2: sum
(gdb) finish
Run till exit from #0  makeSum (a=0x7fffffffdd08, b=0x7fffffffdd04) at Debugging.c:8

Hardware watchpoint 2: sum

Old value = 0
New value = 300
makeSum (a=0x7fffffffdd08, b=0x7fffffffdd04) at Debugging.c:9
9	   return sum;
(gdb)...
```

[!IMPORTANT]
>Prima di digitare `watch sum` dovete eseguire, in successione, i seguenti comandi in `gdb`: `break 14`, `run` e `step 2`.

---