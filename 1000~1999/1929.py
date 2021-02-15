def eratosthenes(a, b):
    primes = [True for i in range(b+1)]  # 1 : 0 ~ n
    for i in range(2, int(b**0.5) + 1):
        if primes[i] == True:
            for j in range(i+i, b+1, i):
                primes[j] = False
    return [i for i in range(a, b+1) if primes[i] == True]


M, N = map(int, input().split())
for i in eratosthenes(M, N):
    print(i)
