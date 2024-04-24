n = int(input())
if n < 1:
    n = abs(n)
    print(-(n*(n+1)//2-1))
    exit(0)
print(n*(n+1)//2)