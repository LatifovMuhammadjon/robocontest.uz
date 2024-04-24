n = int(input())
counter = 0
a = n//4
for i in range(1, a+1):
    b = (n-i)//3
    for j in range(i, b+1):
        c = (n-i-j)//2
        for k in range(j, c+1):
            if (n - i - j >= 2 * k):
                counter += 1
print(counter)