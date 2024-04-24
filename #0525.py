t = int(input())
for i in range(t):
    s = input()
    maks, counter = 0, 0
    s1 = ""
    s2 = ""
    for i in s:
        counter += 1
        s1 += i
        s2 = i + s2 
        if s1 == s2:
            maks = counter
    print(maks)