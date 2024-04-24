#include <iostream>

int sumpow(int n, int m) {
    int counter = 0;
    while (n > 0) {
        n /= m;
        counter += n;
    }
    return counter;
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << std::min(sumpow(b, 5) - sumpow(a-1, 5), sumpow(b, 2) - sumpow(a-1, 2));
    return 0;
}

