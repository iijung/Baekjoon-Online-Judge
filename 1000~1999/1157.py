word = input().upper()

arr = [0 for i in range(26)]
for i in word:
    idx = ord(i) - ord('A')
    arr[idx] += 1

max_value = max(arr)
if (arr.count(max_value) > 1):
    print("?")
else:
    print(chr(ord('A') + arr.index(max_value)))
