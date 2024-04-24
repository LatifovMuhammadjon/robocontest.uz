a, c, k = map(int, input().split())
if c <= k:
    print(0)
    exit(0)
print((a - k)//c+1)