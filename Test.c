# include "Test.h"

void messaggioErroreLancioApplicazione () {

  printf("Errore sul lancio dell'applicazione, sintassi: <nomeEseguibile> <numeroTipoDiTest> <numeroTest>\n");
  exit(EXIT_FAILURE);
  
}

void conservaArrayChiavi(int chiavi [], int chiavi2 []) {

	int i = 0;

	for ( i = 0; i < NUMERO_CHIAVI; i++ ) {

		chiavi2 [ i ] = chiavi [ i ];

	}

}

int main ( int argc, char* argv[] ) {

  if (argc >= 4 || argc == 1 || argc == 2) {
    messaggioErroreLancioApplicazione();
  }  

  int numeroTest = atoi(argv[2]);
  int tempoEsecuzione = 0;
  int numeroTipoDiTest = atoi(argv[1]);
  int chiavi2 [ NUMERO_CHIAVI ];
  int tempiTestClassico [ numeroTest - 50];
  int tempiTestDualPivot [ numeroTest - 50];
  int tempiTestMedianoFraTre [ numeroTest - 50];
  int j = 0;
  int k = 0;
  int h = 0;

  if (numeroTipoDiTest < 1  || numeroTipoDiTest > 4 ) {
    messaggioErroreLancioApplicazione();
  }

  int i = 0;

  for ( i = 0; i < numeroTest; i++ ) {

  switch (numeroTipoDiTest) {
  
  case 1:
          popolaArrayChiavi(chiavi);
          break;
  case 2:
          inizializzazioneChiaviRandom(chiavi);
          break;
  case 3:
          inizializzazioneChiavi(chiavi);
          break;
  case 4: 
          inizializzazioneChiaviOrdineInverso(chiavi);
          break;
  }

  printf("TEST NUMERO: %d\n", i);

  conservaArrayChiavi ( chiavi, chiavi2 );

  gettimeofday(&inizioAlgoritmo, NULL);

  quicksort(chiavi, 0, NUMERO_CHIAVI - 1); 
  
  gettimeofday(&fineAlgoritmo, NULL);

  tempoEsecuzione = ((fineAlgoritmo.tv_sec - inizioAlgoritmo.tv_sec) * 1000000L + fineAlgoritmo.tv_usec) - inizioAlgoritmo.tv_usec;

  if ( i > 49 ) {

    tempiTestClassico [ j ] = tempoEsecuzione;
    j++;

  }

  printf ( "Tempo in microsecondi ( QuickSort Classico ): %d microsecondi\n", tempoEsecuzione);
   
  conservaArrayChiavi ( chiavi2, chiavi );

  gettimeofday(&inizioAlgoritmo, NULL);

  medianoFraTre(chiavi2, 0, NUMERO_CHIAVI - 1);
  
  gettimeofday(&fineAlgoritmo, NULL);

  tempoEsecuzione = ((fineAlgoritmo.tv_sec - inizioAlgoritmo.tv_sec) * 1000000L + fineAlgoritmo.tv_usec) - inizioAlgoritmo.tv_usec;

  if ( i > 49 ) {

    tempiTestMedianoFraTre [ k ] = tempoEsecuzione;
    k++;

  }

  printf ( "Tempo in microsecondi ( QuickSort Classico M3 ): %d microsecondi\n", tempoEsecuzione);
  
  gettimeofday(&inizioAlgoritmo, NULL);

  dualPivotQuickSort(chiavi, 0, NUMERO_CHIAVI - 1);
  
  gettimeofday(&fineAlgoritmo, NULL);

  tempoEsecuzione = ((fineAlgoritmo.tv_sec - inizioAlgoritmo.tv_sec) * 1000000L + fineAlgoritmo.tv_usec) - inizioAlgoritmo.tv_usec;

  if ( i > 49) {
    
    tempiTestDualPivot [ h ] = tempoEsecuzione;
    h++;
    
  }

  printf ( "Tempo in microsecondi ( QuickSort Dual - Pivot ): %d microsecondi\n", tempoEsecuzione);
  
  }

  printf("\n");

  // Statistiche Quicksort Classico
  float mediaClassico = calcoloMedia(tempiTestClassico, numeroTest);  

  printf("mediaClassico: %f\n", mediaClassico);
  printf("\n");

  // Statistiche Quicksort Classico con scelta del perno fra tre chiavi candidate
  float mediaClassicoM3 = calcoloMedia(tempiTestMedianoFraTre, numeroTest);  

  printf("mediaClassicoM3: %f\n", mediaClassicoM3);
  printf("\n");

  // Statistiche Quicksort Dual Pivot
  float mediaDualPivot = calcoloMedia(tempiTestDualPivot, numeroTest);  

  printf("mediaDualPivot: %f\n", mediaDualPivot);

  // Registrazione dati
  gestioneDatiMultipli("tempiTestClassico.txt", tempiTestClassico, numeroTest);
  gestioneDatiMultipli("tempiTestMedianoFraTre.txt", tempiTestMedianoFraTre, numeroTest);
  gestioneDatiMultipli("tempiTestDualPivot.txt", tempiTestDualPivot, numeroTest);
  

  gestioneDatiSingoli("medieClassico.txt", mediaClassico, true);
  gestioneDatiSingoli("medieMedianoFraTre.txt", mediaClassicoM3, true);
  gestioneDatiSingoli("medieDualPivot.txt", mediaDualPivot, true);
  gestioneDatiSingoli("numProve.txt", numeroTest, false);
  
  exit(EXIT_SUCCESS);

}