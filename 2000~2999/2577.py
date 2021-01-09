A = int(input())
B = int(input())
C = int(input())

arr = list(str(A * B * C))
for i in range(10):
    print(arr.count(str(i)))
