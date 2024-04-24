from math import factorial

def func(p, q, r):
    res = 0
    for i in range(p+1):
        cnt = 0
        for j in range(1,q+1):
            a = r ** j
            b = (a-1)/a
            cnt += b**j
        cnt2 = factorial(p)/(factorial(p-i)*factorial(i))
        if (i&1):
            res -= cnt*cnt2
        else:
            res += cnt*cnt2
    return res

print(func(2, 3, 2))