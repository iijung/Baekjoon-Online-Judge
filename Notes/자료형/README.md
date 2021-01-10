# 변수
- 컴퓨터는 메모리에 데이터를 저장한다.
- 변수를 통해 데이터가 저장된 메모리에 접근할 수 있다.
- 파이썬에서는 저장된 값을 기준으로 자료형을 지정된다.
- `변수명 = 데이터값` 형식으로 변수를 생성할 수 있다. 
```python 
a = 10 

print(a)       # 10             (메모리의 값)
print(id(a))   # 10105376       (메모리 주소)
print(type(a)) # <class 'int'>  (자료형 타입)
```
> 다양한 변수 할당
```python
a, b, c = 10, 20, 30 

x = y = z = 10 
```

> 변수의 값 교체 
```python
a = 10
b = 20
a, b = b, a

print(a) # 20
print(b) # 10
```

# 자료형
프로그래밍 시 사용되는 숫자, 문자열 등의 자료 형태이다. 

- `bool`, `int`, `float`, `str`,


## 불 자료형(Bool)
`참(True)` 과 `거짓(False)`을 나타내는 자료형이다. 

`bool()` 연산자로 자료형의 참과 거짓을 알 수 있는데  문자열, 리스트, 튜플, 딕셔너리 등의 값이 비어있으면 `False` 이다. 
```python
bool(3)        # True
bool(1)        # True
bool(0)        # False (*)
bool(None)     # False

bool("python") # True
bool("")       # False

bool([1, 2, 3]) # True
bool([])        # False
bool(())        # False
bool({})        # False
```

## 숫자 자료형(Number)
> 정수형(int; Integer))
```python
a = 0
b = 123
c = -345

o = 0o34   # 8진수
d = 28     # 10진수 
h = 0x1c   # 16진수

n = int(input())  # 사용자 입력 
s = int("314")    # 문자열을 정수로 전환 
```
> 실수형(float; Floating-point)
```python
a = 1.2
b = -3.14
c = 4.24E10
d = 4.24e-10 

n = float(int())  # 사용자 입력
s = float("3.14") # 문자열을 실수로 전환
```

> 정수 연산
```python
a, b = map(int, input().split()) # 2 3 

print(a + b)   # 덧셈 : 5
print(a - b)   # 뺄셈 : -1
print(a * b)   # 곱셈 : 6
print(a ** b)  # 제곱 : 8
print(a % b)   # 나머지 : 2
print(a / b)   # 나눗셈 : 0.6666666666666666
print(a // b)  # 몫     : 0 
```

## 문자열 자료형 (String)
문자, 단어 등으로 구성된 문자들의 집합을 의미한다. 

```python
a = 'Hello World!'
b = "Hello World!"
c = '''Hello World!'''
d = """Hello World!"""

s = input()                # 사용자 입력 
```

> 인덱싱 
```python
       .     . .  .
       012345678901
arr = "Hello World!"

print(arr[0] + arr[6]) # HW
print(arr[-4] + arr[-1]) # r!
```
> 슬라이싱 `[시작번호: 끝번호 + 1]`
```python
       012345678901
arr = "Hello World!"

print(arr[:]) # Hello Wolrd!
print(arr[:4]) # Hell
print(arr[8:]) # rld!
print(arr[2:-3]) # llo Wor
```

> 문자열 연산
```python
print("Hello " + "World!") # Hello World!
print("Hi!" * 3)           # Hi!Hi!Hi!

print(len("Hello"))        # 5 
print(",".join("Hello"))   # H,e,l,l,o
```

| 문자열 관련 함수           | 결과            | 설명                                                  |
| -------------------------- | --------------- | ----------------------------------------------------- |
| `"test".count('e')`        | `1`             | 지정된 문자의 개수 반환                               |
| `"test".find('e')`         | `1`             | 지정된 문자의 가장 첫번째 인덱스 반환 (없으면 `-1`)   |
| `"test".index('e')`        | `1`             | 지정된 문자의 가장 첫번째 인덱스 반환 (없으면 `오류`) |
| `"Test".upper()`           | `TEST`          | 소문자를 대문자로 변환한다                            |
| `"Test".lower()`           | `test`          | 대문자를 소문자로 변환한다                            |
| `"  test  ".lstrip()`      | `test  `        | 왼쪽 공백을 제거한다                                  |
| `"  test  ".rstrip()`      | `  test`        | 오른쪽 공백을 제거한다                                |
| `"  test  ".strip()`       | `test`          | 양쪽 공백을 제거한다                                  |
| `"test".replace("es",il")` | `tilt`          | 특정 문자열을 다른 문자로 치환한다                    |
| `"t e s".split()`          | `['t','e','s']` | 공백을 기준으로 문자열을 나눈다                       |
| `"t:e:s".split(":")`       | `['t','e','s']` | `:`을 기준으로 문자열을 나눈다                        |

