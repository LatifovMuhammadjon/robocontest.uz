#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    long long n;
    short counter=0;
    std::cin >> n;
    while (n>0)
    {
        n >>= 1;
        counter++;
    }
    std::cout << counter;
    return 0;
}
