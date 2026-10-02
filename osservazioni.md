# Osservazioni — Esercitazione 0

Gruppo: S_follati 

Componenti (nome, cognome e username GitHub di entrambi):Dario Pedata Pedario06, Valerio Peroni 33cucu

URL del repository condiviso: https://github.com/33cucu/esercitazione-0-template.git

Chi ha usato la tastiera nello step 1 e nello step 2: entrambi in modo equo

Compilate insieme le osservazioni e discutete le risposte: entrambi dovete
saper spiegare le prove svolte.

## Step 1 — Hello World: compilazione ed esecuzione

Comando di compilazione:gcc -std=c17 -Wall -Wextra -Wpedantic hello.c -o hello

Comando di esecuzione e risultato osservato: ./hello

Che cosa ho capito su sorgente ed eseguibile: il file sorgente hello.c contiene un programma in C. Il compilatore lo converte in binario eseguendolo. Modificare la sorgente non modifica direttamente l'eseguibile.


Output richiesto e comportamento del programma prima della modifica: Prima della modifica il file hello.c non compilava sul terminale, con l'inserimento della funzione printf e la rimozione del commento si vede a schermo l'output.

Esito dopo la modifica e spiegazione della correzione: scritto sopra.

## Step 1 — Git

Quali file ho incluso nel commit e perché: Ho incluso i file sorgente hello.c e osservazioni.md. Ho tracciato hello.c perché contiene la soluzione dell'esercizio e osservazioni.md per registrare le risposte alle domande. Ho escluso l'eseguibile hello poiché si tratta di un file binario generato dalla compilazione, che va ricreato localmente da ciascun utente.

Come ho verificato che la versione provata sia presente su GitHub: Ho eseguito git push per inviare i commit al repository remoto. Dopodiché ho aperto l'URL del repository su GitHub ([https://github.com/33cucu/esercitazione-0-template](https://github.com/33cucu/esercitazione-0-template)) nel browser, verificando che l'ultimo commit fosse visibile e che i file aggiornati contenessero le ultime modifiche salvate.

Che cosa ho osservato prima e dopo `git pull`, e perché non serve un nuovo clone: Che cosa ho osservato prima e dopo `git pull`, e perché non serve un nuovo clone: Prima di eseguire git pull, la copia locale del repository era allineata soltanto ai commit dello Step 1 e non conteneva le modifiche inviate dal compagno. Dopo il git pull, Git ha scaricato e unito i commit dal repository remoto, aggiornando i file locali all'ultima versione. Non serve effettuare un nuovo clone poiché git clone si usa solo per scaricare un repository la prima volta, mentre git pull aggiorna in modo incrementale una copia locale già esistente.

## Step 2 — Eco: prima prova modifica

Argomenti passati, comando e risultato: Eseguendo il comando ./eco senza parametri o prima dell'implementazione, il programma non ha letto alcun valore e ha restituito un output nullo, poic̀hé la gestione degli argomenti da riga di comando non era ancora definita.
Che cosa posso concludere: Da questo si conclude che per elaborare gli input utente occorre accedere agli elementi dell'array argv partendo dall'indice 1, assicurandosi prima che argc indichi la presenza di argomenti sufficienti.

## Step 2 — Eco: seconda prova

Argomenti passati, comando e risultato: Lanciando ./eco 10.5, il programma ha letto la stringa fornita, l'ha convertita in un valore numerico in virgola mobile e ha stampato a schermo il risultato atteso. 

Che cosa ho capito su testo, conversioni e stampa:Si comprende così che tutti gli argomenti passati da terminale vengono ricevuti esclusivamente come stringhe di testo e devono essere convertiti esplicitamente in numeri tramite funzioni come atof o strtod prima di eseguire qualsiasi calcolo.

## Step 2 — Risultato ed errori

Previsioni per l'esecuzione con argomenti validi e per quella con `dodici`: Con argomenti validi il programma completa il calcolo e restituisce l'output atteso con codice di uscita 0. Con l'argomento dodici la conversione numerica fallisce, producendo un valore nullo o un errore e restituendo un codice di uscita diverso da zero.

