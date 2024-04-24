op = {
    'X++': 1,
    '++X': 1,
    'X--': -1,
    '--X': -1,
}
n = int(input())
s = sum(op[input()] for i in range(n))
print(s)