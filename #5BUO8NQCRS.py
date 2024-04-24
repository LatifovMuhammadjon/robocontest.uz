arr = [int(_) for _ in input().split()]
n = len(arr)
s = sum(arr)
x = s//n
print(arr.count(x))