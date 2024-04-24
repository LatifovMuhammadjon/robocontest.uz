counter = 0
a, b = map(int, input().split())
while a!=b:
    if a > b:
        counter += a - b
        b = a
    else:
        if b&1:
            b += 1
        else:
            b //= 2
        counter += 1
print(counter)