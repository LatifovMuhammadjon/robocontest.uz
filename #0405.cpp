#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double r = 0.5*max(abs(x1-x2),abs(y1-y2));
    cout << setprecision(1) << fixed << r;
    return 0;
}