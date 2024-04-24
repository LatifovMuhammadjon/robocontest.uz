#include <iostream>

int main()
{
    int n, a, b, m;
    std::cin >> n >> a >> b;

    for (int i = 0; i < n; i++)
    {
        std::cin >> m;
        if (m*m <= a*a+b*b) std::cout << "BOX\n";
        else std::cout << "TRASH\n";
    }
    return 0;
}
