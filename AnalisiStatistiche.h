# ifndef ANALISI_STATISTICHE
# define ANALISI_STATISTICHE

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

float calcoloMedia (int tempi[], int numeroTest);
float calcoloVarianza (float media, int tempi[], int numeroTest, bool campionaria);

#endif