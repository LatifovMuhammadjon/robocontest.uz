#include <iostream>
#include <algorithm>
using namespace std;

int modpow(int x, int n, int m) {
    if (n == 0) return 1;
    long long u = modpow(x, n/2, m);
    u = (u*u) % m;
    if (n%2==1) u = (u*x) % m;
    return u;
}

int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b, a%b);
}
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d;
    e = (d+modpow(a, b, d) - c)%d;
    if (e==0) {
        cout << d;
        return 0;
    }
    cout << gcd(d, e);
    return 0;
}