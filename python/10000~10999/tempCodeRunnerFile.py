N = int(input())
number = list(map(int, input().split())).sort()
print("{0} {1}".format(number[0], number[-1]))