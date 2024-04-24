#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n, m, x;
    std::cin >> n >> m >> x;
    int a[n];
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        a[i] %= m;
        for (int j=0; j<i; j++) {
            if ((a[i]*a[j])%m==x) counter++;
        }
    }
    std::cout << counter;
    return 0;
}