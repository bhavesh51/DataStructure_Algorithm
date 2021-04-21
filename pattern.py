n = int(input())
for i in range(0,n):
    a,b = [int(x) for x in input().split()]
    x = a+b
    list1 = [int(d) for d in str(x)]
    list2 = []
    for i in list1:
        if i == 0:
            list2.append(6)
        elif i == 1:
            list2.append(2)
        elif i == 2:
            list2.append(5)
        elif i == 3:
            list2.append(5)
        elif i == 4:
            list2.append(4)
        elif i == 5:
            list2.append(5)
        elif i == 6:
            list2.append(6)
        elif i == 7:
            list2.append(3)
        elif i == 8:
            list2.append(7)
        elif i == 9:
            list2.append(6)
    print(sum(list2))