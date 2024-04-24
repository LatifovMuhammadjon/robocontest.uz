#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count[n+1];
    count[0] = 1;
    set<int> coins;
    for (int i = 0; i < 31; i++)
    {
        coins.insert(1<<i);
    }
    
    for (int x = 1; x <= n; x++) {
        for (auto c : coins) {
            if (x-c >= 0) {
                count[x] += count[x-c];
            }
        }
    }
    cout << count[n] << endl;
    return 0;
}