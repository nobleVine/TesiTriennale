// Variabili Globali

//int tempi [] = { -4, -1, 1, 2, 7}; // Contiene i tempi degli algoritmi. Test1 --> 13,2 (popolazione), diversa la campionaria 16, qualcosa
//float tempi [ numeroTest] = {10, 23, 43, 45}; // Test2 --> Varianza = 210,6875
//int tempi [5] = {-4, -1, 1, 2, 7};

// ----- Dichiarazione Prototipi -----


/*float testTstudent(float media1, float media2, float varCamp1, float varCamp2, float numeroTest);
float testF (float varCamp1, float varCamp2);*/

float calcoloMedia (int tempi[], int numeroTest) {

	int i = 0;
	float somma = 0;

	for ( i = 0; i < numeroTest - 50; i++ ) { 

		somma = tempi [ i ] + somma;

	}

	float media = somma / (numeroTest - 50);
	
	return media;

}

float calcoloVarianza ( float media, int tempi[], int numeroTest, bool campionaria) {

	int i = 0;
	float dVarianza = 0;

	for ( i = 0; i < numeroTest - 50; i++ ) {

		dVarianza = ( tempi [ i ] - media ) * ( tempi [ i ] - media ) + dVarianza;

	}

	float varianza = 0;

	if (campionaria == true) {

		varianza = dVarianza / (numeroTest - 50 - 1);
	
	} else {

		varianza = dVarianza / numeroTest - 50;
	
	}

	return varianza;
	
}




/*int main ( int argc, char* argv[] ) {

	int a [10];
	int i = 0;
	
	for (i=0; i < 10; i++ ){
		a[i] = i;
	}

	for (i=0; i < 10; i++ ){
		printf("Elemento --> %d\n", a[i]);
	}

	float r = calcoloMedia(a, 60);
	printf("MEDIA --> %f\n", r);

	return 0;

}*/

/*float testTstudent (float media1, float media2, float varCamp1, float varCamp2, float numeroTest) {
	float denominatore = ( varCamp1 * ( numeroTest - 1 ) + varCamp2 * ( numeroTest - 1 )) / ( numeroTest + numeroTest - 2 ) * ( 1 / numeroTest + 1 / numeroTest ); 
	float t = ( media1 - media2 ) / sqrt(denominatore);
	return t;
}

float testF (float varCamp1, float varCamp2) {

	float statisticaF = 0;

	if (varCamp1 > varCamp2) {
		statisticaF = varCamp1 / varCamp2;
	} else {
		statisticaF = varCamp2 / varCamp1;
	}

	return statisticaF;

}*/

/*int main ( int argc, char* argv [] ) { // Per la compilazione --> gcc -o nomeEseguibile modulo.c -lm

	float numeroTest = 4;
	float media = calcoloMedia (tempi, numeroTest);
	printf("Media --> %f\n", media);
	float varianza = calcoloVarianza ( media, tempi, numeroTest, false);
	printf ( "Varianza --> %f\n", varianza );
	float media1 = 4.75;
	float media2 = 2.25;
	float varCamp1 = 0.92;
	float varCamp2 = 0.92;
	float t = testTstudent(media1, media2, varCamp1, varCamp2, numeroTest);
	printf("Statistica T di Student --> %f\n", t);
	float c1 = 391824.260526;
	float c2 = 7.73;
	float f = testF(c1, c2);
	printf("Statistica di Fisher: %f\n", f);
	exit ( EXIT_SUCCESS);

}*/