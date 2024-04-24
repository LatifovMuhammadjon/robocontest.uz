#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n; char result = '=';
    std::cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (i > 1 && a[i] != a[i-1]) {
            result = '>';
        }
    }
    std::cout << result;
    return 0;
}
