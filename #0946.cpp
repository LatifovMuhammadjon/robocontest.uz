#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, s = 0;
    cin >> n >> k;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == k) {
            s += a[i];
            v.push_back(i + 1);
        }
    }
    cout << s << endl;
    for (auto c:v) {
        cout << c << " ";
    }
    return 0;
}