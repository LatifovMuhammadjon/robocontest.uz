a, b = map(int, input().split())
if a<b:
    a, b = b, a
if a - b != 2:
    print("No")
    exit(0)
for i in range(2, int(a**0.5)+1):
    if a%i==0 or b%i==0:
        print("No")
        exit(0)
print("Yes")