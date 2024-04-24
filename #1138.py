from math import gcd
t = int(input())
for i in range(t):
    a, b, c = map(int, input().split())
    if c%gcd(a,b):
        print("No")
        continue
    print("Yes")
    