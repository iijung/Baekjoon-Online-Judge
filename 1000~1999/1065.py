def f(x):
    if x < 100:
        return 1

    arr = list(map(int, str(x)))
    if arr[2] - arr[1] == arr[1] - arr[0]:
        return 1

    return 0


cnt = 0
N = int(input())
for i in range(1, N+1):
    if f(i) == 1:
        cnt += 1
print(cnt)
