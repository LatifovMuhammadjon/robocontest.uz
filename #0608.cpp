#include <iostream>

int main()
{
    short n; long long a;
    std::cin >> n >> a;
    while (a>0)
    {
        a/=10;
        n--;
    }
    if(n) std::cout << "no";
    else std::cout << "yes";
    return 0;
}
