def abc(a):
    if a > 10:
        res = abc(a - 1)
        print(res)
    else:
        res = 0
    return res

abc(15)