code = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

data = input()
count = 0
for i in code:
    count += data.count(i)

print(len(data) - count)
