from math import ceil
left, right = map(int, input().split())
a1 = ceil(left / 3)
an = right//3
na = an-a1 + 1
sum_a = 3*(a1+an)*na//2
b1 = ceil(left / 21)
bn = right//21
nb = bn-b1 + 1
sum_b = 21*(b1+bn)*nb//2
print(sum_a-sum_b)
