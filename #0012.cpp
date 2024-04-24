#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n;
    bool a[n+1] = {0, 0};
    
    for (int i = 2; i <= n; i++)
    {
        a[i] = true;
        for (int j = 2; j*j <= i; j++)
        {
            if(i%j==0) {
                a[i] = false;
                break;
            } 
        }
        s += a[i];
    }
    if (s%2)
    {
        cout << "Ali";
    } else {
        cout << "Bobur";
    }
    return 0;
}