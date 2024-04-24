#include <iostream>

using namespace std;
int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main()
{
    int a, b, k;
    cin >> a >> k;
    b=k/gcd(a, k);
    cout << b;
    return 0;
}