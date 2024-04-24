a = [1, 1]
n = int(input())
for i in range(2, n):
    a.append(a[i-1]+a[i-2])
print(2*a[n-1])