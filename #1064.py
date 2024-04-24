n = int(input())
index = -1
maks_year = 0
for i in range(n):
    year, gender = map(int, input().split())
    if not gender:
        if year>maks_year:
            maks_year = year
            index = i + 1
print(index)