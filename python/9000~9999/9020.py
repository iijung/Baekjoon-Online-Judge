def eratosthenes(n):
    primes = [True for i in range(n)]
    for i in range(2, int(n**0.5)+1):
        if primes[i] == True:
            for j in range(i+i, n, i):
                primes[j] = False
    return [i for i in range(2, n) if primes[i] == True]


T = int(input())

for i in range(T):
    n = int(input())
    arr = eratosthenes(n)

    partitions = []
    for a in arr:
        b = n - a
        if b < a:
            continue
        if b not in arr:
            continue
        partitions.append([a, b])

    min = 0
    for i in range(1, len(partitions)):
        tmp1 = partitions[min][1] - partitions[min][0]
        tmp2 = partitions[i][1] - partitions[i][0]
        if tmp1 > tmp2:
            min = i
    print("{0} {1}".format(partitions[min][0], partitions[min][1]))
