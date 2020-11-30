import numpy as np 
import matplotlib.pyplot as plt

mu, sigma = 60, 10 # mean and standard deviation
s = np.random.normal(mu, sigma, 1000000)

np.savetxt('data.txt', s, fmt="%f")
print('Check mean: ', abs(mu-np.mean(s)))
print('Check Standard Deviation: ', abs(sigma - np.std(s, ddof=1)))

count, bins, ignored = plt.hist(s, 30, density=True)

plt.plot(bins, 1/(sigma * np.sqrt(2 * np.pi)) *
               np.exp( - (bins - mu)**2 / (2 * sigma**2) ),
         linewidth=2, color='r')

plt.show()