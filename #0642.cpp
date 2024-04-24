#include <iostream>
int main()
{
    short a, b, d;
    std::cin >> a >> b;
    d = a*a - 4*b;
    int i=0;
    while (i * i < d)
    {
        i++;
    }
    if(i*i == d) {
        std::cout << (a - i)/2 << " " << (a + i)/2 << std::endl;
        if (i > 0) std::cout << (a + i)/2 << " " << (a - i)/2 << std::endl;
        return 0;
    }
    std::cout << -1;
    return 0;
}
