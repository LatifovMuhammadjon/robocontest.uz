n = int(input())
p = 1
def modpow(a, n, m):
    if n == 0:
        return 1
    u = modpow(a, n//2, m)
    u = u*u % m
    if n%2:
        u = (u*a)%m
    return u

MOD = 1_000_000_007
for i in range(1, n+1):
    p = p * (4*i-2)*modpow(i+1, MOD-2, MOD) % MOD
print(p)
