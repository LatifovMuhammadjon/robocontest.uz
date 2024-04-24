n = int(input())
a = list(map(int, input().split()))
print(a[1] if len(a)>1 else a[0])