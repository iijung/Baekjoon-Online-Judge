N = int(input())
scores = list(map(int, input().split()))

M = max(scores)
for i in range(len(scores)):
    scores[i] *= 100 / M

print(sum(scores) / N)
