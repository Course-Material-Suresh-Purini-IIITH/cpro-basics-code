import matplotlib.pyplot as plt

import numpy as np

N = 1000
t = np.arange(0, N)

# red dashes, blue squares and green triangles
#plt.plot(t, t, 'r--', t, t**2, 'bs', t, t**3, 'g^')
plt.plot(t, 4*t*t+3*t+1000, t, 4*t*t, t, t*t)
plt.show()
