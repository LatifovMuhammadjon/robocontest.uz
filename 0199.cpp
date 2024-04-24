#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n], s[n+1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s[i+1] = s[i] + a[i];
    }
    double maks = 0;
    for (int i = k; i <= n; i++)
    {
        for (int j = 0; i + j <= n; j++)
        {
            maks = max(maks, double(s[j+i]-s[j])/(double(i)));
        }
    }
    printf("%.6f", maks);
    return 0;
}