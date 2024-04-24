n = int(input())
m = 1_000_000_007
print((n%m*(n%m*n%m+3*n%m+3)+1)%m)