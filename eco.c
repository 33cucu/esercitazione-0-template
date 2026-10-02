#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        fprintf(stderr, "Uso: %s TESTO INTERO REALE\n", argv[0]);
        return 2;
    }

    char *testo = argv[1];

    /* Converti gli argomenti in tipi appropriati */
    int intero = atoi(argv[2]);
    double reale = atof(argv[3]);

    /* Stampa testo, intero e reale separati da uno spazio e seguiti da una nuova riga */
    printf("%s %d %f\n", testo, intero, reale);

    return 0;
}
