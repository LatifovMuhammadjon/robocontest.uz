n = int(input())
count = bin(n)[2:].count('1')
i = n + 1 
while bin(i)[2:].count('1') != count:
    i += 1
print(i)