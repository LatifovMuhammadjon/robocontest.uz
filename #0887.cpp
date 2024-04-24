#include <iostream>

using namespace std;
const int MOD = 1000000007;
int modpow(int x, int n, int m) {
    if (n == 0) return 1%m;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u;
}
int main() {
    int n, p = 1;
    cin >> n;
    cout << modpow(2, n-1, MOD);
    return 0;
}
1 * 9 + 2 * 90 + 3* 900 + 4* 9000 + 5 * 90000