def prendiInputDaFile(tempiAlgoritmi):
    istanzaDiLettura = open(tempiAlgoritmi, "r")
    stringaDati = istanzaDiLettura.read()
    listaTempi = []
    listaDiChar = stringaDati.split(" ", len(stringaDati))
    g = len(listaDiChar)
    listaDiChar = listaDiChar[0:g-1]
    for i in range(len(listaDiChar)):
        listaTempi.append(float(listaDiChar[i]))
    return listaTempi

def leggiNumeroTest(numProve):
	istanzaDiLettura = open(numProve, "r")
	stringaDati = istanzaDiLettura.read()
	n = float(stringaDati)
	return n - 50