t = int(input())
for i in range(t):
    x, y,a,b = map(int, input().split())
    s = y - x
    v = a + b
    if s%v:
        print(-1)
    else:
        print(s//v)