n = int(input())
a = 1
for i in range(2, int(n**0.5)+1):
    if n%i == 0:
        a = i
b = n//a
print(max(map(lambda x: len(str(x)), (a, b))))