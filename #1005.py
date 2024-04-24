s = input()
maks = 0
counter = 0
for c in s:
    if c == '0':
        counter += 1
        maks = max(maks, counter)
    else:
        counter = 0
print(maks)