Contenuto di `eco.txt`, messaggi nel terminale e codici di uscita osservati: Il file eco.txt contiene esclusivamente lo standard output con il risultato del calcolo. Nel terminale rimangono visibili solo gli eventuali messaggi di errore inviati su stderr. Il codice di uscita osservato tramite echo $? è 0 per esecuzione corretta e diverso da 0 in caso di errore.

Come un controllo automatico può riconoscere un errore:Un controllo automatico riconosce un errore verificando che il codice di uscita del programma sia diverso da 0 oppure confrontando l'output generato con quello di riferimento tramite un comando di confronto testo come diff.

## Step 2 — Parametri e calcolo fisico

Quando serve ricompilare e quando basta cambiare gli argomenti:Basta cambiare gli argomenti da riga di comando per variare i dati di input e i parametri del problema a tempo di esecuzione. Serve ricompilare il codice sorgente soltanto se si modificano le formule fisiche o la logica interna del programma nel file .c.


## Step 2 — Git

Come riconosco nella cronologia i commit dei due step:I commit dei due step si distinguono nella cronologia tramite il comando git log --oneline grazie ai messaggi descrittivi assegnati a ciascun salvataggio.

Come ho verificato che la versione finale sia presente su GitHub:La presenza della versione finale su GitHub si verifica osservando l'esito positivo del comando git push nel terminale e controllando sulla pagina web del repository che l'ultimo commit sia visibile con i file aggiornati.


Domande stimolo step 2

Gli elementi di argv sono sempre stringhe di testo e mai numeri fisici. Passando 0012 come primo argomento il programma lo conserva come la stringa "0012", mentre se passato come secondo viene convertito e salvato come l'intero 12. Per passare un testo contenente spazi come singolo argomento è necessario racchiuderlo tra virgolette, ad esempio "testo con spazi". Fornendo 1.25e1 come terzo argomento la funzione di conversione interpreta la notazione scientifica e memorizza il valore 12.5, che in uscita viene stampato nel formato decimale standard con sei cifre dopo il punto (12.500000), cambiando quindi la rappresentazione scritta iniziale. Se un argomento manca o presenta un formato numerico non valido, la funzione di controllo o di conversione rileva l'anomalia, stampa un messaggio di avviso ed interrompe l'esecuzione restituendo un codice di errore. Il risultato corretto si distingue dal messaggio di errore sia per il canale di emissione usufruito, poic̀hé l'output normale va su stdout e gli errori su stderr, sia per il valore restituito al sistema.
Risultato, messaggio d'errore e codice di uscita

Nel primo caso eco.txt contiene la riga con la stampa corretta delle tre variabili, mentre nel secondo caso il file rimane vuoto poic̀hé l'esecuzione si interrompe prima della scrittura su stdout. Nel secondo caso il messaggio d'errore appare a schermo perché l'operatore di redirezione > devia soltanto lo standard output (stdout), lasciando lo standard error (stderr) indirizzato direttamente verso il terminale. Con parametri validi il codice di uscita osservato con echo $? è 0, mentre con l'argomento dodici si ottiene un codice diverso da zero, come ad esempio 2. In un controllo automatico questi codici permettono di verificare immediatamente il successo del programma bloccando i test se il valore restituito è non nullo.
Dai parametri al calcolo fisico e Git

Per cambiare il passo temporale di una simulazione passato come argomento non occorre ricompilare, poiché il programma legge il nuovo dato a tempo di esecuzione direttamente dalla riga di comando. Se invece si modifica la formula matematica usata dal programma è necessario ricompilare il codice sorgente per generare un nuovo eseguibile con le istruzioni aggiornate. Rispetto ad eco.c, l'utilizzo di eco2.c mostra una diversa gestione della lettura dei parametri o un controllo più rigido sulle conversioni. Nella cronologia di Git i due step si riconoscono chiaramente analizzando i messaggi associati ai singoli commit tramite il comando git log --oneline.