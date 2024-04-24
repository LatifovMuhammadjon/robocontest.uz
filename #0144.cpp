#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    long long a, b, mod;
    std::cin >> a >> b;
    mod = (a-a/b*b+std::abs(b))%std::abs(b);
    short count=0;
    while (mod>0)
    {
        count += mod&1;
        mod >>= 1;
    }
    std::cout << count;
    return 0;
}
