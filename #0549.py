s = input()
count_z = 0
count_o = 0
for i in s:
    if i == 'z':
        count_z += 1
    else:
        count_o += 1
print("Yes" if count_o==2*count_z else "No")