def modpow(x, n, m):
    if n == 0:
        return 1
    u = modpow(x, n//2, m)
    u = (u * u) % m
    if n % 2 == 1:
        u = (u * x) % m
    return u


a, b, c, d = map(int, input().split())
e = (d + modpow(a, b, d) - c) % d
if e == 0:
    print(d)
    exit(0)
from math import gcd
print(gcd(e, d))
