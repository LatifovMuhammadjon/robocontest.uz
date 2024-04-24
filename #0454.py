k, n = map(int, input().split())
nums = "0123456789ABCDEF"
s = ""
if k==0:
    print(0)
    exit(0)
while k>0:
    s = nums[k%n] + s
    k //= n
print(s)