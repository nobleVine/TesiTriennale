# include "ModuloPrincipale.h"

void inizializzazioneChiavi ( int chiavi [] ) {

	int i = 0;

	for ( i = 0; i < NUMERO_CHIAVI; i++ ) {
		chiavi [ i ] = i;
	}

}

void inizializzazioneChiaviRandom ( int chiavi [] ) {

	int i = 0;

	for ( i = 0; i < NUMERO_CHIAVI; i++ ) {
		chiavi [ i ] = rand () % NUMERO_CHIAVI;
	}

}

void inizializzazioneChiaviOrdineInverso ( int chiavi [] ) {

	int i = 0;

	for ( i = 0; i < NUMERO_CHIAVI; i++ ) {
		chiavi [ i ] = NUMERO_CHIAVI - 1 - i;
	}

}

void popolaArrayChiavi ( int chiavi [] ) {

	inizializzazioneChiavi( chiavi );
	permuta ( chiavi );

}

void permuta ( int chiavi [] ) {
    
    int i = 0;

    for ( i = NUMERO_CHIAVI - 1; i > 0; i-- ) {
        int j = rand () % ( i + 1 );
        scambio ( chiavi, i, j );
    }
    
}

void stampaArrayChiavi ( int chiavi [] ) {	

	int i = 0;

	printf ( "Array delle chiavi\n" );

	for ( i = 0; i < NUMERO_CHIAVI; i++) {
		printf("Elemento %d --> %d\n ", i, chiavi [ i ]);
	}

}

void scambio ( int chiavi [], int i, int j ) {

    int app = chiavi [ i ];
    chiavi [ i ] = chiavi [ j ];
    chiavi [ j ] = app;

}

 /*void main ( int argc, char *argv [] ) { // Main di test.

	gettimeofday(&inizioAlgoritmo, NULL);
	printf("Permutazione:\n");
	popolaArrayChiavi ( chiavi );
	stampaArrayChiavi ( chiavi );
	gettimeofday(&fineAlgoritmo, NULL);
	printf("Tempo in microsecondi: %ld microsecondi\n", ((fineAlgoritmo.tv_sec - inizioAlgoritmo.tv_sec) * 1000000L + fineAlgoritmo.tv_usec) - inizioAlgoritmo.tv_usec );
	exit(EXIT_SUCCESS);

}

void main (int argc, char *argv []) {

	int i = 0;

	for ( i = 0; i < 3; i++ ) {
		inizializzazioneChiaviRandom(chiavi);
		printf("STAMPA\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		stampaArrayChiavi(chiavi);
	}


	for ( i = 0; i < 3; i++ ) {
		popolaArrayChiavi(chiavi);
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		stampaArrayChiavi(chiavi);
	}

	exit(EXIT_SUCCESS);

}*/