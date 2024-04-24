s =
for i in s:
    if isEven:
        s1 += ord(i)-ord('0')
    else:
        s2 += ord(i)-ord('0')
    isEven = not isEven
m = abs(s1-s2)
if m:
    print("No")
else:
    print("Yes")