그 외 자세한 사항은 [문자열](./문자열.md) 참고 

## 리스트 자료형
순서가 있는 수정 가능한 값들의 집합을 의미한다.

```python
a = []                   # a = list() 
b = [1, 2, 3]
c = ['a', 'bc', 'de', 'efg']
d = [1, 2, 'a', 'c']
e = [1,2, ['a', 'b']]

# input : 2 8 4 12 3 5 
arr1 = input().split()       # 문자열 리스트; ['2', '8', '4', '12', '3', '5']
arr2 = list(map(int, arr1))  # 정수형 리스트; [2, 8, 4, 12, 3, 5]
```

```python
n = int(input())
arr = list()
for i in range(n):
    arr.append(int(input()))
print(arr)

# input
5
1 2 3 4 5

# output
[1, 2, 3, 4, 5]
```

> 인덱싱
```python
        0    1    2    3    4 
arr = ['a', 'b', 'c', 'd', 'e']

print(arr[0] + arr[2]) # ac
print(arr[-3] + arr[-1]) # ce
```
> 슬라이싱 `[시작번호: 끝번호 + 1]`
```python
       0  1  2   3-0  3-1  3-2   4  5
arr = [1, 2, 3, ['a', 'b', 'c'], 4, 5]

print(arr[:])     # [1, 2, 3, ['a', 'b', 'c'], 4, 5]
print(arr[:3])    # [1, 2, 3,]
print(arr[3:])    # [['a', 'b', 'c'], 4, 5]
print(arr[2:-1])   # [3, ['a', 'b', 'c'], 4]
print(arr[3][:2]) # ['a', 'b'] 
```

> 리스트 연산
```python
print([1,3,5] + [2,4,6])  # [1, 3, 5, 2, 4, 6]
print([1,3,5] * 2)        # [1, 2, 3, 1, 2, 3]

print(len([1,3,5]))               # 3
print(max([5, 3, 7, 1, 3]))       # 7
print(min([5, 3, 7, 1, 3]))       # 1 
print([5, 3, 7, 1, 3].count(3))   # 2

arr1 = [1, 3, 5]
arr1.extend([2, 4, 6])
print(arr1)               # [1, 3, 5, 2, 4, 6]

print(arr1.pop())         # 6 
print(arr1)               # [1, 3, 5, 2, 4]

```
> `arr = [5,3,7,1,3]` 을 기준으로 테스트 

| 리스트 관련 함수       | arr 결과                  | 설명                                                |
| ---------------------- | ------------------------- | --------------------------------------------------- |
| `arr.reverse()`        | `[3, 1, 7, 3, 5]`         | 리스트를 역순으로 정렬                              |
| `arr.sort()`           | `[1, 3, 3, 5, 7]`         | 리스트를 오름차순 정렬 (알파벳은 a,b,...)           |
| `arr.sort().reverse()` | `[7, 5, 3, 3, 1]`         | 리스트를 내림차순 정렬 (알파벳은 z,y,...)           |
| `del arr[1:3]`         | `[5, 1, 3]`               | 리스트 내의 요소 삭제                               |
| `arr.pop()`            | `[5, 3, 7, 1]`            | 리스트 제일 뒤의 요소를 반환하고 제거               |
| `arr.append([6,2])`    | `[5, 3, 7, 1, 3, [6, 2]]` | 리스트 제일 뒤에 요소 추가                          |
| `arr.insert(2,[6,2])`  | `[5, 3, [6, 2], 7, 1, 3]` | 리스트 특정 위치에 요소 삽입                        |
| `arr.index(3)`         | `1`                       | 지정된 값의 가장 첫번째 인덱스 반환 (없으면 `오류`) |
| `arr.remove(3)`        | `[5, 7, 1, 3]`            | 지정된 값의 가장 첫번째 요소를 제거                 |


그 외 자세한 사항은 [리스트](./리스트.md) 참고 

## 튜플 자료형
순서가 있는 수정 불가능한 값들의 집합을 의미한다.

```python
```
그 외 자세한 사항은 [튜플](./튜플.md) 참고 

## 딕셔너리 자료형

```python
```
그 외 자세한 사항은 [딕셔너리](./딕셔너리.md) 참고 

## 집합 자료형

```python
```
그 외 자세한 사항은 [집합](./집합.md) 참고 