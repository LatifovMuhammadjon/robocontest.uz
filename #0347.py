def modpow(a, n, mod):
    if n == 0:
        return 1
    u = modpow(a, n//2, mod)
    u = u*u%mod
    if n%2:
        u = u * a % mod
    return u
MOD = 1_000_000_007
a, n = map(int, input().split())
print(modpow(a, n+1, MOD))