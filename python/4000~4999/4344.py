C = int(input())
for i in range(C):
    N = list(map(int, input().split()))

    cnt = 0
    avg = sum(N[1:]) / N[0]
    for j in N[1:]:
        if j > avg:
            cnt += 1

    print("{0:.3f}%".format(cnt / N[0] * 100))
