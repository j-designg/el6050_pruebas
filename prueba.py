import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 20, 100)  # Create a list of evenly-spaced numbers over the range
y = np.linspace(0, 20, 100)

plt.plot(x, np.sin(x) + 2*y)       # Plot the sine of each x point
plt.show()                   # Display the plot