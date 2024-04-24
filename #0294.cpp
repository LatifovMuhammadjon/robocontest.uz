#include <iostream>
#include <bitset>
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::string s;
    std::cin >> s;
    int n = s.length();
    std::cout << n << '\n';
    for (int i = 0; i < n; i++)
    {
        std::cout << std::bitset<16>(s[i]) << '\n';
    }
    return 0;
}
