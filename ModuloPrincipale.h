# ifndef MODULO_PRINCIPALE
# define MODULO_PRINCIPALE

# include <stdio.h>
# include <sys/time.h>
# include <stdbool.h>
# include <stdlib.h>
# include <time.h>

# define NUMERO_CHIAVI 12000

int chiavi [ NUMERO_CHIAVI ];
struct timeval inizioAlgoritmo;
struct timeval fineAlgoritmo;

void popolaArrayChiavi(int []);
void inizializzazioneChiavi(int []);
void inizializzazioneChiaviRandom(int []);
void inizializzazioneChiaviOrdineInverso(int []);  
void stampaArrayChiavi();
void permuta(int []);
void scambio(int [], int, int);

# endif

