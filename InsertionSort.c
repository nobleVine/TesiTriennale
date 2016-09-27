# include "InsertionSort.h"

void InsertionSort (int chiavi [], int l, int r) {

	int i = 0;
  int j = 0;

      for ( i = l + 1; i <= r; i ++ ) {

        for ( j = i; j > l && chiavi [ j ] < chiavi [ j - 1 ]; j-- ) {

           scambio ( chiavi, j, j - 1 );
           
        } 

      }

      return;

  }


/*int main ( int argc, char* argv[]) {

	popolaArrayChiavi(chiavi);
	InsertionSort(chiavi, 0, NUMERO_CHIAVI - 1);
	stampaArrayChiavi(chiavi);
	return 0;

}*/