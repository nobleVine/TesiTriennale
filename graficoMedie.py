import numpy as np
import matplotlib.pyplot as plt
from base import *

def graficaMedie(listaMedieClassico, listaTempiM3 ,listaMedieDualPivot, flag):
    numeroProve = np.arange(1000, 12001, 1000) # sintassi: arange (partenza, arrivo + 1, passo)
    plt.figure(figsize = (10, 7))
    plt.title('$ConfrontoTempiMedi$', color = 'black', size = 25)
    plt.xlabel('$NumeroChiavi$', color = 'black', size = '18')
    plt.xticks(np.linspace(1000, 12000, 12, endpoint = True)) # linspace (partenza, arrivo, numeroDiPuntiGenerati)
    plt.ylabel('$Tempi$', color = 'black', size = '18')
    plt.plot(numeroProve, listaMedieClassico, label = 'Classico', linewidth = '1.0', color = 'purple', linestyle = '-')
    plt.plot(numeroProve, listaTempiM3, label = 'Classico Mediano Fra Tre', linewidth = '1.0', color = 'green', linestyle = '-')
    plt.plot(numeroProve, listaMedieDualPivot, label = 'Dual Pivot', linewidth = '1.0', color = 'red', linestyle = '-')
    plt.grid()
    plt.legend(loc = 'upper center', shadow = 'True') # loc = 'upper center', loc = 'center'
    if flag == 0:
    	plt.savefig("graficiMedie/Permutazioni/graficoMediePermutazioni.png")
    if flag == 1:
    	plt.savefig("graficiMedie/Random/graficoMedieRandom.png")
    if flag == 2:
    	plt.savefig("graficiMedie/GiaOrdinati/graficoMedieGiaOrdinati.png")
    if flag == 3:
    	plt.savefig("graficiMedie/OrdineInverso/graficoMedieOrdineInverso.png")
    plt.show()

listaMedieClassico = prendiInputDaFile("medieClassico.txt")
listaTempiM3 = prendiInputDaFile("medieMedianoFraTre.txt")
listaMedieDualPivot = prendiInputDaFile("medieDualPivot.txt")