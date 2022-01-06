def d(n):
    sum = n
    for i in str(n):
        sum += int(i)
    return sum


arr = list()
for i in range(1, 10000):
    arr.append(d(i))

for i in range(1, 10001):
    if i not in arr:
        print(i)
