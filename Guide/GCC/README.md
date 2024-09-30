# GCC

GCC, oggi acronimo di *GNU Compiler Collection*, è stato in origine sviluppato da Richard Stallman, hacker, attivista e scienziato informatico fondatore del progetto GNU e della Free Software Foundation, come compilatore C conforme alle specifiche ANSI e come free software (all’epoca, nel 1987, GCC era infatti acronimo di *GNU C Compiler*).

[!NOTE]
Il progetto GNU (acronimo ricorsivo di *GNU’s Not Unix*), annunciato nell’autunno del 1983 da Richard Stallman, nacque con l’obiettivo di creare un sistema operativo compatibile con il sistema operativo Unix ma fatto esclusivamente di free software, ossia di programmi che potessero essere liberamente utilizzati, modificati, copiati e distribuiti. A tal fine fu anche creata un’apposita licenza di free software, la GNU GPL (GPL sta per *General Public License*), che era di tipo *copyleft* e permetteva “legalmente” quelle liberà prima menzionate. Quel sistema operativo, seppure non direttamente progettato nell’alveo del progetto GNU originario, è oggi conosciuto con il nome completo di GNU/Linux, laddove Linux è il nome del suo kernel sviluppato, a partire dal 1991, da un altro geniale programmatore, Linus Torvalds. La Free Software Foundation, invece, nacque nell’autunno del 1985 come organizzazione senza fini di lucro per lo sviluppo di software libero, per la promozione e la difesa delle libertà prima menzionate e per il supporto di tutto quello che ruotava (e ruota) attorno al progetto GNU.

[!NOTE]
Nel mondo della comunità di hacker è molto diffusa la moda di creare degli acronimi ricorsivi per denominare dei programmi; un *acronimo ricorsivo* è un acronimo che contiene sé stesso per intero e all’interno della propria scrittura; infatti in “GNU’s Not Unix” è presente l’acronimo GNU stesso.

GCC, quindi, allo stato attuale, offre il supporto non solo per il linguaggio C e relativa libreria, ma dispone anche di front end e rispettive librerie per i linguaggi di programmazione C++, Objective-C, Objective-C++, Fortran, Java, ADA, D e Go.

[!WARNING]
GCC è una *freestanding implementation* e dunque mette a disposizione solo un limitato set di funzionalità della libreria standard. Una libreria standard del C completa è quindi tipicamente fornita dal vendor di un determinato sistema operativo; per esempio, nei sistemi GNU/Linux, è fornita di serie la GNU C library (glibc), che è quindi un progetto assolutamente scollegato dal progetto proprio della suite di compilazione GCC.

GCC dispone inoltre di diversi back end che permettono di generare linguaggio macchina per molte architetture hardware quali x86, x86-64, ARM, PowerPC, SPARC e così via. In definitiva la suite GCC è oggi, di sicuro, lo stato dell’arte nell’ambito dei compilatori grazie alla sua robustezza, portabilità, modularità e conformità tempestiva agli standard, ma anche in virtù del fatto di essere free software (è distribuito sotto licenza GPL), con ciò consentendo a chiunque di utilizzare i meravigliosi strumenti di programmazione offerti.

[Installazione e configurazione di GCC](I%20-%20Installazione%20e%20configurazione%20di%20GCC/README.md)

[Compilazione del codice con GCC](II%20-%20Compilazione%20del%20codice%20con%20GCC/README.md)

[Linking del codice con GCC](III%20-%20Linking%20del%20codice%20con%20GCC/README.md)

[Utilizzo del debugger GDB](IV%20-%20Utilizzo%20del%20debugger%20GDB/README.md)
