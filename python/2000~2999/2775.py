
apart = [[0 for j in range(15)] for i in range(15)]
for a in range(15):
    for b in range(15):
        if a == 0:
            apart[a][b] = b + 1
        elif b == 0:
            apart[a][b] = 1
        else:
            apart[a][b] = apart[a][b-1] + apart[a-1][b]

T = int(input())
for i in range(T):
    k = int(input())
    n = int(input())

    print(apart[k][n-1])
