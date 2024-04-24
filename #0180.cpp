#include <iostream>

int main() {
    short n, k, max = 0, result=0;
    std::cin >> n >> k;
    short a[n];
    for (short i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] > max) max = a[i];
    }
    if (k<max) result = max-k;
    std::cout << result;
    return 0;
}