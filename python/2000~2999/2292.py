N = int(input())

step = 1
step_max = 1
while(step_max < N):
    step_max += step * 6
    step += 1
print(step)
