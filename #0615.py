sums = [0, 0]
s = input()
for i in map(int, s):
    sums[i&1] += i
print(sums[1&int(s[-1])])