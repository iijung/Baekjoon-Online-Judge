
N = int(input())
arr = list(map(int, input().split()))

cnt = 0
for n in arr:
    if n == 1:
        continue
    flag = 0
    for i in range(2, n):
        if n % i == 0:
            flag = 1
            break
    if flag == 1:
        continue
    cnt += 1
print(cnt)
