#include <iostream>

int main() {
    int n, q, l, r;
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin >> n >> q;
    int a[n]; long long s[n+1];
    s[0] = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        s[i+1] = s[i] + a[i];
    }
    for (int i = 0; i < q; i++)
    {
        std::cin >> l >> r;
        if (l < r) std::cout << s[r] - s[l-1] << '\n';
        else std::cout << s[l] - s[r-1] << '\n';
    }
    return 0;
}