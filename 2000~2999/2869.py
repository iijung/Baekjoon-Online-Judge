A, B, V = map(int, input().split())

if (V - B) % (A - B) != 0:
    n = (V - A) // (A - B) + 1
else:
    n = (V - A) // (A - B)

print(n + 1)
