xy = []
for i in range(3):
    xy.append(list(map(int, input().split())))

xs = [i[0] for i in xy]
ys = [i[1] for i in xy]

x = 0
for i in xs:
    if xs.count(i) == 1:
        x = i
        break
y = 0
for i in ys:
    if ys.count(i) == 1:
        y = i
        break

print("{0} {1}".format(x, y))
