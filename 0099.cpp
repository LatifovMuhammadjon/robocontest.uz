
#include <iostream>

using namespace std;
bool isPrime(long long n) {
    for (int i = 2; 1LL*i*i <= n; i++)
    {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    if (isPrime(n+1)) {
        cout << n;
        return 0;
    } else if (n == 3) {
        cout << 2;
        return 0;
    } else {
        cout << 0;
    }
    return 0;
}