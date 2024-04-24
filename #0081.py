MOD = 944161110001

def matrix_multiply(A, B):
    n = len(A)
    m = len(B[0])
    result = [[0] * m for _ in range(n)]
    for i in range(n):
        for j in range(m):
            for k in range(len(B)):
                result[i][j] += A[i][k] * B[k][j] % MOD
                result[i][j] %= MOD
    return result

def matrix_power(X, N):
    if N == 1:
        return X
    if N % 2 == 0:
        B = matrix_power(X, N // 2)
        return matrix_multiply(B, B)
    else:
        B = matrix_power(X, N // 2)
        return matrix_multiply(matrix_multiply(B, B), X)

X = [[0, 1, 0], [0, 0, 1], [3, 2, 1]]

V = [[1], [1], [1]]

n = int(input())
if n<4:
    print(1)
    exit(0)
result = matrix_power(X, n-1)

final_result = matrix_multiply(result, V)
print(final_result[0][0])