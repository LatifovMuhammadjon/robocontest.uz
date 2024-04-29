#include <iostream>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int t, n, k, s;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> k;
        s = 0;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i];
            if (a[i]<=0) s++;
        }
        std::cout << (k>s?"Zerikarli\n":"Qizg'in\n");
    }
    return 0;
}