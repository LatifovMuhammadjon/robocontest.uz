#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n%11 == 0 || n<10) {
        cout<<"NO";
    } else {
        cout<<"YES";
    }
    return 0;
}
