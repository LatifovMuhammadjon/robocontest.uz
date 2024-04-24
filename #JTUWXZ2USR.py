n = int(input())
sets = [
    [int(i) for i in input().split()] for i in range(n)
]
counter = 0
total_sum = 0
for i in range(len(sets)-1):
    for j in range(i+1, len(sets)):
        for k in sets[i]:
            for l in sets[j]:
                counter += 1
                total_sum += (k + l) ** 3

print(total_sum/counter)