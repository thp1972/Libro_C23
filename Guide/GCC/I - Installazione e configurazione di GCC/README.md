# Installazione in ambiente GNU/Linux

Per il sistema operativo GNU/Linux assumeremo che la corrente distribuzione in uso, Fedora 41 Workstation a 64 bit, non abbia già installato GCC e i relativi tool (se la vostra distribuzione ha già la suite GCC installata saltate pure la lettura di questo paragrafo).

Compiamo, dunque, i seguenti passi.

- Apriamo una shell da utente root e digitiamo il comando: `dnf group install c-development`.
- Confermiamo il download e l’installazione digitando il carattere `y` al termine dell’elaborazione per la risoluzione delle dipendenze da parte di `dnf`, se tutto è andato a buon fine, dopo la visualizzazione dell’elenco di tutti i pacchetti da installare e relative dipendenze.
- Verifichiamo che l'installazione sia andata a buon fine: apriamo una shell e digitiamo il comando `gcc --version`, che dovrà mostrare come output qualcosa come: `gcc (GCC) 14.1.0 20240801 (Red Hat 14.1.0)`.

# Installazione in ambiente Windows

Al fine di utilizzare GCC in ambiente Windows ci avvarremo di MinGW-w64 (`Minimalist GNU for Windows`), un ambiente di sviluppo minimale che permette di compilare e dunque creare applicazioni native nei sistemi Windows avvalendosi dei tool propri del sistema GNU.

Vediamo, quindi, i passi necessari per installare MinGW-w64.

- Colleghiamoci all’URL https://www.msys2.org/ quindi selezioniamo l’installer indicato nella sezione **Installation (punto 1)** per procedere al suo download. Al termine del download dovrebbe essere presente un file denominato, alla data di pubblicazione del libro, come segue:`msys2-x86_64-20240727.exe`.
- Avviamo il file `msys2-x86_64-20240727.exe` e proseguiamo con gli step di installazione indicati inserendo quando richiesto le relative informazioni (per esempio, il percorso di installazione, che per noi sarà quello di default ossia `C:\msys64`).
- Terminiamo l’installazione cliccando sul pulsante **Finish** ed accertiamoci che sia selezionata la voce **Run MSYS2 now**.
- Scriviamo nella shell aperta automaticamente il seguente comando: `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain` ed accettiamo la selezione di default (**All**) quindi premiamo **Enter** e procediamo con l’installazione (**Y**).
- Aggiungiamo il percorso seguente, (o il vostro, se avete scelto un percorso differente) `C:\msys64\ucrt64\bin` nella variabile di ambiente `Path`:
  - premiamo il tasto **Windows** e digitiamo la sequenza di caratteri *variabili di ambiente* finché nell’area di risultato della ricerca dal menu **Start** non apparirà la scritta *Modifica le variabili di ambiente relative al sistema*, quindi selezioniamola;
  - clicchiamo su **Variabili d'ambiente...** nella finestra **Proprietà del sistema**, tab **Avanzate**;
  - facciamo doppio clic sulla voce **Path** dalla finestra **Variabili d'ambiente**, area **Variabili di sistema**;
  - clicchiamo su **Nuovo**, dalla finestra **Modifica variabili di ambiente** e inseriamo nella casella di testo il path indicato (per noi, `C:\msys64\ucrt64\bin`);
  - confermiamo le operazioni indicate chiudendo tutte le finestre rimaste aperte;
  - verifichiamo che il path è impostato correttamente aprendo un prompt dei comandi e digitiamo `gcc --version` che dovrà mostrare come output qualcosa come: `gcc.exe (Rev3, Built by MSYS2 project) 14.1.0`.

# Installazione in ambiente macOS

Per utilizzare GCC in ambiente macOS dobbiamo eseguire i seguenti passi da una shell.

- Installiamo gli *strumenti per sviluppatori da riga di comando* con il seguente comando: `xcode-select –install`. Accettiamo quanto indicato dal *Contratto di licenza* e proseguiamo quindi con l’installazione.
- Installiamo il package manager Homebrew con il seguente comando `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`, seguiamo quindi le istruzioni mostrate a video per completarne l’installazione.
- Installiamo GCC mediante il seguente comando: `brew install gcc`.
- Verifichiamo la corrente versione di GCC con il comando `gcc --version` che dovrà mostrare come output qualcosa come: `gcc-14 (Homebrew GCC 14.1.0)`.

[!NOTE]
Quando si installano gli *strumenti per sviluppatori da riga di comando* viene in automatico installato il compilatore C/C++ Apple Clang e sono anche impostati dei link simbolici che “nascondono” `gcc` e che redirigono le chiamate da tale compilatore in favore del compilatore Apple Clang. Per invocare dunque correttamente il compilatore `gcc` possiamo fare semplicemente e direttamente quanto segue.

- Scopriamo la versione di `gcc` installata con il comando `brew info gcc` che produrrà qualcosa come `gcc : stable 14.1.0`.
- Invochiamo il compilatore con il suo nome e come suffisso scriviamo le prime cifre del numero di versione prima rilevato; per esempio `gcc-14 --version` produrrà l’invocazione corretta di `gcc` e non di `clang`.
