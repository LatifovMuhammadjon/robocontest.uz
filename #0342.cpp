#include <iostream>

using namespace std;
int solve(int n) {
    if (n < 4) return 0;
    else if (n == 4) return 1;
    else return solve(n-1)+solve(n%4+1);
}

int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    cout << solve(a);
    return 0;
}
