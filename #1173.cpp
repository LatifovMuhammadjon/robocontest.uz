#include <iostream>

int main()
{
    int t, n;
    long long x=0;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n >> x;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[j];
            if (x >= a[j]) x += a[j];
        }
        std::cout << x << std::endl;
    }
    return 0;
}
