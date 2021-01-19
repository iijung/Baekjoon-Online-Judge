A, B = map(list, input().split())

A.reverse()
B.reverse()

print(''.join(A) if A > B else ''.join(B))
