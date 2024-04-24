#include <iostream>

int main() {
    int t; long long n; std::string s;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        std::cout << (n-1)%9+1 << std::endl;
    }
    return 0;
}