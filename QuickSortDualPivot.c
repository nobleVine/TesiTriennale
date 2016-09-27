# include "QuickSortDualPivot.h"

void dualPivotQuickSort (int chiavi[], int left, int right) {
	
	if (right <= left) {
    	return;
    }

	if (chiavi[left] > chiavi[right]) {
		scambio(chiavi, left, right);
	}

	int P1 = chiavi [left];
	int P2 = chiavi [right];

	int l = left + 1;
	int k = l;
	int g = right - 1;

	while ( k <= g ) {

		if (chiavi[k] < P1) {

			scambio(chiavi, k, l);
			l++;

		} else {

			if (chiavi[k] > P2) {

				while (chiavi[g] > P2 && k < g) {

					g = g - 1;
				
				}

				scambio(chiavi, k, g);
				g = g - 1;

				if (chiavi[k] < P1) {

					scambio(chiavi, k, l);
					l = l + 1;

				}

			}

		}

		k++;

	}

	l = l - 1;
	g = g + 1;
	scambio(chiavi, left, l);
	scambio(chiavi, right, g);
	dualPivotQuickSort (chiavi, left, l - 1);
	dualPivotQuickSort (chiavi, l + 1, g - 1);
	dualPivotQuickSort (chiavi, g + 1, right);

}

/*int main(int argc, char const *argv[]) {

	//popolaArrayChiavi(chiavi);
	//inizializzazioneChiaviRandom(chiavi);
	//inizializzazioneChiavi(chiavi);
	dualPivotQuickSort(chiavi, 0, NUMERO_CHIAVI - 1);
	stampaArrayChiavi(chiavi);
	return 0;
}*/