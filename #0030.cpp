#include <iostream>

using namespace std;
long long d[501];

void rec(long long n, int k) {
    for (int i = 1; i <= 500; i++)
    {
        if (n%i==0)
        {
            if(d[i] == 0 || d[i] > n) {
                d[i] = n;
            } 
        }
        
    }
    if (k==16) return;
    rec(n*10, k+1);
    rec(n*10+9, k+1);
}
int main() {
    rec(9, 1);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << d[n] << endl;
    }
    return 0;
}