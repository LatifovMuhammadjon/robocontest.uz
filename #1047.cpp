#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1'000'000'007;

vector<vector<int>> matrix_multiply(vector<vector<int>> A, vector<vector<int>> B) {
    int n = A.size();
    int m = B[0].size();
    vector<vector<int>> result(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < B.size(); ++k) {
                result[i][j] += (1LL*A[i][k] * B[k][j]) % MOD;
                result[i][j] %= MOD;
            }
        }
    }
    return result;
}

vector<vector<int>> matrix_power(vector<vector<int>> X, int N) {
    if (N == 1) {
        return X;
    }
    if (N % 2 == 0) {
        auto B = matrix_power(X, N / 2);
        return matrix_multiply(B, B);
    } else {
        auto B = matrix_power(X, N / 2);
        return matrix_multiply(matrix_multiply(B, B), X);
    }
}

int main() {
    vector<vector<int>> X = {{0, 1}, {1, 1}};
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x, y, a;
        cin >> x >> y >> a;
        vector<vector<int>> V = {{x}, {y}};
        if (a < 2) {
            cout << V[a][0] << endl;
            continue;
        }
        auto result = matrix_power(X, a);
        auto final_result = matrix_multiply(result, V);
        cout << final_result[0][0] << endl;
    }
    return 0;
}
