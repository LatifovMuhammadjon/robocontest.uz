#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    long long k, n, sum=0, c;
    cin >> k >> n;
    vector<int> a;
    for (int i = 0; i < k; i++)
    {
        cin >> c;
        a.push_back(c);
        sum += a[i];
    }
    
    sum *= n/k;
    sort(a.begin(), a.end(), greater<>());
    for (long long i = 0; i < n%k; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}
