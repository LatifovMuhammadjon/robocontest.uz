#include <iostream>

int main()
{
    int n, a,b,c,d, counter=0;
    std::cin >> n >> a >> b >> c >> d;
    for (int i = 1; i <= n; i++)
    {
        if (a<=i && i <= b) continue;
        else if (c<=i && i <= d) continue;
        counter++;
    }
    std::cout << counter;
    return 0;
}
