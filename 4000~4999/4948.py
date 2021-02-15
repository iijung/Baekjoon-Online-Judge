def eratosthenes(a, b):
    primes = [True for i in range(b+1)]
    for i in range(2, int(b**0.5)+1):
        if primes[i] == True:
            for j in range(i+i, b+1, i):
                primes[j] = False
    return [i for i in range(a, b+1) if i != 1 and primes[i] == True]


while True:
    n = int(input())
    if n == 0:
        break
    print(len(eratosthenes(n+1, 2 * n)))
