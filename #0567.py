a = input()
if ' ' in a:
    a, b = map(int, a.split())
    print(a+b)
else:
    a = int(a)
    b = int(input())
    print(a*b)