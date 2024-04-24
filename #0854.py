def modpow(a, b, m):
    if b==0:
        return 1
    x = modpow(a, b//2, m)
    x = x * x % m
    if b&1:
        x = x * a % m
    return x
MOD = 1_000_000_007
s = 0
n, k = map(int, input().split())
for i in range(1, n+1):
    s += modpow(i, k, MOD)
    s %= MOD
print(s)