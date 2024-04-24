a = int(input())
b = int(input())
i = 0
while True:
    i += 1
    if a & i == b & i:
        break
print(i) 
