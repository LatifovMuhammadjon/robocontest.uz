#include <iostream>

using namespace std;

int main()
{
    int t, maks=0;
    cin >> t;
    int a[t];
    for (int i=0; i<t; i++) {
        cin >> a[i];
        maks = max(maks, a[i]);
    }
    int arr[maks+1]= {-1, -1};
    int primes[] = {2,3,5,7};
    
    for (int i = 2; i <= maks; i++)
    {
        
        arr[i] = i;
        for (auto prime:primes)
        {
            
            if (i>=prime+2) {
                arr[i] = min(arr[i], arr[i-prime]+1);
            } else if (i==prime) {
                arr[i] = 1;
            }
        }
            
    }
    for (int i = 0; i < t; i++)
    {
        cout << arr[a[i]] << endl;
    }
    return 0;
}