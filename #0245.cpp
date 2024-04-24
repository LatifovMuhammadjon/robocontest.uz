#include <iostream>

int main()
{
    int n, m, l, r, k;
    long long s = 0;
    std::cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        std::cin >> l >> r >> k;
        s += k*(r-l+1);
    }
    std::cout << s/n;
    return 0;
}
