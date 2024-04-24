s = input()
m = 0
for i in s:
    m += ord(i)-ord('0')
    m %= 3
if m:
    print("No")
else:
    print("Yes")