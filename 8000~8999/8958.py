case = int(input())

for i in range(case):
    score = 0
    point = 1
    for j in input():
        if j == 'O':
            score += point
            point += 1
        elif j == 'X':
            point = 1
    print(score)
