X = int(input())

step = 1
step_max = 1
while X > step_max:
    step += 1
    step_max += step

diff = step_max - X
if step % 2 == 0:
    print("{0}/{1}".format(step - diff, 1 + diff))
else:
    print("{0}/{1}".format(1 + diff, step - diff))

# n     a_{n} = a_{n-1} + n
# 1     ... 1                   i + j = 2
# 2     ... 3                   i + j = 3
# 3     ... 6                   i + j = 4
# 4     ... 10                  i + j = 5
# 5     ... 15                  i + j = 6
