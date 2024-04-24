#include <iostream>
#include <bitset>
using namespace std;

int main() {
    long long n, i=1, j;
    cin >> n;
    while (i*2<n) {
        i*=2;
    }
    j = n;
    while (i<j) {
        
        if (j+ bitset<64>(j).count()== n)
        {
            cout << j;
            return 0;
        }
        j--;
    }
    if (i==j)
    {
        cout << -1;
    }
    return 0;
}