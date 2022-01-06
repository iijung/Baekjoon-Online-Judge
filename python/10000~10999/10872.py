def factorial(n):
    return factorial(n-1) * n if n > 1 else 1


N = int(input())
print(factorial(N))
