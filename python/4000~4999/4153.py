while True:
    abc = list(map(int, input().split()))
    abc.sort()

    if abc[0] == 0 and abc[1] == 0 and abc[2] == 0:
        break

    if abc[0] ** 2 + abc[1] ** 2 == abc[2] ** 2:
        print("right")
    else:
        print("wrong")
