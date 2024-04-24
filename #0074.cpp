#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int modpow(int a, int n, int m) {
    if (n == 0) return 1;
    long long u = modpow(a, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1) u = (u * a) % m;
    return u;
}

int main() {
    int n;
    cin >> n;
    int p = 1;

    for (int i = 1; i <= n; ++i) {
        p = (1LL* p * modpow(i + 1, MOD - 2, MOD)%MOD*(4*i-2)) % MOD;
    }

    cout << p << endl;
    return 0;
}
