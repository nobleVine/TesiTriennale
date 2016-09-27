# include "GestoreDati.h"

void gestioneDatiSingoli (char* nomeFile, float dato, bool flag) {

  FILE *p = NULL;

  if (flag == true) {

    p = fopen(nomeFile, "a");

  } else {

    p = fopen(nomeFile, "w");

  }

  fprintf(p, "%f ", dato);
  fclose(p);

}

void gestioneDatiMultipli (char* nomeFile, int tempiTest [], int numeroTest) {

  FILE *p = NULL;

  p = fopen(nomeFile, "w");

  int i = 0;
  
  for ( i = 0; i < numeroTest - 50; i++) {
   
    fprintf(p, "%d ", tempiTest[i]);
  
  }

  fclose(p);

}
