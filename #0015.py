def divmod(a, b, m):
    if b<=0:
        return 1
    u = divmod(a, b//2, m)
    u = u * u % m
    if b&1:
        u = u * a % m
    return u
MOD = 1_000_000_007
n, k = map(int, input().split())

print((divmod(k,n, MOD)-1)*divmod(k-1, MOD-2, MOD)%MOD)