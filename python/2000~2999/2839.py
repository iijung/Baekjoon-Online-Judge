N = int(input())

for bag5 in range(N//5, -1, -1):
    sugar = N - bag5 * 5
    if sugar % 3 == 0:
        bag3 = sugar // 3
        print(bag3 + bag5)
        break
else:
    print(-1)
