n, k = map(int, input().split())
a = tuple(map(int, input().split()))
begin = False
end = False
start = 0
stop = n - 1
for i in range(n//2):
    if not begin and a[i] > 0:
        start = i
        begin = True
    if not end and a[n - i - 1] > 0:
        end = True
        stop = n - i - 1
l = list(a[start:stop+1])
for i in range(k-1):
    mini = 0
    for idx, val in enumerate(l):
        if a[mini] > val:
            mini = idx
    if a[mini] < 0:
        l.pop(mini)
    else:
        break
s = [0]
length = len(l)
for i in range(length):
    s.append(s[i] + l[i])
maks = 0
for i in range(length):
    for j in range(i, length+1):
        if maks<s[j]-s[i]:
            maks = s[j] - s[i]
print(maks)