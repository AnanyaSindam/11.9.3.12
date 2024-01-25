import matplotlib.pyplot as plt

# Read data from the '11.dat' file
with open('11.dat', 'r') as file:
    data_str = file.read()

# Split the data into two sequences
sequences = data_str.split('\n\n')
seq1 = [float(value) for value in sequences[0].split('\n') if value]
seq2 = [float(value) for value in sequences[1].split('\n') if value]

# Plotting
plt.subplot(2, 1, 1)
plt.stem(seq1, markerfmt='ro', linefmt='r-', basefmt='k-')
plt.xlabel('Term Index')
plt.ylabel('Term Value')

plt.subplot(2, 1, 2)
plt.stem(seq2, markerfmt='bs', linefmt='b-', basefmt='k-')
plt.xlabel('Term Index')
plt.ylabel('Term Value')

plt.tight_layout()

# Save the figure as 'graph.png'
plt.savefig('graph.png')
plt.show()

