# ifndef TEST
# define TEST

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# include <unistd.h>
# include "ModuloPrincipale.c"
# include "AnalisiStatistiche.c"
# include "GestoreDati.c"
# include "InsertionSort.c"
# include "QuickSortClassico.c"
# include "QuickSortMedianoFraTre.c"
# include "QuickSortDualPivot.c"

void conservaArrayChiavi (int [], int []);
void messaggioErroreLancioApplicazione ();

# endif