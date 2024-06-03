import random

ar = ['r', 'g', 'y']
s = ""
for i in range(100000):
    s += ar[random.randint(0, 2)]
print(s)
