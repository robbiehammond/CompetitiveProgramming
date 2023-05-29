n = 6
a = [0, 1, 2, 3, 4, 5]
for i in range(0, 6):
    if i % 2 == 0:
        a.append(i // 2)
    else:
        a.append(n // 2 + (i - 1) // 2)
print(a)
