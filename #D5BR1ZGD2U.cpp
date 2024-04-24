#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 0; i <= n; i++)
    {
        if (i<6)
        {
            a[i] = i;
        } else {
            a[i] = a[i-1]+1;
            for (int j = 2; j*j <= i; j++)
            {
                if (i%j==0)
                {
                    a[i] = min(a[i/j]+a[j], a[i]);
                }
            }
        }
    }
    cout << a[n] << endl;
    return 0;
}