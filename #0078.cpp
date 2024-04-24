#include <iostream>

using namespace std;

int main()
{
    int n, k, s = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i] - k;
        if (s < 0) s = 0;
    }
    cout << s;
    return 0;
}
