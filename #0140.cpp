#include <iostream>
int main() {
    int s, n, m, result = -1, sum;
    std::cin >> s >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; i++)
        {
            sum = a[i] + b[j];
            if (result<sum && sum<=s) result=sum;
        }
    }
    std::cout << result << std::endl;
    return 0;
}