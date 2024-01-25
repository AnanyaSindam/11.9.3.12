import matplotlib.pyplot as plt
import numpy as np

# Read data from the '11.dat' file
with open('11.dat', 'r') as file:
    data_str = file.read()

# Split the data into two sequences
sequences = data_str.split('\n')
seq1, seq2 = zip(*(map(float, line.split('\t')) for line in sequences if line))

# Plotting Sequence 1
plt.figure()
plt.stem(seq1, markerfmt='ro', linefmt='r-', basefmt='k-')
plt.xlabel('n')
plt.ylabel('x(n)')
# Save the figure as 'graph1.png'
plt.savefig('graph1.png')
plt.show()

# Plotting Sequence 2
plt.figure()
plt.stem(seq2, markerfmt='bs', linefmt='b-', basefmt='k-')
plt.xlabel('n')
plt.ylabel('x(n)')
# Save the figure as 'graph2.png'
plt.savefig('graph2.png')
plt.show()

