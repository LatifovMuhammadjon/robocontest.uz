MOD = 10

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

X = [[0, 1, 0], [0, 0, 1], [1, 1, 1]]

V = [[int(i)] for i in input().split()]
n = int(input())
q = list(map(int, input().split()))
for i in q:
    if i<3:
        print(V[i][0], end=" ")
    else:
        power = matrix_power(X, i)
        result = matrix_multiply(power, V)
        print(result[0][0], end=" ")
