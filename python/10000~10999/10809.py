S = input()
for i in range(ord('a'), ord('z') + 1):
    print(S.find(chr(i)), end=' ')
