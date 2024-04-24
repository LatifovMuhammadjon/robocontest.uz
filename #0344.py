n, m = map(int, input().split())
if n + m < 3 or n == 0 or m == 0:
    print(-1)
    exit(0)
mod = 1_000_000_007
print(n*m*(n+m-2)//2%mod)