from math import inf
def solve(n):
    primes = (2, 3, 5, 7)
    if n<2:
        return inf
    elif n in primes:
        return 1
    else:
        best = inf
        for prime in primes:
            best = min(best, solve(n-prime)+1)
        return best
    

t = int(input())
for i in range(t):
    n = int(input())
    if n < 2:
        print(-1)
    else:
        print(solve(n))