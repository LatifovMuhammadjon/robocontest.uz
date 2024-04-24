#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n, k, l, r, result;
    std::cin >> n >> k >> l >> r;
    result = (r+n-k)/n;
    if (l>k) result -= (l+~k+n)/n;
    std::cout << result;
    return 0;
}
