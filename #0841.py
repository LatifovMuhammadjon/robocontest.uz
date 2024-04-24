def modpow(a, n, m):
    if n == 0:
        return 1
    u = modpow(a, n // 2, m)
    u = u * u % m
    if n%2:
        u = u *a % m
    return u
MOD = 1_000_000_007
t = int(input())
for i in range(t):
    a, b = map(int, input().split())
    print(modpow(a, b, MOD))
