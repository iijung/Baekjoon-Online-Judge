def f(word):
    i = 0
    arr = []
    while(i < len(word)):
        if word[i] in arr:
            return 0
        else:
            arr.append(word[i])
            tmp = word[i]
            while(i < len(word) - 1 and tmp == word[i+1]):
                i += 1
        i += 1
    return 1


cnt = 0
n = int(input())
for i in range(n):
    cnt += f(list(input()))
print(cnt)
