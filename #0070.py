MOD = 1_000_000_007
def matrix_multiply(A, B):
    n = len(A)
    m = len(B[0])
    result = [[0 for i in range(m)] for _ in range(n)]
    for i in range(n):
        for j in range(m):
            for k in range(len(B)):
                result[i][j] += A[i][k] * B[k][j] % MOD
                result[i][j] %= MOD
    return result

def matrix_power(X, N):
    if N == 1:
        return X
    B = matrix_power(X, N // 2)
    B = matrix_multiply(B, B)
    if N&1:
        B = matrix_multiply(B, X)
    return B

X = [[0, 1], [1, 1]]

V = [[1], [1]]

a, b = map(int, input().split())
from math import gcd
ekub = gcd(a, b)
if ekub < 2:
    print(1)
    exit(0)
result = matrix_power(X, ekub - 1)
final_result = matrix_multiply(result, V)
print(final_result[0][0])
