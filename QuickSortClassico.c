# include "QuickSortClassico.h"

void quicksort ( int chiavi [], int l, int r ) {

    if (r <= l) {
      return;
    }

    int pivot = l;
    int i = l;
    int j = r;
      
        while ( i < j ) {

             while ( chiavi [ i ] <= chiavi [ pivot ] && i < r ) {
                i++;
             }

             while ( chiavi [ j ] > chiavi [ pivot ] ) {
                j--;
             }

             if ( i < j ) {

                 scambio ( chiavi, i, j);
            
             }

        }

         scambio(chiavi, pivot, j);
         quicksort(chiavi, l, j - 1);
         quicksort(chiavi, j + 1, r);

    }




/*int main ( int argc, char* argv [] ) {

  
  int i = 0;
  int numeroProve = 25;
 
  for (i = 0; i < numeroProve; i++ ) {

  //popolaArrayChiavi(chiavi);
  //inizializzazioneChiaviRandom(chiavi);
  inizializzazioneChiavi(chiavi);
  //inizializzazioneChiaviOrdineInverso(chiavi);

  gettimeofday ( &inizioAlgoritmo, NULL );  // Primo Checkpoint.

  quicksort ( chiavi, 0, NUMERO_CHIAVI - 1 ); 
  
  gettimeofday ( &fineAlgoritmo, NULL );  // Secondo Checkpoint.

  int tempoEsecuzione = ((fineAlgoritmo.tv_sec - inizioAlgoritmo.tv_sec) * 1000000L + fineAlgoritmo.tv_usec) - inizioAlgoritmo.tv_usec;
  
  //stampaArrayChiavi(chiavi);

  printf ( "Tempo in microsecondi ( QuickSort Classico ): %d microsecondi\n", tempoEsecuzione);


  }

  exit ( EXIT_SUCCESS );

}*/

