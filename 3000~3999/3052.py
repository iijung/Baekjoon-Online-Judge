arr = list()
for i in range(10):
    arr.append(int(input()))
    arr[i] %= 42

arr.sort()
for i in reversed(range(1, len(arr))):
    if (arr[i] == arr[i-1]):
        del arr[i]
print(len(arr))

"""
set 자료형은 중복되지 않은 원소를 가졌으므로, 
set 으로 변환한 뒤 list 로 다시 변환하면 중복이 쉽게 제거된다. 

new_arr = list(set(old_arr)) 
print(len(new_arr))
"""
