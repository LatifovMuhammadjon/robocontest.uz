s = input()
if 'x' in s:
    print(int(s, 16))
elif s[0] == '0' or '-0' in s:
    print(int(s, 8))
else:
    print(int(s))