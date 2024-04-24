#include <iostream>

using namespace std;

int main() {
    int n, k;
    long long res = 1;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        res = res*(k+1)%1000000007;
    }
    cout << res;
}