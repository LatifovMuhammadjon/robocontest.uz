#include <iostream>

int main()
{
    int n, w, h;
    std::cin >> n >> w >> h;
    int a[n];
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
        if (a[i]*a[i] <= w*w+h*h) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}
