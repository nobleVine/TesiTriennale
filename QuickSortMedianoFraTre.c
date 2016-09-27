# include "QuickSortMedianoFraTre.h"

void sceltaPerno (int chiavi[], int l, int r) {

	scambio(chiavi, (l + r)/2, r - 1);
	
	if ( chiavi [ r - 1 ] < chiavi [ l ] ) {
		scambio (chiavi, l, r - 1);
	}

	if ( chiavi [ r ] < chiavi [ l ] ) {
		scambio (chiavi, l, r);
	}

	if (chiavi [ r ]  < chiavi [ r - 1 ] ) {
		scambio (chiavi, r - 1, r);
	}

}


int partizionamento ( int chiavi[], int l, int r) {

	int i = l;
	int j = r - 1;

	while (true) {

		while (chiavi[i] < chiavi[r]) {
			i++;
		}

		while (chiavi[r] < chiavi[j] && i < j) {
			j--;
		}

		if (i >= j) {
			break;
		}

		scambio(chiavi, i, j);
		i++;
		j--;

	}

		scambio(chiavi, i, r);
		return i;

}

void medianoFraTre (int chiavi[], int l, int r) {

	int i = 0;

	if (r <= l) {
    	return;
    }

	sceltaPerno (chiavi, l, r);

	i = partizionamento(chiavi, l + 1, r - 1);
	medianoFraTre(chiavi, l, i - 1);
	medianoFraTre(chiavi, i + 1, r);

}


/*int main (int argc, char* argv[]) {
	
	//popolaArrayChiavi(chiavi);
	//inizializzazioneChiaviRandom(chiavi);
	//medianoFraTre(chiavi, 0, NUMERO_CHIAVI - 1);
	//stampaArrayChiavi(chiavi);
  	medianoFraTre ( chiavi, 0, NUMERO_CHIAVI - 1 );
  	stampaArrayChiavi(chiavi);
  
	return 0;

}*/