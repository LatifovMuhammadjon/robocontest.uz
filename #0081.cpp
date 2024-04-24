#include <iostream>
using namespace std;
#define LL unsigned long long
int main() {
    LL n, mod = 944161110001;
    cin >> n;
    LL a[4] = {1, 1, 1};
    if (n<4) {
        cout << 1;
        return 0;
    }
    for (LL i = 3; i < n; i++)
    {
        a[3] = 0;
        for (int j = 1; j < 4; j++)
        {
            a[3] = (a[3] + j*a[3-j]%mod)%mod;
        }
        for (int j = 0; j < 3; j++)
        {
            a[j] = a[j+1];
        }
        
    }
    cout << a[3];
    return 0;
}