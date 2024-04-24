#include <iostream>

int main()
{
    short t, k, n; long long q;
    std::cin >> t;
    for (short i = 0; i < t; i++)
    {
        std::cin >> k >> q >> n;
        for (short j = 0; j < n; j++)
        {
            q += k;
            q <<= 1;
        }
        std::cout << q << std::endl;
    }
    return 0;
}
