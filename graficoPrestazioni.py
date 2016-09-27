import numpy as np
import matplotlib.pyplot as plt
from base import *

def grafica(listaTempiClassico, listaTempiM3 ,listaTempiDualPivot, n, percorso):
    numeroTest = np.arange(1, n + 1, 1)
    plt.figure(figsize = (15, 10))
    plt.title('$Confronto$\n', color = 'black', size = 25)
    plt.xlabel('\n$Numero Test$', color = 'black', size = '18')
    plt.ylabel('$Tempi$\n', color = 'black', size = '18')
    plt.plot(numeroTest, listaTempiClassico, label = 'Classico', linewidth = '1.0', color = 'purple', linestyle = '-')
    plt.plot(numeroTest, listaTempiM3, label = 'Classico M3', linewidth = '1.0', color = 'green', linestyle = '-')
    plt.plot(numeroTest, listaTempiDualPivot, label = 'Dual Pivot', linewidth = '1.0', color = 'red', linestyle = '-')
    plt.grid()
    plt.legend(loc = 'upper center', shadow = True)
    plt.savefig(percorso)
    plt.show()
    
listaTempiClassico = prendiInputDaFile("tempiTestClassico.txt")
listaTempiM3 = prendiInputDaFile("tempiTestMedianoFraTre.txt")
listaTempiDualPivot = prendiInputDaFile("tempiTestDualPivot.txt")

n = leggiNumeroTest("numProve.txt")