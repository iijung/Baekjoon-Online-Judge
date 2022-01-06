T = int(input())
for i in range(T):
    H, W, N = map(int, input().split())
    h = N % H if N % H else H
    w = (N - 1)//H + 1
    print(h * 100 + w)

"""    
    H                       H
    3   3   6   9  12       3  1H   2H   3H   4H
    2   2   5   8  11       2  0H+2 1H+2 2H+2 3H+2
    1   1   4   7  10       1  0H+1 1H+1 2H+1 3H+1
    W   1   2   3   4       W  1    2    3    4       
    
    h(N) = N % H 
    w(N) = (N -1) // H + 1
"""
