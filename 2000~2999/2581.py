M = int(input())
N = int(input())

sum = 0
min = 0

for i in range(M, N+1):

    if i == 1:
        continue

    for j in range(2, i):
        if i % j == 0:
            break
    else:
        if min == 0:
            min = i
        sum += i

if min == 0:
    print(-1)
else:
    print(sum)
    print(min)
