#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n; 
    cout << (n % 10 > 0 || n == 0) << '\n';
    return 0;
}