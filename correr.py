import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ algo.cpp -o algo.x")
os.system("./algo.x > datos.dat")


#data = np.loadtxt("datos.dat")

#plt.figure()
#plt.hist(data, bins = 50)
#plt.savefig("AnaTorres_hist.png")