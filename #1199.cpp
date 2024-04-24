#include <iostream>

int main()
{
    int n, s = 0;
    std::cin >> n;
    if (n<6) {
        std::cout << n;
        return 0;
    }
	for (int i = 2; 1LL*i * i <= n; i++)
    {
        if (n % i == 0) {
            while (n % i == 0) {
                s += i;
                n /= i;
            }
        }
    }
    if (n > 1) s += n;
    std::cout << s;
	return 0;
}

