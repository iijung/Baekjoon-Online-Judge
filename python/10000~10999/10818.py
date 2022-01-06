""" 최소, 최대
N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
"""

N = int(input())
number = list(map(int, input().split()))
number.sort()
print("{0} {1}".format(number[0], number[-1]))
