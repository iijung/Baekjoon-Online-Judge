code = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]

time = 0
for i in input():
    for j in code:
        if (i in j):
            time += code.index(j) + 3
            break
print(time)
