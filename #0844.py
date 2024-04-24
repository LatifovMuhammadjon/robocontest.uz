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
    a, b, c = map(int, input().split())
    bc_mod_m_minus_1 = modpow(b, c, MOD-1)
    print(modpow(a, bc_mod_m_minus_1, MOD))